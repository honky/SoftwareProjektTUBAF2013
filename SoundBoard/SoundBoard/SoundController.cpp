#include "StdAfx.h"

namespace SoundBoard
{
	using namespace SoundBoard;
	using namespace Windows::Forms;

	SoundController::SoundController(FlowLayoutPanel^ _flp)
	{
		flp = _flp;

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
		Sound^ blafu = sb->context->list_sounds[0];	
		gui->pictureBox->Width = 250;
		gui->pictureBox->Height = 40;
		gui->pictureBox->BorderStyle = Windows::Forms::BorderStyle::Fixed3D;
		Player^ player = gcnew Player(blafu);
		player->playSound();
		gui->pictureBox->Image = blafu->wf->Bmp;
		flp->Controls->Add(gui);

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
