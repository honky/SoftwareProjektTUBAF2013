#include "StdAfx.h"
#include "SoundContext.h"


namespace SoundBoard
{
	using namespace System;
	using namespace System::Collections::Generic;

	SoundContext::SoundContext(String^ path, SoundContextType^ _sct)
	{ 
		this->sct = _sct;
		String^ bla = Convert::ToString(sct);
		Console::WriteLine(Convert::ToString(sct));
		this->list_sounds = gcnew List<Sound^>();
		if(Convert::ToString(sct) == "Single") //not pretty, but intellisense is not working and time is running
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
