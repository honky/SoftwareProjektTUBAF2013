#include "stdafx.h"
#include "Player.h"
#include "Windows.h"
#include "Sound.h"
#pragma comment(lib, "winmm.lib")
#include "vcclr.h"


namespace SoundBoard
{
	using namespace System;
	using namespace System::Data;
	using namespace System::Threading;
	using namespace System::Text;
	using namespace SoundBoard;
	using namespace Windows::Forms;
	using namespace System;
	using namespace System::Runtime::InteropServices;


	Player::Player(Sound^ givenSound)
	{
		//setting default values of this instance
		alias = getUniqueAlias();
		currentSound = givenSound;
		isPlaying = false;
		isPaused = false;
		isOpen = false;
		isLoop = false;
		isMutedAll = false; //should be a property
		isMutedRight = false; // this too

		//we take the Programms overall Volume vor the current sound
		//this might be changed to to value of the last sound startet, 
		// but that might be a bit confusing

		rightVolume = rightVolumeOverall; 
		leftVolume = leftVolumeOverall;
		totalVolume = totalVolumeOverall;

		//now open sound and give him its alias
		openSound(givenSound);

		//probably done
	}

	void Player::openSound(Sound^ givenSound)
	{
		String^ cmd = "play \""+givenSound->Path +"\" " + alias;	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = true;
		}
		checkError(errCode);
	}

	String^ Player::getUniqueAlias()
	{
		aliasCounter = aliasCounter++;
		String^ alias = "alias"+Convert::ToString(aliasCounter);
		return alias;
	}

	int Player::mciSendStringHandle(String ^ givenHandle)
	{
		// http://msdn.microsoft.com/de-de/library/ms235631(v=vs.80).aspx 
		// http://stackoverflow.com/questions/16216386/mcisendstring-with-visual-c-parameters/16322700#16322700
		// http://msdn.microsoft.com/de-de/library/585whdf9(v=vs.80).aspx
		// makes gc handle pinned and adressable by unmanaged system		
		pin_ptr<const wchar_t> wch = PtrToStringChars(givenHandle);
		return mciSendString(wch, 0, 0, 0);
	}


	void Player::playSound(void)
	{
		//if empty dont do anything
		if(currentSound== nullptr)
		{
			return;
		}

		//if paused restart
		if(isPaused)
		{
			String^ cmd = "seek " + alias + " to start";	
			int errCode = mciSendStringHandle(cmd);
			if(errCode==0)
			{
				isPlaying = true;
			}
			checkError(errCode);
		}

		if(!isPlaying)
		{
			String^ cmd = "play " + alias;	
			int errCode = mciSendStringHandle(cmd);
			if(errCode==0)
			{
				isPlaying = true;
			}
			checkError(errCode);
		}
	}

	void Player::playSound(Sound^ givenSound)
	{		
		currentSound = givenSound;
		String^ cmd = "play \""+givenSound->Path+"\" " + alias;	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = true;
		}
		checkError(errCode);
	}

	void Player::stopSound(void)
	{
		if(!isPlaying)
		{
			return;			
		}


		// "seek " + alias + " to start"
		// "stop " + alias + "";
	}

	void Player::restartSound(void)
	{

	}


	void Player::setPosition(void)
	{

	}

	void Player::getCurrentPosition(void)
	{
		// "status " + alias + " position";
	}

	void Player::getLength(void)
	{

	}

	void Player::setTimeFormat(void)
	{

	}


	void Player::checkError(int code)
	{
		if(code!=0)
		{
			LPWSTR errorText = L"";
			mciGetErrorString(code,errorText,256);
			// Throwing Exception would be nice here
			//Windows::Forms::MessageBox::Show(errorText);			
		}

	}

	void Player::pauseSound(void)
	{
		//"pause " + alias + ""
	}

	void Player::resumeSound(void)
	{
		//"play " + alias + "";
	}

	void Player::openCdDoor(void)
	{
		if(isOpen)
		{
			return;
		}
		String^ cmd = "set cdaudio door open"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		checkError(errCode);
	}

	void Player::closeCdDoor(void)
	{
		if(!isOpen)
		{
			return;
		}
		String^ cmd = "set cdaudio door closed"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		checkError(errCode);
	}

	void Player::drawGuiPanel(void)
	{

	}

}