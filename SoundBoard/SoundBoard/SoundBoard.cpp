// SoundBoard.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "Player.h"

using namespace SoundBoard;
using namespace System;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	Boolean bla = false;

	Player^ mainPlayer = gcnew Player();
	

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
