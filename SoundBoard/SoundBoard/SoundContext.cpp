#include "StdAfx.h"
#include "SoundContext.h"


namespace SoundBoard
{
	using namespace System;
	using namespace System::Collections::Generic;
	SoundContext::SoundContext(String^ path, SoundContextType^ _sct)
	{ 
		this->sct = _sct;
		this->list_sounds = gcnew List<Sound^>();
		if(sct == SoundContextType::Single) //doesn't work yet!
		{
			Sound^ sound2beAdded = gcnew Sound(path);
			list_sounds->Add(sound2beAdded);			
		}
		else
		{
			for each (String^ file in System::IO::Directory::GetFiles(path))
			{
				Sound^ sound2beAdded = gcnew Sound(file);
				list_sounds->Add(sound2beAdded);
			}
		}

	}
}
