/*
	Player Class Definition
	=======================

	to edit methods of this class, please see Player.cpp @PP
	
*/

#include "stdafx.h"
#include "Sound.h"


namespace SoundBoard
{
	using namespace SoundBoard;
	using namespace System;
	using namespace System::Collections::Generic;

	ref class Player
	{
	private: //static
		static Boolean^ isOpen = false;
		static int aliasCounter = 0;
		static List<String^>^ list_active_aliases = gcnew List<String^>();


	private:		
		int currentAlias;
		Sound^ currentSound;
	
	public:

		Player(Sound^ givenSound); //constructor
		
		void playSound(void);
		void playSound(Sound^ givenSound);
		
		void pauseSound(void);
		void resumeSound(void);
		void stopSound(void);
		void restartSound(void);

		void setPosition(void);
		void getCurrentPosition(void);
		void getLength(void);
		void setTimeFormat(void);

		void checkError(int code);		

		void openCdDoor(void);
		void closeCdDoor(void);
		
		void drawGuiPanel(void);
	};



}