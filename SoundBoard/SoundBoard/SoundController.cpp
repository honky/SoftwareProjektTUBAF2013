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
		//gui->pictureBox->BorderStyle = Windows::Forms::BorderStyle::Fixed3D;
		Player^ player = gcnew Player(blafu);
		player->playSound();
		player->gui = gui;
		gui->pictureBox->Image = blafu->wf->Bmp;
		flp->Controls->Add(gui);
		list_players->Add(player);
		return true;
	}

	void SoundController::pauseAll()
	{
		for each (Player^ eachPlayer in list_players)
		{
			eachPlayer->pauseSound();
		}
	}
	void SoundController::resumeAll()
	{
		for each (Player^ eachPlayer in list_players)
		{
			eachPlayer->resumeSound();
		}
	}
	void SoundController::stopAll()
	{
		for each (Player^ eachPlayer in list_players)
		{
			eachPlayer->stopSound();
		}
		list_players->Clear();
		flp->Controls->Clear();
	}
	void SoundController::pauseLast()
	{
		if(list_players->Count != 0) {
		list_players[list_players->Count-1]->pauseSound();
		}
	}
	void SoundController::resumeLast()
	{
		if(list_players->Count != 0) {
		list_players[list_players->Count-1]->resumeSound();
		}
	}
	void SoundController::stopLast()
	{
			if(list_players->Count != 0) {
		list_players[list_players->Count-1]->stopSound();
		}
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
