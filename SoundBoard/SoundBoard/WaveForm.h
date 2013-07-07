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
		WaveForm(String^ path, int pbl, int pbw);

	private:
		static int PBWIDTH		= 250;
		static int SAMPLINGRATE = 10000;
		Bitmap^ wave;
		
	public:
		Bitmap^ getWaveForm(String^ path, int pbl, int pbw);
		String^ path2image;
		static void shellcmd(System::String ^_FileToExecute, System::String ^_CommandLine, System::String ^%_outputMessage, System::String ^%_errorMessage);
		static List<int>^ createSamples(String^ fileName, int pbl);
		property Bitmap^ Bmp
		{
			Bitmap^ get(){return wave;}
		}
	};
}
