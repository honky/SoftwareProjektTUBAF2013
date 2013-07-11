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


	bool setConfigLiterals(String^ configFileName, Dictionary<String^,String^>^ dic)
	{
		try 
		{
		DataTable^ dt = gcnew DataTable();

		//it is some kind of key value store
		dt->Columns->Add("key");
		dt->Columns->Add("value");

		//we will first convert this to a datatable and write its xml down
		for each (KeyValuePair<String^,String^> kvp in dic)
		{
			DataRow^ row = dt->NewRow();
			row["key"] = kvp.Key; //<--- kvp seems to be a valueType, or for some reason it doesn't accept -> etc....
			row["value"] = kvp.Value;
			dt->Rows->Add(row);	
		}
		dt->WriteXml(configFileName+".xml");
			return true;
		}
		catch(Exception^ err)
		{
			Console::WriteLine("Error while saving: "+err->Message);
			return false;
		}
	}
	
	Dictionary<String^,String^>^ getConfigLiterals(String^ configFileName)
	{
		Dictionary<String^,String^>^ dic = gcnew Dictionary<String^,String^>();
		try 
		{
			DataTable^ dt = gcnew DataTable();
			//it is some kind of key value store
			dt->Columns->Add("key"); //no extra function for this 
			dt->Columns->Add("value"); //it will never change muharrr
			dt->ReadXml(configFileName);
			
			for each(DataRow^ row in dt->Rows)
			{
				dic->Add(Convert::ToString(row["key"]),Convert::ToString(row["value"]));
			}
			return dic;
		}
		catch(Exception^ err)
		{
			Console::WriteLine("Error while saving: "+err->Message);
			return dic;
		}
	}


	DataTable^ ConfigController::getButtonGroupConfig(String^ _buttonGroupName)
	{
		DataTable^ dt = gcnew DataTable();

		for each (SoundButtonGroup^ sbg in list_soundButtonGroups)
		{	
			String^ pathToBGC = configFolder+"/"+sbg->name+".xml";
			if(sbg->name != _buttonGroupName) { continue; }
			if(!File::Exists(pathToBGC))
			{

				dt->TableName = sbg->name;
				dt = addButtonGroupConfigColumns(dt);
				for each (SoundButton^ sb in sbg->buttons)
				{
					DataRow^ row = dt->NewRow();
					row["Button Label"] = sb->text;
					row["Button Path"] = sb->soundButtonPath;
					row["Button Color"] = sb->soundButtonColor;
					row["Button Type"] = sb->soundButtonType;
					row["Button Remove"] = "false";
					dt->Rows->Add(row);
				}
				dt->WriteXml(pathToBGC);
			}
			else
			{
				dt->TableName = sbg->name;
				dt = addButtonGroupConfigColumns(dt);
				dt->ReadXml(pathToBGC);
			}
		}

		return dt;
	}
	DataTable^ ConfigController::addButtonGroupConfigColumns(DataTable^ dt)
	{
		if(!dt->Columns->Contains("Button Label"))
		{
			dt->Columns->Add("Button Label");
		}
		if(!dt->Columns->Contains("Button Path"))
		{
			dt->Columns->Add("Button Path");
		}
		if(!dt->Columns->Contains("Button Color"))
		{
			dt->Columns->Add("Button Color");
		}
		if(!dt->Columns->Contains("Button Type"))
		{
			dt->Columns->Add("Button Type");
		}
		if(!dt->Columns->Contains("Button Remove"))
		{
			dt->Columns->Add("Button Remove");
		}
		
		return dt;
	}



	bool ConfigController::setButtonGroupConfig(String^ _buttonGroupName,DataTable^ dt)
	{
		try
		{
			String^ pathToBGC = configFolder+"/"+_buttonGroupName+".xml";
			dt->WriteXml(pathToBGC);
			return true;
		}
		catch(Exception^ err)
		{
			Console::WriteLine("Error while saving: "+err->Message);
			return false;
		}
		return false;
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

		for each (SoundButtonGroup^ sbg in list_soundButtonGroups)
		{
			getButtonGroupConfig(sbg->name);
		}

		return list_return;	
	}
}
