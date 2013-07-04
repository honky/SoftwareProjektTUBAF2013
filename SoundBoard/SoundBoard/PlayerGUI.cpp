#include "StdAfx.h"
#include "PlayerGUI.h"

namespace SoundBoard
{
	PlayerGUI::PlayerGUI(System::String^ title)
	{
		this->Text=title;
		this->Size = System::Drawing::Size(380, 200);
		this->trackBarBalance = gcnew System::Windows::Forms::TrackBar();
		this->trackBarBass = gcnew System::Windows::Forms::TrackBar();
		this->trackBarTreble = gcnew System::Windows::Forms::TrackBar();
		this->trackBarVolumeAll = gcnew System::Windows::Forms::TrackBar();
		this->trackBarVolumeLeft = gcnew System::Windows::Forms::TrackBar();
		this->trackBarVolumeRight = gcnew System::Windows::Forms::TrackBar();

		this->groupBoxBalance = gcnew System::Windows::Forms::GroupBox();
		this->groupBoxBass = gcnew System::Windows::Forms::GroupBox();
		this->groupBoxTreble = gcnew System::Windows::Forms::GroupBox();
		this->groupBoxVolumeAll = gcnew System::Windows::Forms::GroupBox();
		this->groupBoxVolumeLeft = gcnew System::Windows::Forms::GroupBox();
		this->groupBoxVolumeRight = gcnew System::Windows::Forms::GroupBox();

		this->buttonPause = gcnew System::Windows::Forms::Button();
		this->buttonStop = gcnew System::Windows::Forms::Button();
		this->flowLayoutPanelButtons = gcnew System::Windows::Forms::FlowLayoutPanel();
		this->flowLayoutPanelTrackBars = gcnew System::Windows::Forms::FlowLayoutPanel();
		this->tableLayoutPanelMain = gcnew System::Windows::Forms::TableLayoutPanel();
		this->tableLayoutPanelTop = gcnew System::Windows::Forms::TableLayoutPanel();
		this->pictureBox = gcnew System::Windows::Forms::PictureBox();

		initTableLayoutPanels();
		initFlowLayoutPanels();
		initTrackBars();
		initButtons();
		this->Controls->Add(this->tableLayoutPanelMain);
	}

	void PlayerGUI::initTableLayoutPanels() {
		this->tableLayoutPanelMain->ColumnCount = 1;
		this->tableLayoutPanelMain->RowCount = 2;
		this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
			100.0F)));


		this->tableLayoutPanelMain->Controls->Add(this->tableLayoutPanelTop, 0, 0);
		this->tableLayoutPanelMain->Controls->Add(this->flowLayoutPanelTrackBars, 0,1);
		this->tableLayoutPanelMain->Dock = System::Windows::Forms::DockStyle::Fill;
		this->tableLayoutPanelMain->Name = L"tableLayoutPanelMain";
		this->tableLayoutPanelMain->RowCount = 2;
		this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
		this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100.0F)));

		this->tableLayoutPanelMain->TabIndex = 0;


		this->tableLayoutPanelTop->ColumnCount = 2;
		this->tableLayoutPanelTop->RowCount = 1;
		this->tableLayoutPanelTop->Dock = System::Windows::Forms::DockStyle::Fill;

		this->tableLayoutPanelTop->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
			100.0F)));
		this->tableLayoutPanelTop->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
			80.0F)));
		this->tableLayoutPanelTop->Controls->Add(this->pictureBox,0,0);
		this->tableLayoutPanelTop->Controls->Add(this->flowLayoutPanelButtons, 1,0);
		this->tableLayoutPanelTop->TabIndex = 1;
		this->tableLayoutPanelTop->Name = L"tableLayoutPanelTop";

	}

	void PlayerGUI::initButtons() {
		this->buttonPause->Name = L"buttonPause";
		this->buttonPause->TabIndex = 1;
		this->buttonPause->Text = L"Pause";
		this->buttonPause->UseVisualStyleBackColor = true;
		this->buttonPause->Margin = System::Windows::Forms::Padding(0);

		this->buttonStop->Name = L"buttonStop";
		//this->buttonStop->TabIndex = 2;
		this->buttonStop->Text = L"Stop";
		this->buttonStop->UseVisualStyleBackColor = true;
		this->buttonStop->Margin = System::Windows::Forms::Padding(0);
		this->buttonStop->Click += gcnew System::EventHandler(this, &SoundBoard::PlayerGUI::buttonStop_Click);
	}

	void PlayerGUI::initTrackBars() {
		this->initDefaultTrackBar(this->trackBarBalance,this->groupBoxBalance);
		this->groupBoxBalance->Text = L"Balance";
		this->initDefaultTrackBar(this->trackBarBass,this->groupBoxBass);
		this->groupBoxBass->Text = L"Bass";
		this->initDefaultTrackBar(this->trackBarTreble,this->groupBoxTreble);
		this->groupBoxTreble->Text = L"Treble";
		this->initDefaultTrackBar(this->trackBarVolumeAll,this->groupBoxVolumeAll);
		this->groupBoxVolumeAll->Text = L"Master";
		this->initDefaultTrackBar(this->trackBarVolumeLeft,this->groupBoxVolumeLeft);
		this->groupBoxVolumeLeft->Text = L"Left";
		this->initDefaultTrackBar(this->trackBarVolumeRight,this->groupBoxVolumeRight);
		this->groupBoxVolumeRight->Text = L"Right";
	}
