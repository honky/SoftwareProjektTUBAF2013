#include "StdAfx.h"
#include "ConfigController.h"

namespace SoundBoard
{
	using namespace System;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	ConfigController::ConfigController(SoundController^ _soundController)
	{
		configFolder = Environment::CurrentDirectory+"/config/";
		soundsFolder = Environment::CurrentDirectory+"/sounds/";
		this->soundController = _soundController;


		list_folderNamesToIgnore = gcnew List<String^>();
		
		//for git control reasons we do not read the "subversion" files
		list_folderNamesToIgnore->Add("git");
		list_folderNamesToIgnore->Add("..");
		list_folderNamesToIgnore->Add(".");
		list_folderNamesToIgnore->Add(".git");
		


		bool soundFolderChanged = false;

		if(!File::Exists(soundsFolder))
		{
			//go ask for it !
		}

		if(soundFolderChanged || !File::Exists(configFolder))
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
