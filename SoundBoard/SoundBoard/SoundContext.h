#pragma once

namespace SoundBoard
{
	enum class SoundContextType { Random, Loop, Single, Playlist, Yaaaawn };
	using namespace SoundBoard;
	[Serializable]
	ref class SoundContext
	{
	public:
		SoundContext(String^ path, SoundContextType^ sct);
	};
}
