#include "StdAfx.h"

namespace SoundBoard
{
	SoundButton::SoundButton(String^ text, SoundContext^ context,SoundController^ soundController)
	{
		this->Text = System::IO::Path::GetFileName(text);
		this->context = context;
		this->Width = 117;

		this->Click += gcnew System::EventHandler(this, &SoundBoard::SoundButton::soundButton_Click);
	}


	void SoundButton::soundButton_Click(System::Object ^ sender, System::EventArgs^ e)
	{
		SoundButton^ origin = dynamic_cast<SoundButton^>(sender);
		MessageBox::Show("I'm a Button \\o/");		
	}

}
