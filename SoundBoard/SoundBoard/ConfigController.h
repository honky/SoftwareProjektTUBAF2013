#pragma once


namespace SoundBoard
{
	using namespace System::Collections::Generic;

	ref class ConfigController
	{
	public:
		ConfigController(void);
	public:
		String^ configFolder;
		String^ soundsFolder;
		List<SoundButtonGroup^>^ list_soundButtonGroups;

		List<SoundButtonGroup^>^ createDefaultButtonGroups();
		List<String^>^ list_folderNamesToIgnore;
	};
}