void PlayerGUI::buttonStop_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Windows::Forms::MessageBox::Show("Hallo");
			 }

			 void PlayerGUI::initPictureBox() {



			 }

			 void PlayerGUI::initDefaultTrackBar(System::Windows::Forms::TrackBar^ bar,System::Windows::Forms::GroupBox^ gb) {
				 bar->LargeChange = 250;
				 bar->Location = System::Drawing::Point(6, 19);
				 bar->Maximum = 1000;
				 bar->Orientation = System::Windows::Forms::Orientation::Vertical;
				 bar->Size = System::Drawing::Size(45, 100);
				 bar->TabIndex = 0;
				 bar->TickFrequency = 100;
				 bar->TickStyle = System::Windows::Forms::TickStyle::Both;
				 bar->Value = 500;
				 gb->Controls->Add(bar);
				 gb->Margin = System::Windows::Forms::Padding(3);
				 gb->Size = System::Drawing::Size(55, 125);
				 gb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 gb->TabStop = false;

			 }
			 void PlayerGUI::initFlowLayoutPanels() {
				 this->initDefaultFlowLayoutPanel(this->flowLayoutPanelButtons);

				 this->flowLayoutPanelButtons->Controls->Add(this->buttonPause);
				 this->flowLayoutPanelButtons->Controls->Add(this->buttonStop);
				 this->flowLayoutPanelButtons->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->flowLayoutPanelButtons->Margin = System::Windows::Forms::Padding(0);
				 this->flowLayoutPanelButtons->Name = L"flowLayoutPanelButtons";
				 //	this->flowLayoutPanelButtons->Size = System::Drawing::Size(80, 200);

				 this->initDefaultFlowLayoutPanel(this->flowLayoutPanelTrackBars);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxVolumeAll);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxVolumeLeft);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxVolumeRight);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxTreble);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxBass);
				 this->flowLayoutPanelTrackBars->Controls->Add(this->groupBoxBalance);

				 this->flowLayoutPanelTrackBars->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->flowLayoutPanelTrackBars->Margin = System::Windows::Forms::Padding(0);
				 this->flowLayoutPanelTrackBars->Name = L"flowLayoutPanelTrackBars";
				 this->flowLayoutPanelTrackBars->Size = System::Drawing::Size(80, 40);
				 //	this->flowLayoutPanelButtons->BackColor = System::Drawing::SystemColors::ControlDark;
				 //this->flowLayoutPanelTrackBars->BackColor = System::Drawing::SystemColors::ControlDark;


			 }

			 void PlayerGUI::initDefaultFlowLayoutPanel(System::Windows::Forms::FlowLayoutPanel^ fp) 
			 {
				 fp->AutoScroll = true;
				 fp->AutoSize = true;
				 fp->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
				 fp->TabIndex = 1;
			 }
		 }