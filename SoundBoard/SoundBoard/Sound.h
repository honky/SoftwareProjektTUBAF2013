#pragma once

namespace SoundBoard
{
	using namespace System;
	using namespace SoundBoard;
	
	ref class Sound
	{
	public:
		Sound(String^ path);
		int length;
		String^ path;
	};
}
