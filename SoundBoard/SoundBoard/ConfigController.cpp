#include "StdAfx.h"
#include "ConfigController.h"

namespace SoundBoard
{
	using namespace System;
	using namespace System::IO;

	ConfigController::ConfigController(void)
	{
		configFolder = Environment::CurrentDirectory+"/config/";
		soundsFolder = Environment::CurrentDirectory+"/sounds/";

		bool soundFolderChanged = false;

		if(!File::Exists(soundsFolder))
		{
			//go ask for it !
		}

		if(soundFolderChanged || !File::Exists(configFolder))
		{
			createDefaultConfig();
		}
		

		
	}

	void ConfigController::createDefaultConfig()
	{
		if(!File::Exists(configFolder))
		{
			Directory::CreateDirectory(configFolder);
		}
		
		//we expect all folders in the sound root to be a button group
		array<String^>^ propablyButtonGroups = Directory::GetDirectories(soundsFolder);

		for each (String^ propablyButtonGroup in propablyButtonGroups)
		{
			SoundButtonGroup^ sbg = gcnew SoundButtonGroup(Path::GetDirectoryName(propablyButtonGroup));
			array<String^>^ propablyButtons = Directory::GetDirectories(propablyButtonGroup);
			for each (String^ propablyButton in propablyButtons)
			{	
				array<String^>^ probablyButtonFiles = Directory::GetFiles(propablyButton);
				
				if(probablyButtonFiles->Length != 0)
				{
					SoundContext^ sc = gcnew SoundContext(propablyButton, SoundContextType::Random);
					SoundButton^ sb = gcnew SoundButton(Path::GetDirectoryName(propablyButton), sc);
					sbg->buttons->Add(sb);
				}
				
			}
			
		}
		
		
	}
}
