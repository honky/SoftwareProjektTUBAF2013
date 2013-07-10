#pragma once
#include "stdafx.h"

namespace SoundBoard
{
	public enum class SoundContextType { Random = 0, Loop = 1, Single = 2, Playlist = 3 };
	using namespace SoundBoard;
	using namespace System::Collections::Generic;
	[Serializable]
	public ref class SoundContext
	{
	public:
		List<Sound^>^ list_sounds;
		SoundContext(String^ path, SoundContextType^ _sct);
		SoundContextType^ sct;
	};
}
