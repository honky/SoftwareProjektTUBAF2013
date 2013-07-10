#pragma once

namespace SoundBoard
{
	using namespace System;
	using namespace SoundBoard;
	
	public ref class Sound
	{
	public:
		Sound(String^ path);
		String^ path;
		WaveForm^ wf;
	};
}
