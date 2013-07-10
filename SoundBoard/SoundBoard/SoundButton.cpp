#include "StdAfx.h"

namespace SoundBoard
{
	SoundButton::SoundButton(String^ text, SoundContext^ context)
	{
		this->Text = System::IO::Path::GetFileName(text);
		this->soundButtonType = Convert::ToString(context->sct);
		this->context = context;
		this->Width = 117;
	}



}
