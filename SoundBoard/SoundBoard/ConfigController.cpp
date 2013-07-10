#include "StdAfx.h"
#include "ConfigController.h"

namespace SoundBoard
{
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	ConfigController::ConfigController(SoundController^ _soundController)
	{
		configFolder = Environment::CurrentDirectory+"\\config\\";
		soundsFolder = Environment::CurrentDirectory+"\\sounds\\";
		
		customSound1 = soundsFolder + "custom/c1.mp3";
		customSound2 = soundsFolder + "custom/c2.mp3";
		customSound3 = soundsFolder + "custom/c3.mp3";
		
		this->soundController = _soundController;


		list_folderNamesToIgnore = gcnew List<String^>();
		
		//for git control reasons we do not read the "subversion" files
		list_folderNamesToIgnore->Add("git");
		list_folderNamesToIgnore->Add("..");
		list_folderNamesToIgnore->Add(".");
		list_folderNamesToIgnore->Add(".git");
		list_folderNamesToIgnore->Add("custom");
		


		bool soundFolderChanged = false;

		if(!Directory::Exists(soundsFolder))
		{
			MessageBox::Show("No SoundFolder found. Please select, where your sound files are located. \n We suggest to choose a folder inside SoundBoard.");
			//Windows::Forms::OpenFileDialog^ ofd = gcnew Windows::Forms::OpenFileDialog();
			//ofd->InitialDirectory = Environment::CurrentDirectory;
			//ofd->ShowDialog();
			Windows::Forms::FolderBrowserDialog^ fbd = gcnew Windows::Forms::FolderBrowserDialog();
			fbd->Description ="We suggest to choose a folder inside SoundBoard.";
			fbd->ShowDialog();

			soundsFolder = fbd->SelectedPath;
		}

		if(soundFolderChanged || !Directory::Exists(configFolder))
		{
			
		}
		
		
		this->list_soundButtonGroups = this->createDefaultButtonGroups();
	}

	List<SoundButtonGroup^>^ ConfigController::createDefaultButtonGroups()
	{
		if(!File::Exists(configFolder))
		{
			Directory::CreateDirectory(configFolder);
		}

		List<SoundButtonGroup^>^ list_return = gcnew List<SoundButtonGroup^>();
		
		//we expect all folders in the sound root to be a button group
		array<String^>^ propablyButtonGroups = Directory::GetDirectories(soundsFolder);

		for each (String^ propablyButtonGroup in propablyButtonGroups)
		{
			//we skip several folder files
			if(list_folderNamesToIgnore->Contains(Path::GetFileName(propablyButtonGroup)))	{ continue; }

			SoundButtonGroup^ sbg = gcnew SoundButtonGroup(Path::GetFileName(propablyButtonGroup));
			array<String^>^ propablyButtons = Directory::GetDirectories(propablyButtonGroup);
			for each (String^ propablyButton in propablyButtons)
			{	
				array<String^>^ probablyButtonFiles = Directory::GetFiles(propablyButton);
				
				if(probablyButtonFiles->Length != 0)
				{
					SoundContext^ sc = gcnew SoundContext(propablyButton, SoundContextType::Random);
					SoundButton^ sb = gcnew SoundButton(Path::GetFileName(propablyButton), sc);
					soundController->attachPlaySoundEventToSoundButton(sb);
					sbg->addSoundButton(sb);
				}
				
			}
			list_return->Add(sbg);
			
		}

		
		return list_return;	
	}
}
