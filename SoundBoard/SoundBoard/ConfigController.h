#pragma once


namespace SoundBoard
{
	using namespace System::Collections::Generic;
	using namespace System::Data;

	public ref class ConfigController
	{
	public:
		ConfigController(SoundController^ _soundController);
	public:
		//configFolderPath -> will held multiple xml files
		String^ configFolder;
		//soundFolder -> place where sound folder is located
		String^ soundsFolder;	

		//Path to custom Sound1
		String^ customSound1;
		//Path to custom Sound2
		String^ customSound2;
		//Path to custom Sound3
		String^ customSound3;

		List<SoundButtonGroup^>^ list_soundButtonGroups;
		SoundController^ soundController;	
		
		bool saveConfigLiterals();
		bool loadConfigLiterals();

		//gets saved config or generates it if it doesn't exist yet
		DataTable^ getButtonGroupConfig(String^ type);
		bool setConfigLiterals(String^ configFileName, Dictionary<String^,String^>^ dic);

	private:	
		List<SoundButtonGroup^>^ createDefaultButtonGroups();
		List<String^>^ list_folderNamesToIgnore;		
		Dictionary<String^,String^>^ ConfigController::getConfigLiterals(String^ configFileName);

		//writes config to controlled xml path 
		bool setButtonGroupConfig(String^ type, DataTable^ dt);

	private:
		//simply stops code duplication
		DataTable^ addButtonGroupConfigColumns(DataTable^ dt); 
	};
}
