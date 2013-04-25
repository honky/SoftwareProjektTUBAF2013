/*
	Player Class Definition
	=======================

	to edit methods of this class, please see Player.cpp @PP
	
*/

#include "stdafx.h"
#include "Sound.h"


namespace SoundBoard
{
	ref class Player
	{

	private:
		int isInitialized; //dummy
	
	public:
		Player(Sound^ givenSound); //constructor
		void playSound(void);
		void stopSound(void);
		void pauseSound(void);
		void drawGuiPanel(void);
	};



}