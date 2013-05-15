// SoundBoard.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Player.h"
#include "Sound.h"

using namespace SoundBoard;
using namespace System;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	Sound^ exampleSound = gcnew Sound();
	exampleSound->Path = Environment::CurrentDirectory + "\\sounds\\flush.mp3";//"C:\Users\petring\Documents\GitHub\SoftwareProjektTUBAF2013\SoundBoard\SoundBoard\sounds\sounds\flush.mp3";

	Player^ mainPlayer =gcnew Player(exampleSound);
	mainPlayer->openCdDoor();
	mainPlayer->playSound();
	Threading::Thread::Sleep(1000);
	mainPlayer->pauseSound();
	mainPlayer->getLength();
	mainPlayer->trebleVolume = 500;
	mainPlayer->bassVolume = 500;
	mainPlayer->balanceVolume = 500;
	mainPlayer->stopSound();
	Threading::Thread::Sleep(1000);	
	mainPlayer->closeCdDoor();

	// Create the main window and run it
	//Application::Run(gcnew Form1()); //not needed yet
	return 0;
}
