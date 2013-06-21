#pragma once
#include "stdafx.h"

namespace SoundBoard
{
	enum class SoundContextType { Random, Loop, Single, Playlist, Yaaaawn };
	using namespace SoundBoard;
	using namespace System::Collections::Generic;
	[Serializable]
	ref class SoundContext
	{
	public:
		List<Sound^>^ list_sounds;
		SoundContext(String^ path, SoundContextType^ sct);
	};
}
