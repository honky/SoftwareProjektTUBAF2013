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

	WaveForm::WaveForm(Sound^ givenSound)
	{
		//check if WaveForm needs to be generated
		//if yes -> getWaveForm()
		//else return path2Image
	}
	WaveForm::WaveForm(Sound^ givenSound, Boolean force)
	{
		//redraw WaveForm
	}
	Bitmap^ WaveForm::getWaveForm(String^ path, int pbl, int pbw)
	{
		//here is the place where the WaveForm should be generated
		String^ _Output = nullptr;
		String^ _Error = nullptr;
		this->executeShellCommand(Environment::CurrentDirectory + "\\sox\\sox", path + " -r 20000 " + Environment::CurrentDirectory + "\\sox\\temp.raw", _Output, _Error);
		List<int>^ list_Samples = this->createSamples(Environment::CurrentDirectory + "\\sox\\temp.raw", pbl);
		int totalSamples = list_Samples->Count;
		Bitmap^ bmp = gcnew Bitmap(pbl, pbw);
		Graphics^ g = Graphics::FromImage(bmp);
		System::Drawing::Pen^ MyBluePen = gcnew System::Drawing::Pen(System::Drawing::Color::Blue);
		g->DrawLine(MyBluePen,0,pbw/2,pbl,pbw/2);
		for(int i = 0;i < totalSamples; i += 2){
			g->DrawLine(MyBluePen, i/2, pbw/2 + (list_Samples[i])/512, i/2, pbw/2 + (list_Samples[i+1])/512);
		}		
		String^ tmpFilePath = Environment::CurrentDirectory + "\\sox\\temp.raw";
		
		if(File::Exists(tmpFilePath))
		{
			File::Delete(tmpFilePath);
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
void WaveForm::executeShellCommand(System::String ^_FileToExecute, System::String ^_CommandLine, System::String ^%_outputMessage, System::String ^%_errorMessage)
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
        System::String ^_Arguments = System::String::Format(System::Globalization::CultureInfo::InvariantCulture, "/C {0}", gcnew array<System::Object^> { _FileToExecute });

        // pass any command line parameters for execution
        if (_CommandLine != nullptr && _CommandLine->Length > 0)
        {
            _Arguments += System::String::Format(System::Globalization::CultureInfo::InvariantCulture, " {0}", gcnew array<System::Object^> { _CommandLine, System::Globalization::CultureInfo::InvariantCulture });
        }

        // Specifies a set of values used when starting a process.
        System::Diagnostics::ProcessStartInfo ^_ProcessStartInfo = gcnew System::Diagnostics::ProcessStartInfo(_CMDProcess, _Arguments);
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
   try
   {
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
      BinaryReader^ br = gcnew BinaryReader(fs);
	  int temp;
	  int max;
	  int min;
	  int blocksize = ((int)br->BaseStream->Length/2)/250;
		  for(int i = 0; i < 250; i++){
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

	  // This function used to read the audio data in a previous version
	  /*while (br->BaseStream->Position < br->BaseStream->Length){
		  Samples[(int)(br->BaseStream->Position/2)] = br->ReadInt16();
	  }*/
      
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
