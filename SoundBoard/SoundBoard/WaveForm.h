#pragma once

namespace SoundBoard
{
	
	using namespace System;
	using namespace Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	ref class WaveForm
	{ //google supports a lot of stuff to this topic
	public:
		WaveForm(Sound^ givenSound);
		WaveForm(Sound^ givenSound, bool force);

	private:
		static int PBWIDTH		= 250;
		static int SAMPLINGRATE = 10000;
		
	public:
		PictureBox^ getWaveForm();
		String^ path2image;

	};
	void executeShellCommand(System::String ^_FileToExecute, System::String ^_CommandLine, System::String ^%_outputMessage, System::String ^%_errorMessage);
	List<int>^ createSamples(String^ fileName, int length);
	Bitmap getWave(Sound^ snd);

}
