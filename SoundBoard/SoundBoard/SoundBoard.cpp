// SoundBoard.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "MainForm.h"

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

	Sound^ exampleSound = gcnew Sound();
	exampleSound->Path = Environment::CurrentDirectory + "\\sounds\\flush.mp3";//"C:\Users\petring\Documents\GitHub\SoftwareProjektTUBAF2013\SoundBoard\SoundBoard\sounds\sounds\flush.mp3";

	int i = 0;
	/*
	List<Player^>^ list_player = gcnew List<Player^>();	

	while (i++<2)
	{
		Player^ mainPlayer =gcnew Player(exampleSound);
		//mainPlayer->openCdDoor();
		mainPlayer->playSound();
		Threading::Thread::Sleep(1000);
		mainPlayer->pauseSound();
		mainPlayer->getLength();
		mainPlayer->trebleVolume = 500;
		mainPlayer->bassVolume = 500;
		mainPlayer->balanceVolume = 500;
		mainPlayer->stopSound();
		Threading::Thread::Sleep(1000);	
		//mainPlayer->closeCdDoor();
		list_player->Add(mainPlayer);
	}
	*/

	// Create the main window and run it
	//Application::Run(gcnew Form1()); //not needed yet

	Application::Run(gcnew MainForm());
	return 0;
}
}

