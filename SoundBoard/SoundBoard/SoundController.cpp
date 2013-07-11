#include "StdAfx.h"

namespace SoundBoard
{
	using namespace SoundBoard;
	using namespace Windows::Forms;
	using namespace System::IO;
	using namespace System::Threading;




	SoundController::SoundController(FlowLayoutPanel^ _flp,Windows::Forms::Form^ _form)
	{
		flp = _flp;
		form = _form;
	}

	void SoundController::checkPlayingGUIs(String^ bla)
	{
		Monitor::Enter(form);
		try
		{
			SoundControllerCheckPlayingGUIsDelegate^ action = gcnew SoundControllerCheckPlayingGUIsDelegate(this, &SoundController::checkPlayingGUIsWorker);
			form->Invoke(action,bla);
		}
		finally
		{
			Monitor::Exit(form);
		}
	}

	void SoundController::SoundControllerAddPlayingGUIWorker(PlayerGUI^ gui)
	{
		Monitor::Enter(form);
		try
		{
			flp->Controls->Add(gui);
		}
		finally
		{
			Monitor::Exit(form);
		}


	}

	void SoundController::checkPlayingGUIsWorker(String^ bla)
	{
		//we use some kind of locking to improve stability
		__int64 %trackRefCounter = _counter;
		if(trackRefCounter!=0) { return; }

		Monitor::Enter(form);
		try
		{
			Monitor::Enter(list_players);
			try
			{

				//this is the lock increment counter
				System::Threading::Interlocked::Increment(trackRefCounter);

				try 
				{
					if(list_players->Count > 0)
					{
						List<Player^>^ list_players_remove = gcnew List<Player^>();
						for each(Player^ eachPlayer in list_players)
						{
							int length = eachPlayer->msLength; //eachPlayer->msLength;
							int curPos = eachPlayer->currentPosition; //not working yet

							if(length > 0 && curPos == length)
							{
								//stopping sound has highest priority
								eachPlayer->stopSound();
								eachPlayer->gui->Visible = false;
								//flp->Controls->Remove(eachPlayer->gui);
								list_players_remove->Add(eachPlayer);		
							}
						}
						for each(Player^ eachPlayer in list_players_remove)
						{
							list_players->Remove(eachPlayer);
						}
					}
				}
				catch(Exception^ e)
				{
					// when Button gets clicked heavy multiple times, this can occure.
					Console::WriteLine(e->Message);
				}
				finally
				{
					System::Threading::Interlocked::Decrement(trackRefCounter);					
				}
			}
			finally
			{
				Monitor::Exit(list_players);
			}
		}
		finally
		{
			Monitor::Exit(form);
		}
	}

	//adds click event to SoundButton keeping full sound control
	void SoundController::attachPlaySoundEventToSoundButton(SoundButton^ soundButton)
	{
		soundButton->Click += gcnew System::EventHandler(this, &SoundBoard::SoundController::soundButton_Click);
	}

	//this is the soundButtonClick Event which gets triggered
	void SoundController::soundButton_Click(System::Object ^ sender, System::EventArgs^ e)
	{
		SoundButton^ sb = dynamic_cast<SoundButton^>(sender);
		SoundController::play(sb);					
	}


	//plays a sound by path to sound file
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

	//plays a soundButton according to the context it has
	bool SoundController::play(SoundButton^ sb)
	{
		playedCounter+=1;
		if(playedCounter>8)
		{
			playedCounter = 0;
			this->form->Refresh();
		}

		bool returnValue = false;
		Monitor::Enter(form);
		try
		{
			Monitor::Enter(list_players);
			try
			{
				Sound^ soundToBePlayed = sb->context->list_sounds[0]; //used as a fallback

				//we use some kind of locking to improve stability
				__int64 %trackRefCounter = _counter;
				if(trackRefCounter!=0) { return false; }

				//this is the lock increment counter
				//

				//cleaning up last sounds stack
				while(last_sounds->Count > 3)
				{
					last_sounds->RemoveAt(0);
				}
				//just to be sure
				if(list_players->Count >= 2)
				{
					try {

						SoundControllerCheckPlayingGUIsDelegate^ action = gcnew SoundControllerCheckPlayingGUIsDelegate(this, &SoundController::checkPlayingGUIsWorker);
						form->Invoke(action,"");
					} catch (Exception^ e)
					{
						Console::WriteLine(e->Message);
					}
				}

				System::Threading::Interlocked::Increment(trackRefCounter);

				if(list_players->Count < 3)
				{
					//now we need to take care of which Sound will be played according to its Context
					if(Convert::ToString(sb->context->sct)=="Random")
					{
						int randomCounter = 0;
						int contextCount = sb->context->list_sounds->Count;

						//we need to find a random Sound Gentlemen.
						while(true)
						{
							Random^ random = gcnew Random();
							int contextRandom = random->Next(0,contextCount-1);
							String^ soundPath = sb->context->list_sounds[contextRandom]->path;
							if(!last_sounds->Contains(soundPath))
							{
								soundToBePlayed = sb->context->list_sounds[contextRandom];
								last_sounds->Add(sb->context->list_sounds[contextRandom]->path);
								break;
							}
							if(randomCounter>3)
							{
								break;
							}

							randomCounter++;
						}
					}
					else if (Convert::ToString(sb->context)=="Single")
					{
						soundToBePlayed = sb->context->list_sounds[0];
						last_sounds->Add(sb->context->list_sounds[0]->path);
					}





					try {
						Player^ player = gcnew Player(soundToBePlayed);
						player->playSound();	
						player->gui->pictureBox->Width = 250;
						player->gui->pictureBox->Height = 40;
						player->gui->pictureBox->Image = soundToBePlayed->wf->Bmp;					
						list_players->Add(player);					
						
						SoundControllerAddPlayingGUIDelegate ^ action = gcnew SoundControllerAddPlayingGUIDelegate(this, &SoundController::SoundControllerAddPlayingGUIWorker);
						form->Invoke(action,player->gui);

					}
					catch (Exception^ e)
					{
						Console::WriteLine(e->Message);
					}
					finally
					{
						System::Threading::Interlocked::Decrement(trackRefCounter);
					}
					returnValue =  true;
				}
				else
				{
					System::Threading::Interlocked::Decrement(trackRefCounter);

				}
			}
			finally
			{
				Monitor::Exit(list_players);
			}
		}
		finally
		{
			Monitor::Exit(form);
		}
		return returnValue;
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
			//list_players[list_players->Count-1]->gui = nullptr;
			//removing player from list
			list_players->Remove(list_players[list_players->Count-1]);

		}
	}
	void SoundController::changeVolumeMasterAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->leftVolume = value;
			p->rightVolume = value;
		}
	}

	void SoundController::changeVolumeLeftAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->leftVolume = value;
		}
	}

	void SoundController::changeVolumeRightAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->rightVolume = value;
		}
	}

	void SoundController::changeBalanceAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->balanceVolume = value;
		}
	}

	void SoundController::changeTrebleAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->trebleVolume = value;
		}
	}

	void SoundController::changeBassAll(int value)
	{
		for each(Player^ p in list_players)
		{
			p->bassVolume = value;
		}
	}

}
