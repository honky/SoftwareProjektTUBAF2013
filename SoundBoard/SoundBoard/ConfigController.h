#pragma once


namespace SoundBoard
{
	ref class ConfigController
	{
	public:
		ConfigController(void);
	private:
		String^ configFolder;
		String^ soundsFolder;
		void createDefaultConfig();
	};
}
