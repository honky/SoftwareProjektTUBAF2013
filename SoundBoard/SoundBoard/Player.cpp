#include "stdafx.h"
#include "Player.h"
#include "Windows.h"
#pragma comment(lib, "winmm.lib")


namespace SoundBoard
{
	using namespace System;
	using namespace System::Data;
	using namespace SoundBoard;

	Player::Player(void)
	{
		LPCWSTR testCommand = L"set cdaudio door open";
		mciSendString(testCommand, 0, 0, 0);
		System::Console::WriteLine("Visual C++ sucks and is not worth beeing used.");
	}


}