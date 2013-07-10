#pragma once


namespace SoundBoard
{
	using namespace System::Collections::Generic;

	public ref class ConfigController
	{
	public:
		ConfigController(SoundController^ _soundController);
	public:
		String^ configFolder;
		String^ soundsFolder;
		
		String^ customSound1;
		String^ customSound2;
		String^ customSound3;

		List<SoundButtonGroup^>^ list_soundButtonGroups;
		SoundController^ soundController;

		List<SoundButtonGroup^>^ createDefaultButtonGroups();
		List<String^>^ list_folderNamesToIgnore;
	};
}
