#pragma once


namespace SoundBoard
{
	using namespace System::Collections::Generic;

	ref class ConfigController
	{
	public:
		ConfigController(SoundController^ _soundController);
	public:
		String^ configFolder;
		String^ soundsFolder;
		List<SoundButtonGroup^>^ list_soundButtonGroups;
		SoundController^ soundController;

		List<SoundButtonGroup^>^ createDefaultButtonGroups();
		List<String^>^ list_folderNamesToIgnore;
	};
}
