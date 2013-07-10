#include "StdAfx.h"
#include "ConfigController.h"

namespace SoundBoard
{
	using namespace System;
	using namespace System::IO;
	using namespace System::Data;
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
			Windows::Forms::FolderBrowserDialog^ fbd = gcnew Windows::Forms::FolderBrowserDialog();
			fbd->RootFolder = Environment::SpecialFolder::Personal; // Environment::CurrentDirectory;
			fbd->Description ="We suggest to choose a folder inside SoundBoard.";
			fbd->ShowDialog();
			soundsFolder = fbd->SelectedPath;
		}

		if(soundFolderChanged || !Directory::Exists(configFolder))
		{
			
		}
		
		
		this->list_soundButtonGroups = this->createDefaultButtonGroups();
	}

	
	DataTable^ ConfigController::getConfig(String^ type)
	{
		DataTable^ dt = gcnew DataTable();	
		dt->Columns->Add("Button Label");
		dt->Columns->Add("Button Path");
		dt->Columns->Add("Button Color");
		dt->Columns->Add("Button Type");
		dt->Columns->Add("Button Remove");
		
		for each (SoundButtonGroup^ sbg in list_soundButtonGroups)
		{	
			for each (SoundButton^ sb in sbg->buttons)
			{
				DataRow^ row = dt->NewRow();
			}
		}

		return dt;
	}


	List<SoundButtonGroup^>^ ConfigController::createDefaultButtonGroups()
	{
		List<SoundButtonGroup^>^ list_return = gcnew List<SoundButtonGroup^>();
		
		if(list_soundButtonGroups == nullptr || list_soundButtonGroups->Count == 0)
		{
			if(!File::Exists(configFolder))
			{
				Directory::CreateDirectory(configFolder);
			}

			
			
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
			list_soundButtonGroups = list_return;
		}

		return list_return;	
	}
}
