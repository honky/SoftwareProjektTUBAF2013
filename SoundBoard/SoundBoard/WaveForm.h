#pragma once
#include "Sound.h"

namespace SoundBoard
{
	using namespace System;
	ref class WaveForm
	{
	public:
		WaveForm(Sound givenSound);
		WaveForm(Sound givenSound, Boolean force);
		
	private:
		String^ getWaveForm();
		String^ path2image;

	};

}
