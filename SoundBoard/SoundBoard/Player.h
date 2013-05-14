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
		static bool cdIsOpen = false;
		static int rightVolumeOverall = 1000;
		static int leftVolumeOverall = 1000;
		static int totalVolumeOverall = 1000;
		static int trebleVolumeOverall = 1000;
		static int bassVolumeOverall = 1000;
		static int aliasCounter = 0;
		static List<String^>^ list_active_aliases = gcnew List<String^>();
		String^ alias;
		Sound^ currentSound;

		bool isOpen;
		bool isPlaying;
		bool isPaused;
		bool isLoop;
		bool isMutedAll; //should be a property
		bool isMutedRight; // this too
		bool isMutedLeft; // this too


	public: 
		virtual property int rightVolume { int get(); void set(int value); } 
		virtual property int leftVolume{ int get(); void set(int value); }
        virtual property int totalVolume{ int get(); void set(int value); }		
		virtual property int trebleVolume{ int get(); void set(int value); } ;
		virtual property int bassVolume{ int get(); void set(int value); } ;



	public:
		
		Player(Sound^ givenSound); //constructor
		
		void playSound(void);
		void playSound(Sound^ givenSound);

		int mciSendStringHandle(String ^ givenHandle);
		String^ mciSendStringHandleResponse(String ^ givenHandle);
		String^ getUniqueAlias();

		void pauseSound(void);
		void resumeSound(void);
		void stopSound(void);
		void restartSound(void);
		void muteSound(void);
		void unmuteSound(void);
		void muteSoundLeft(void);
		void unmuteSoundLeft(void);
		void muteSoundRight(void);
		void unmuteSoundRight(void);

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