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
		currentAlias = aliasCounter++;
		currentSound = givenSound;
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

	}

	void Player::playSound(Sound^ givenSound)
	{		
		String^ cmd = "play \""+ Environment::CurrentDirectory +"\\sounds\\test.mp3\" alias"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		checkError(errCode);
	}

	void Player::stopSound(void)
	{

	}

	void Player::restartSound(void)
	{

	}


	void Player::setPosition(void)
	{

	}

	void Player::getCurrentPosition(void)
	{

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

	}

	void Player::resumeSound(void)
	{

	}

	void Player::openCdDoor(void)
	{
		//the required dataType of mciSendString i LPCWSTR, 
		//actually like a String but wir L" in the beginning
		//LPCWSTR openCDCommand = L"set cdaudio door open";
		//comes from Windows.h, needs winmm.lib see header includes
		//int errCode = mciSendString(openCDCommand, 0, 0, 0);
		//if(errCode==0) { isOpen = true; }
		//checkError(errCode);
	}

	void Player::closeCdDoor(void)
	{
		//the required dataType of mciSendString i LPCWSTR, 
		//actually like a String but wir L" in the beginning
		//LPCWSTR closeCDCommand = L"set cdaudio door closed";

		//comes from Windows.h, needs winmm.lib see header includes
		//int errCode = mciSendString(closeCDCommand, 0, 0, 0);
		//if(errCode==0) { isOpen = false; }
		//checkError(errCode);
	}

	void Player::drawGuiPanel(void)
	{

	}

}