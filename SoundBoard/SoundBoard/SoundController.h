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

		void pauseAll();
		void resumeAll();
		void stopAll();
		
		void pauseLast();
		void resumeLast();
		void stopLast();

		static List<Player^>^ list_players = gcnew List<Player^>();

	private: 
		FlowLayoutPanel^ flp;
	};
}