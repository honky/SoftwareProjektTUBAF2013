#pragma once
#include "Sound.h"

namespace SoundBoard
{
	using namespace System;
	using namespace System::Collections::Generic;

	ref class SoundContext
	{
	public:
		SoundContext(String^ path2Folder);
		List<String^>^ list_sounds;
		String^ path;
	};

}
