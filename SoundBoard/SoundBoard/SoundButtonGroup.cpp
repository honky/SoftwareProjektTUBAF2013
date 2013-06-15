#include "StdAfx.h"
#include "SoundButtonGroup.h"


namespace SoundBoard
{
	SoundButtonGroup::SoundButtonGroup(void)
	{
		this->buttons = gcnew List<SoundButton^>();
	}
	SoundButtonGroup::SoundButtonGroup(String^ name)
	{
		this->name = name;
		this->buttons = gcnew List<SoundButton^>();		
	}
}
