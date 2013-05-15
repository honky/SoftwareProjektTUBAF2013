#pragma once

namespace SoundBoard
{
	
	using namespace System;
	ref class WaveForm
	{ //google supports a lot of stuff to this topic
	public:
		WaveForm(Sound givenSound);
		WaveForm(Sound givenSound, Boolean force);
		
	private:
		String^ getWaveForm();
		String^ path2image;

	};

}
