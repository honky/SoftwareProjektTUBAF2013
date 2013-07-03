#include "StdAfx.h"

namespace SoundBoard
{
	using namespace SoundBoard;
	using namespace Windows::Forms;

	SoundController::SoundController(FlowLayoutPanel^ flp)
	{
	}
	void SoundController::attachPlaySoundEventToSoundButton(SoundButton^ soundButton)
	{
		soundButton->Click += gcnew System::EventHandler(this, &SoundBoard::SoundController::soundButton_Click);
	}

	
	
	void SoundController::soundButton_Click(System::Object ^ sender, System::EventArgs^ e)
	{
		SoundButton^ sb = dynamic_cast<SoundButton^>(sender);
		SoundController::play(sb);

					
	}

	
	bool SoundController::play(SoundButton^ sb)
	{
		PlayerGUI^ gui = gcnew PlayerGUI(sb->text);

		return true;
	}
/*
	
	bool play(SoundButton^ soundButton)
	{
	return true;
	}

	bool play(Sound^ sound)
	{
	return true;
	}
	*/

}
