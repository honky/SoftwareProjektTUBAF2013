#include "StdAfx.h"
#include "WaveForm.h"
#include "Sound.h"

namespace SoundBoard
{
	using namespace System;

	WaveForm::WaveForm(Sound givenSound)
	{
		//check if WaveForm needs to be generated
		//if yes -> getWaveForm()
		//else return path2Image
	}
	WaveForm::WaveForm(Sound givenSound, Boolean force)
	{
		//redraw WaveForm
	}
	String^ WaveForm::getWaveForm()
	{
		//here is the place where the WaveForm should be generated
		return this->path2image;
	}
}
