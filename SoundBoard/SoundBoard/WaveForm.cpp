#include "StdAfx.h"



namespace SoundBoard
{
	using namespace Windows::Forms;
	using namespace System::Drawing;
	using namespace System;

	WaveForm::WaveForm(Sound^ givenSound)
	{
		//check if WaveForm needs to be generated
		//if yes -> getWaveForm()
		//else return path2Image
	}
	WaveForm::WaveForm(Sound^ givenSound, Boolean force)
	{
		//redraw WaveForm
	}
	PictureBox^ WaveForm::getWaveForm()
	{

		//here is the place where the WaveForm should be generated
		PictureBox^ pictureBox1 = gcnew PictureBox();
		pictureBox1->Height = 74;
		pictureBox1->Width = 264;
				System::Drawing::Pen^ MyBluePen = gcnew System::Drawing::Pen(System::Drawing::Color::Blue);
				System::Random^ rnd = gcnew System::Random();
				int random;
				Graphics^ g = pictureBox1->CreateGraphics();

				for(int i = 0;i < pictureBox1->Width;i++){
					 random = rnd->Next(pictureBox1->Height);
					 g->DrawLine(MyBluePen, i, (int) ((pictureBox1->Height - random)/2), i, ((pictureBox1->Height + random)/2));

				 }

		return pictureBox1;
	}
}
