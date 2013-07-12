#include "StdAfx.h"



namespace SoundBoard
{
	using namespace Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;

	WaveForm::WaveForm(String^ path, int pbl, int pbw)
	{
		this->wave = this->getWaveForm(path, pbl, pbw);
	}
	Bitmap^ WaveForm::getWaveForm(String^ path, int pbl, int pbw)
	{
		//here is the place where the WaveForm should be generated.
		
		//Setting two strings for the shell command function to return errors and output.
		String^ _Output = nullptr;
		String^ _Error = nullptr;

		//String^ temp = path->Substring(Environment::CurrentDirectory->Length + 8,path->Length - Environment::CurrentDirectory->Length - 12);
		String^ temp = Path::GetFileNameWithoutExtension(path);
		
		//shellcmd tells Sox to create a raw-file of sound data which is then read by createSamples
		this->shellcmd("\"" + Environment::CurrentDirectory + "\\sox\\sox\"","\"" + path + "\"" + " -r 20000 " + "\"" + Environment::CurrentDirectory + "\\sox\\" + temp + ".raw" + "\"", _Output, _Error);
		List<int>^ list_Samples = this->createSamples(Environment::CurrentDirectory + "\\sox\\" + temp + ".raw", pbl);
		
		//creates necessary drawing objects
		Bitmap^ bmp = gcnew Bitmap(pbl, pbw);
		Graphics^ g = Graphics::FromImage(bmp);
		System::Drawing::Pen^ MyBluePen = gcnew System::Drawing::Pen(System::Drawing::Color::Blue);
		
		//actual drawing based on the information given
		g->DrawLine(MyBluePen,0,pbw/2,pbl,pbw/2);
		
		for(int i = 0;i < list_Samples->Count; i += 2)
		{

			g->DrawLine(MyBluePen, i/2, pbw/2 + (list_Samples[i])/512, i/2, pbw/2 + (list_Samples[i+1])/512);
		
		}
		
		//deletes the raw-file that was previously created
		if(File::Exists(Environment::CurrentDirectory + "\\sox\\" + temp + ".raw"))
		{

			File::Delete(Environment::CurrentDirectory + "\\sox\\" + temp + ".raw");

		}
		
		return bmp;
	}

/// <summary>
/// Execute a shell command
/// </summary>
/// <param name="_FileToExecute">File/Command to execute</param>
/// <param name="_CommandLine">Command line parameters to pass</param> 
/// <param name="_outputMessage">returned string value after executing shell command</param> 
/// <param name="_errorMessage">Error messages generated during shell execution</param> 
void WaveForm::shellcmd(System::String ^_FileToExecute, System::String ^_CommandLine, System::String ^%_outputMessage, System::String ^%_errorMessage)
{
    // Set process variable
    // Provides access to local and remote processes and enables you to start and stop local system processes.
    System::Diagnostics::Process ^_Process = nullptr;
    try
    {
        _Process = gcnew System::Diagnostics::Process();

        // invokes the cmd process specifying the command to be executed.
        System::String ^_CMDProcess = System::String::Format(System::Globalization::CultureInfo::InvariantCulture, "{0}\\cmd.exe", gcnew array<System::Object^> { Environment::SystemDirectory });

        // pass executing file to cmd (Windows command interpreter) as a arguments
        // /C tells cmd that we want it to execute the command that follows, and then exit.
        System::String ^_Arguments = System::String::Format(System::Globalization::CultureInfo::InvariantCulture, "/C \"{0}", gcnew array<System::Object^> { _FileToExecute});

        // pass any command line parameters for execution
        if (_CommandLine != nullptr && _CommandLine->Length > 0)
        {
            _Arguments += System::String::Format(System::Globalization::CultureInfo::InvariantCulture, " {0}", gcnew array<System::Object^> { _CommandLine, System::Globalization::CultureInfo::InvariantCulture });
        }

        // Specifies a set of values used when starting a process.
        System::Diagnostics::ProcessStartInfo ^_ProcessStartInfo = gcnew System::Diagnostics::ProcessStartInfo(_CMDProcess, _Arguments + "\"");
        // sets a value indicating not to start the process in a new window. 
        _ProcessStartInfo->CreateNoWindow = true;
        // sets a value indicating not to use the operating system shell to start the process. 
        _ProcessStartInfo->UseShellExecute = false;
        // sets a value that indicates the output/input/error of an application is written to the Process.
        _ProcessStartInfo->RedirectStandardOutput = true;
        _ProcessStartInfo->RedirectStandardInput = true;
        _ProcessStartInfo->RedirectStandardError = true;
        _Process->StartInfo = _ProcessStartInfo;

        // Starts a process resource and associates it with a Process component.
        _Process->Start();

        // Instructs the Process component to wait indefinitely for the associated process to exit.
        _errorMessage = _Process->StandardError->ReadToEnd();
        _Process->WaitForExit();

        // Instructs the Process component to wait indefinitely for the associated process to exit.
        _outputMessage = _Process->StandardOutput->ReadToEnd();
        _Process->WaitForExit();
    }
    catch (Win32Exception ^_Win32Exception)
    {
        // Error
        Console::WriteLine("Win32 Exception caught in process: {0}", _Win32Exception->ToString());
    }
    catch (Exception ^_Exception)
    {
        // Error
        Console::WriteLine("Exception caught in process: {0}", _Exception->ToString());
    }
    finally
    {
        // close process and do cleanup
        _Process->Close();
        delete _Process;
        _Process = nullptr;
    }
}
List<int> ^ WaveForm::createSamples(String^ fileName, int pbl)
{
	List<int> ^ Samples = gcnew List<int>();
	if(File::Exists(fileName) == false) { return Samples; }

   try
   {
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
      BinaryReader^ br = gcnew BinaryReader(fs);
	  int temp;
	  int max;
	  int min;
	  int blocksize = ((int)br->BaseStream->Length/2)/pbl;
		  for(int i = 0; i < pbl; i++){
			  max = 0;
			  min = 0;
			  for(int g = 0; g < blocksize ; g++){
				  temp = br->ReadInt16();
				  if(temp > max){
				  max = temp;
				  }
				  if(temp < min){
				  min = temp;
				  }
			  }
		  Samples->Add(max);
		  Samples->Add(min);
		  }
      
	  fs->Close( );
   }
   catch (Exception^ e)
   {
      if (dynamic_cast<FileNotFoundException^>(e))
         Console::WriteLine("File '{0}' not found", fileName);
      else
         Console::WriteLine("Exception: ({0})", e);
   }
   return Samples;
}

}
