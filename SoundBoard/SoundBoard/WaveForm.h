#pragma once

namespace SoundBoard
{
	
	using namespace System;
	using namespace Windows::Forms;
	ref class WaveForm
	{ //google supports a lot of stuff to this topic
	public:
		WaveForm(Sound^ givenSound);
		WaveForm(Sound^ givenSound, bool force);
		
	public:
		PictureBox^ getWaveForm();
		String^ path2image;

	};

}
