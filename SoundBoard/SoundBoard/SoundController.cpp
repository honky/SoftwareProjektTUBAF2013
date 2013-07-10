#include "StdAfx.h"

namespace SoundBoard
{
	using namespace SoundBoard;
	using namespace Windows::Forms;
	using namespace System::IO;

	SoundController::SoundController(FlowLayoutPanel^ _flp)
	{
		flp = _flp;
	}

	void SoundController::checkPlayingGUIs()
	{
		if(list_players->Count > 0)
		{
			
			List<Player^>^ list_players_remove = gcnew List<Player^>();
			for each(Player^ eachPlayer in list_players)
			{
				int length = eachPlayer->msLength; //eachPlayer->msLength;
				int curPos = eachPlayer->currentPosition; //not working yet

				if(length > 0 && curPos>= length)
				{
					flp->Controls->Remove(eachPlayer->gui);
					list_players_remove->Add(eachPlayer);
				}
			}
			for each(Player^ eachPlayer in list_players_remove)
			{
				list_players->Remove(eachPlayer);
			}
			
		}

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

	bool SoundController::playCustomSound(String^ filePath)
	{
		try
		{
			Sound^ customSound = gcnew Sound(filePath);
			SoundContext^ customContext = gcnew SoundContext(filePath, SoundContextType::Single);
			SoundButton^ csb = gcnew SoundButton(Path::GetFileName(filePath),customContext);
			SoundController::play(csb);
			return true;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
			return false;
		}
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
		//just run if needed
		if(list_players->Count != 0) {
			//stopping sound has highest priority
			list_players[list_players->Count-1]->stopSound();
			//disabling gui from flp
			flp->Controls->Remove(list_players[list_players->Count-1]->gui);
			//actually the next line is not needed but better for garbage collection
			list_players[list_players->Count-1]->gui = nullptr;
			//removing player from list
			list_players->Remove(list_players[list_players->Count-1]);

		}
	}

}
