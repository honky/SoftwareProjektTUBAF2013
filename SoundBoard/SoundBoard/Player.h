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
		static int rightVolumeOverall = 1000;
		static int leftVolumeOverall = 1000;
		static int totalVolumeOverall = 1000;
		static int trebleVolumeOverall = 1000;
		static int bassVolumeOverall = 1000;
		static int aliasCounter = 0;
		static List<String^>^ list_active_aliases = gcnew List<String^>();


		Boolean^ isPlaying;
		Boolean^ isPaused;
		Boolean^ isLoop;
		Boolean^ isMutedAll; //should be a property
		Boolean^ isMutedRight; // this too


		int rightVolume; 
		int leftVolume;
		int totalVolume;		
		int trebleVolume;
		int bassVolume;

	private:		
		String^ alias;
		Sound^ currentSound;

	public:

		Player(Sound^ givenSound); //constructor


		void playSound(void);
		void playSound(Sound^ givenSound);

		int mciSendStringHandle(String ^ givenHandle);
		String^ getUniqueAlias();

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

	private:

		void openSound(Sound^ givenSound);
	};



}