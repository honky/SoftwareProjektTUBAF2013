#include "StdAfx.h"
#include "SoundButtonGroup.h"


namespace SoundBoard
{
	SoundButtonGroup::SoundButtonGroup(String^ name)
	{	
		this->name = name;
		this->Text = System::IO::Path::GetFileName(name);
		this->buttons = gcnew List<SoundButton^>();	
		this->Anchor = Windows::Forms::AnchorStyles::Right;
		this->flPanel = gcnew Windows::Forms::FlowLayoutPanel();
		this->flPanel->Dock = Windows::Forms::DockStyle::Fill;
		this->Controls->Add(flPanel);
		this->Width = 375;
		this->Height= 50;
	}

	void SoundButtonGroup::addSoundButton(SoundButton^ sb)
	{
		this->buttons->Add(sb);
		this->flPanel->Controls->Add(sb);
	}

}
