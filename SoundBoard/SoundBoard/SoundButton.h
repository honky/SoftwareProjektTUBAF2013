#pragma once
#include "stdafx.h"

namespace SoundBoard
{
	using namespace System;
	using namespace SoundBoard;
	using namespace System::Runtime::Serialization;

	[Serializable]
	ref class SoundButton
	{
	public:
		SoundButton(String^ text); //, SoundContext^ context);
		System::Drawing::Color^ backgroundColor;
		String^ text;
	private:
		//SoundContext context;
	};


}