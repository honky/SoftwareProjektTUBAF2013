#pragma once
#include "StdAfx.h"

namespace SoundBoard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SoundBoard;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 20);
			this->textBox1->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(343, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Select";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(84, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Pause";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(165, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Resume";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(246, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Stop";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(19, 93);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(45, 104);
			this->trackBar1->TabIndex = 7;
			this->trackBar1->Value = 500;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar1_ValueChanged);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->trackBar6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->trackBar5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->trackBar3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->trackBar2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(575, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 384);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(327, 58);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 18;
			this->button8->Text = L"getPosition";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(328, 29);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 17;
			this->button7->Text = L"getPCM";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(241, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Basss ";
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(244, 93);
			this->trackBar6->Maximum = 1000;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar6->Size = System::Drawing::Size(45, 104);
			this->trackBar6->TabIndex = 15;
			this->trackBar6->Value = 500;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &Form1::trackBar6_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(195, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Treble";
			// 
			// trackBar5
			// 
			this->trackBar5->Location = System::Drawing::Point(198, 93);
			this->trackBar5->Maximum = 1000;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar5->Size = System::Drawing::Size(45, 104);
			this->trackBar5->TabIndex = 13;
			this->trackBar5->Value = 500;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &Form1::trackBar5_Scroll);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(129, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Right";
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(132, 93);
			this->trackBar3->Maximum = 1000;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar3->Size = System::Drawing::Size(45, 104);
			this->trackBar3->TabIndex = 11;
			this->trackBar3->Value = 500;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &Form1::trackBar3_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Left";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(84, 93);
			this->trackBar2->Maximum = 1000;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->Size = System::Drawing::Size(45, 104);
			this->trackBar2->TabIndex = 9;
			this->trackBar2->Value = 500;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Volume";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(380, 218);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(192, 74);
			this->panel2->TabIndex = 9;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 298);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(229, 368);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 74);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 596);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:  Player^ testPlayer;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 textBox1->Text = Environment::CurrentDirectory + "\\sounds\\flush.mp3";

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 SoundBoard::Sound^ testSound = gcnew SoundBoard::Sound(textBox1->Text->Trim());
				 testPlayer = gcnew Player(testSound);
				 testPlayer->playSound();


			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d1 = openFileDialog1->ShowDialog();
				 textBox1->Text = openFileDialog1->FileName;
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 testPlayer->pauseSound();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 testPlayer->resumeSound ();
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 testPlayer->stopSound ();
			 }
	private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

				 testPlayer->totalVolume = trackBar1->Value;
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {

				 testPlayer->leftVolume = trackBar2->Value;
			 }
	private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {

				 testPlayer->rightVolume = trackBar3->Value;
			 }
	private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e) {

				 testPlayer->trebleVolume = trackBar5->Value;
			 }
	private: System::Void trackBar6_Scroll(System::Object^  sender, System::EventArgs^  e) {

				 testPlayer->bassVolume = trackBar6->Value;
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 Windows::Forms::PictureBox^ pb = gcnew Windows::Forms::PictureBox();
				 pb->Location = System::Drawing::Point(10,10);
				 pb->Width = 250;
				 pb->Height = 70;
				 SoundBoard::Sound^ test = gcnew SoundBoard::Sound(Environment::CurrentDirectory + "\\sounds\\getting_started.mp3");
				 SoundBoard::WaveForm^ Wf = gcnew SoundBoard::WaveForm(test);
				 System::Drawing::Bitmap^ bmp = Wf->getWaveForm(test->path, 23, 250, 70);
				 pb->Image = bmp;

				 this->Controls->Add(pb);

			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 int gu =testPlayer->getPcmValue();
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 int bla = testPlayer->getCurrentPosition();
			 }
	};
}

