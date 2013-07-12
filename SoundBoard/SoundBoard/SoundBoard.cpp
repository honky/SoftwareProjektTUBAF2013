// SoundBoard.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "MainForm.h"
#include "editConfigForm.h"

using namespace SoundBoard;
using namespace System;
using namespace System::Collections::Generic;

namespace SoundBoard
{
	

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	/*
	Sound^ exampleSound = gcnew Sound(Environment::CurrentDirectory + "\\sounds\\mlc.mp3");
	//exampleSound->path = //"C:\Users\petring\Documents\GitHub\SoftwareProjektTUBAF2013\SoundBoard\SoundBoard\sounds\sounds\flush.mp3";	
	System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(exampleSound->path);

	SoundContext^ sc = gcnew SoundContext(Environment::CurrentDirectory, SoundContextType::Random);
	Player^ examplePlayer = gcnew Player(exampleSound);
	String^ lengtht = examplePlayer->getLength();
	Threading::Thread::Sleep(3000);
	int curPos = examplePlayer->getCurrentPosition();
	int i = 0;
	*/
	
	Application::Run(gcnew MainForm());

	return 0;
}
}

