#include "StdAfx.h"



#define SAMPLINGRATE	10000
#define PBWIDTH			250

namespace SoundBoard
{
	using namespace Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;

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
	PictureBox^ WaveForm::getWaveForm()
	{

		//here is the place where the WaveForm should be generated
		PictureBox^ pictureBox1 = gcnew PictureBox();
		pictureBox1->Height = 70;
		pictureBox1->Width = PBWIDTH;
				

		return pictureBox1;
	}

/// <summary>
/// Execute a shell command
/// </summary>
/// <param name="_FileToExecute">File/Command to execute</param>
/// <param name="_CommandLine">Command line parameters to pass</param> 
/// <param name="_outputMessage">returned string value after executing shell command</param> 
/// <param name="_errorMessage">Error messages generated during shell execution</param> 
void ExecuteShellCommand(System::String ^_FileToExecute, System::String ^_CommandLine, System::String ^%_outputMessage, System::String ^%_errorMessage)
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
array<short^> ^ CreateSamples(String^ fileName, int soundLength)
{
	array<short^> ^ Samples;
   try
   {
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
      BinaryReader^ br = gcnew BinaryReader(fs);

	  Samples = gcnew array<short ^>(PBWIDTH);
	  Console::WriteLine("The Length of the array is: {0}", (int)br->BaseStream->Length/2);

		  for(int i = 0; i < PBWIDTH; i++){
			  int temp = 0;
			  for(int g = 0; g < (SAMPLINGRATE * soundLength)/PBWIDTH ; g++){
				  temp += br->ReadInt16();
			  }
		  *Samples[i] = temp;
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
