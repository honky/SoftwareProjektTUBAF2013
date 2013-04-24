#include "stdafx.h"
#include "Player.h"
#include "Windows.h"
#pragma comment(lib, "winmm.lib")


namespace SoundBoard
{
	using namespace System;
	using namespace System::Data;
	using namespace System::Threading;
	using namespace SoundBoard;

	Player::Player(void)
	{
		//the required dataType of mciSendString i LPCWSTR, 
		//actually like a String but wir L" in the beginning
		LPCWSTR openCDCommand = L"set cdaudio door open";

		//comes from Windows.h, needs winmm.lib see header includes
		mciSendString(openCDCommand, 0, 0, 0);

		//go for a nap of 2 seconds
		Thread::Sleep(2000);
		
		//putting something into an Message Box
		Windows::Forms::MessageBox::Show("Visual C++ sucks and is not worth beeing used.");
		
		//all over to close CDDoor again.
		LPCWSTR closeCDCommand = L"set cdaudio door closed";
		mciSendString(closeCDCommand, 0, 0, 0);
		System::Threading::Thread::Sleep(2000);
		
	}


}