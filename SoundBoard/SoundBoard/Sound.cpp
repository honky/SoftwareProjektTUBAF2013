#include "StdAfx.h"

namespace SoundBoard
{
	Sound::Sound(String^ path)
	{
		this->path = path;
		this->wf = gcnew WaveForm(path, 250, 40);
	}
}
