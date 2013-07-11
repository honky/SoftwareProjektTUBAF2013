#pragma once
#include "SoundButton.h"
#include "StdAfx.h"


namespace SoundBoard
{
	delegate void SoundControllerCheckPlayingGUIsDelegate(String^ bla);
	delegate void SoundControllerAddPlayingGUIDelegate(PlayerGUI^ gui);

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SoundBoard;
	using namespace Windows::Forms; 
	public ref class SoundController : public System::Windows::Forms::Form
	{
	public:
		SoundController(FlowLayoutPanel^ _flp, Windows::Forms::Form^ _form);
		void attachPlaySoundEventToSoundButton(SoundButton^ soundButton);
		void soundButton_Click(System::Object ^ sender, System::EventArgs^ e);
		

		bool play(SoundButton^ sb);
		bool playCustomSound(String^ filePath);

		void pauseAll();
		void resumeAll();
		void stopAll();
		
		void pauseLast();
		void resumeLast();
		void stopLast();

		void checkPlayingGUIs(String^ bla);
		void SoundControllerAddPlayingGUIWorker(PlayerGUI^ gui);
		
		void checkPlayingGUIsWorker(String^ bla);
		void changeVolumeMasterAll(int value);
		void changeVolumeLeftAll(int value);
		void changeVolumeRightAll(int value);
		void changeBalanceAll(int value);
		void changeTrebleAll(int value);
		void changeBassAll(int value);

	private: 
		static __int64 _counter = 0;
		static FlowLayoutPanel^ flp;
		static Windows::Forms::Form^ form;
		static List<Player^>^ list_players = gcnew List<Player^>();
		static List<String^>^ last_sounds = gcnew List<String^>();
		static int playedCounter = 0;
	};
}