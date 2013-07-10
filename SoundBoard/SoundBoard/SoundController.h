#pragma once
#include "SoundButton.h"
#include "StdAfx.h"


namespace SoundBoard
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SoundBoard;
	using namespace Windows::Forms; 
	ref class SoundController
	{
	public:
		SoundController(FlowLayoutPanel^ _flp);
		void attachPlaySoundEventToSoundButton(SoundButton^ soundButton);
		void soundButton_Click(System::Object ^ sender, System::EventArgs^ e);
		bool play(SoundButton^ sb);
		bool playCustomSound(String^ filePath);

		void pauseAll();
		void resumeAll();
		void stopAll();
		
		void pauseLast();
		void resumeLast();
		void stopLast();

		void static checkPlayingGUIs();
		void changeVolumeMasterAll(int value);
		void changeVolumeLeftAll(int
		void changeVolumeRightAll(int
		void changeBalanceAll(int
		void changeTrebleAll(int
		void changeBassAll(int value);

	private: 
		static __int64 _counter = 0;
		static FlowLayoutPanel^ flp;
		static List<Player^>^ list_players = gcnew List<Player^>();
	};
}