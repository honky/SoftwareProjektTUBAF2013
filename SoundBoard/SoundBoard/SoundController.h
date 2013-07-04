#pragma once
#include "SoundButton.h"
#include "StdAfx.h"


namespace SoundBoard
{
	using namespace System;
	using namespace SoundBoard;
	using namespace Windows::Forms; 
	ref class SoundController
	{
	public:
		SoundController(FlowLayoutPanel^ _flp);
		void attachPlaySoundEventToSoundButton(SoundButton^ soundButton);
		void soundButton_Click(System::Object ^ sender, System::EventArgs^ e);
		bool play(SoundButton^ sb);
	private: 
		FlowLayoutPanel^ flp;

	};
}