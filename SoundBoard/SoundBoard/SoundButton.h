#pragma once
#include "stdafx.h"
#include "SoundController.h"

namespace SoundBoard
{
	using namespace System;
	using namespace SoundBoard;
	using namespace System::Runtime::Serialization;

	[Serializable]
	ref class SoundButton : public Windows::Forms::Button
	{
	public:
		SoundButton(String^ text, SoundContext^ context, SoundController^ soundController);
		System::Drawing::Color^ backgroundColor;
		String^ text;
		void soundButton_Click(System::Object ^ sender, System::EventArgs^ e);
	private:
		SoundContext^ context;
	};


}