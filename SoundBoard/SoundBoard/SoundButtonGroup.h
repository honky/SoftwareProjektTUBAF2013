#pragma once

namespace SoundBoard
{
	using namespace System;
	using namespace System::Collections::Generic;


	[Serializable]
	ref class SoundButtonGroup : public Windows::Forms::GroupBox
	{
	public:
		SoundButtonGroup(String^ name);
		String^ name;
		void addSoundButton(SoundButton^ sb);
		List<SoundButton^>^ buttons;
	private:
		Windows::Forms::FlowLayoutPanel^ flPanel;
	};
}
