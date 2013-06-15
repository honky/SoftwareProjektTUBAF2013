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

		}

		Directory::CreateDirectory(configFolder);
		SoundButtonGroup^ generalBG = gcnew SoundButtonGroup("General");
//		SoundContext^ context = gcnew SoundContext("blafu",SoundContextType::Loop);
//		generalBG->buttons->Add(gcnew SoundButton());

		
		
	}
}
