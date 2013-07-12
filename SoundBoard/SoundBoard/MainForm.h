#pragma once
#include "editConfigForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SoundBoard {

	/// <summary>
	/// Summary for MainForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

		SoundController^ soundController;
		Form^ edit;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialogCustomSounds;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorkerSoundController;
	private: System::Windows::Forms::Button^  button1;
			 ConfigController^ configController;


	public:
		MainForm(void)
		{


			InitializeComponent();
			soundController =  gcnew SoundController(flowLayoutPanelRight,this);
			configController = gcnew ConfigController(soundController);
			edit = gcnew editConfigForm(configController);
			flowLayoutPanelRight->CheckForIllegalCrossThreadCalls = false;


			textBoxPlayCustom1->Text = configController->customSound1;
			textBoxPlayCustom2->Text = configController->customSound2;
			textBoxPlayCustom3->Text = configController->customSound3;

			backgroundWorkerSoundController->RunWorkerAsync();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMain;
	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeControl;


	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelMasterVolumeControl;
	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeAll;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeAll;
	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeLeft;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeLeft;
	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeRight;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeRight;

	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeTreble;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeTreble;

	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeBass;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeBass;

	private: System::Windows::Forms::GroupBox^  groupBoxMasterVolumeBalance;
	private: System::Windows::Forms::TrackBar^  trackBarMasterVolumeBalance;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelRight;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelLeft;
	private: System::Windows::Forms::GroupBox^  groupBoxMasterPlayer;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  buttonPauseAll;
	private: System::Windows::Forms::Button^  buttonStopLast;


	private: System::Windows::Forms::Button^  buttonResumeLast;

	private: System::Windows::Forms::Button^  buttonPauseLast;
	private: System::Windows::Forms::Button^  buttonStopAll;
	private: System::Windows::Forms::Button^  buttonResumeAll;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  buttonPlayCustom1;
	private: System::Windows::Forms::Button^  buttonPlayCustom2;
	private: System::Windows::Forms::Button^  buttonPlayCustom3;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom1;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom2;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom3;



















	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelButtonGroups;












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
			this->tableLayoutPanelMain = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanelRight = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanelLeft = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBoxMasterVolumeControl = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanelMasterVolumeControl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBoxMasterVolumeAll = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeAll = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterVolumeLeft = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeLeft = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterVolumeRight = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeRight = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterVolumeTreble = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeTreble = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterVolumeBass = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeBass = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterVolumeBalance = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeBalance = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxMasterPlayer = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonStopLast = (gcnew System::Windows::Forms::Button());
			this->buttonResumeLast = (gcnew System::Windows::Forms::Button());
			this->buttonPauseLast = (gcnew System::Windows::Forms::Button());
			this->buttonStopAll = (gcnew System::Windows::Forms::Button());
			this->buttonResumeAll = (gcnew System::Windows::Forms::Button());
			this->buttonPauseAll = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanelButtonGroups = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonPlayCustom1 = (gcnew System::Windows::Forms::Button());
			this->buttonPlayCustom2 = (gcnew System::Windows::Forms::Button());
			this->buttonPlayCustom3 = (gcnew System::Windows::Forms::Button());
			this->textBoxPlayCustom1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlayCustom2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlayCustom3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialogCustomSounds = (gcnew System::Windows::Forms::OpenFileDialog());
			this->backgroundWorkerSoundController = (gcnew System::ComponentModel::BackgroundWorker());
			this->tableLayoutPanelMain->SuspendLayout();
			this->flowLayoutPanelLeft->SuspendLayout();
			this->groupBoxMasterVolumeControl->SuspendLayout();
			this->flowLayoutPanelMasterVolumeControl->SuspendLayout();
			this->groupBoxMasterVolumeAll->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeAll))->BeginInit();
			this->groupBoxMasterVolumeLeft->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeLeft))->BeginInit();
			this->groupBoxMasterVolumeRight->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeRight))->BeginInit();
			this->groupBoxMasterVolumeTreble->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeTreble))->BeginInit();
			this->groupBoxMasterVolumeBass->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeBass))->BeginInit();
			this->groupBoxMasterVolumeBalance->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeBalance))->BeginInit();
			this->groupBoxMasterPlayer->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanelMain
			// 
			this->tableLayoutPanelMain->ColumnCount = 2;
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanelMain->Controls->Add(this->flowLayoutPanelRight, 1, 0);
			this->tableLayoutPanelMain->Controls->Add(this->flowLayoutPanelLeft, 0, 0);
			this->tableLayoutPanelMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelMain->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelMain->Name = L"tableLayoutPanelMain";
			this->tableLayoutPanelMain->RowCount = 1;
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				366)));
			this->tableLayoutPanelMain->Size = System::Drawing::Size(810, 664);
			this->tableLayoutPanelMain->TabIndex = 0;
			// 
			// flowLayoutPanelRight
			// 
			this->flowLayoutPanelRight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelRight->AutoScroll = true;
			this->flowLayoutPanelRight->Location = System::Drawing::Point(408, 3);
			this->flowLayoutPanelRight->Name = L"flowLayoutPanelRight";
			this->flowLayoutPanelRight->Size = System::Drawing::Size(399, 658);
			this->flowLayoutPanelRight->TabIndex = 1;
			// 
			// flowLayoutPanelLeft
			// 
			this->flowLayoutPanelLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelLeft->AutoScroll = true;
			this->flowLayoutPanelLeft->Controls->Add(this->groupBoxMasterVolumeControl);
			this->flowLayoutPanelLeft->Controls->Add(this->groupBoxMasterPlayer);
			this->flowLayoutPanelLeft->Controls->Add(this->flowLayoutPanelButtonGroups);
			this->flowLayoutPanelLeft->Controls->Add(this->groupBox1);
			this->flowLayoutPanelLeft->Controls->Add(this->button1);
			this->flowLayoutPanelLeft->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanelLeft->Name = L"flowLayoutPanelLeft";
			this->flowLayoutPanelLeft->Size = System::Drawing::Size(399, 658);
			this->flowLayoutPanelLeft->TabIndex = 2;
			this->flowLayoutPanelLeft->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::flowLayoutPanelLeft_Paint);
			// 
			// groupBoxMasterVolumeControl
			// 
			this->groupBoxMasterVolumeControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxMasterVolumeControl->AutoSize = true;
			this->groupBoxMasterVolumeControl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBoxMasterVolumeControl->Controls->Add(this->flowLayoutPanelMasterVolumeControl);
			this->groupBoxMasterVolumeControl->Location = System::Drawing::Point(3, 3);
			this->groupBoxMasterVolumeControl->Name = L"groupBoxMasterVolumeControl";
			this->groupBoxMasterVolumeControl->Size = System::Drawing::Size(377, 150);
			this->groupBoxMasterVolumeControl->TabIndex = 0;
			this->groupBoxMasterVolumeControl->TabStop = false;
			this->groupBoxMasterVolumeControl->Text = L"Master Volume Control";
			// 
			// flowLayoutPanelMasterVolumeControl
			// 
			this->flowLayoutPanelMasterVolumeControl->AutoScroll = true;
			this->flowLayoutPanelMasterVolumeControl->AutoSize = true;
			this->flowLayoutPanelMasterVolumeControl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeAll);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeLeft);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeRight);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeTreble);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeBass);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeBalance);
			this->flowLayoutPanelMasterVolumeControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanelMasterVolumeControl->Location = System::Drawing::Point(3, 16);
			this->flowLayoutPanelMasterVolumeControl->Name = L"flowLayoutPanelMasterVolumeControl";
			this->flowLayoutPanelMasterVolumeControl->Size = System::Drawing::Size(371, 131);
			this->flowLayoutPanelMasterVolumeControl->TabIndex = 0;
			// 
			// groupBoxMasterVolumeAll
			// 
			this->groupBoxMasterVolumeAll->Controls->Add(this->trackBarMasterVolumeAll);
			this->groupBoxMasterVolumeAll->Location = System::Drawing::Point(3, 3);
			this->groupBoxMasterVolumeAll->Name = L"groupBoxMasterVolumeAll";
			this->groupBoxMasterVolumeAll->Size = System::Drawing::Size(55, 125);
			this->groupBoxMasterVolumeAll->TabIndex = 0;
			this->groupBoxMasterVolumeAll->TabStop = false;
			this->groupBoxMasterVolumeAll->Text = L"Master";
			// 
			// trackBarMasterVolumeAll
			// 
			this->trackBarMasterVolumeAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeAll->LargeChange = 250;
			this->trackBarMasterVolumeAll->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeAll->Maximum = 1000;
			this->trackBarMasterVolumeAll->Name = L"trackBarMasterVolumeAll";
			this->trackBarMasterVolumeAll->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeAll->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeAll->TabIndex = 0;
			this->trackBarMasterVolumeAll->TickFrequency = 100;
			this->trackBarMasterVolumeAll->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeAll->Value = 500;
			this->trackBarMasterVolumeAll->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeAll_ValueChanged);
			// 
			// groupBoxMasterVolumeLeft
			// 
			this->groupBoxMasterVolumeLeft->Controls->Add(this->trackBarMasterVolumeLeft);
			this->groupBoxMasterVolumeLeft->Location = System::Drawing::Point(64, 3);
			this->groupBoxMasterVolumeLeft->Name = L"groupBoxMasterVolumeLeft";
			this->groupBoxMasterVolumeLeft->Size = System::Drawing::Size(55, 125);
			this->groupBoxMasterVolumeLeft->TabIndex = 1;
			this->groupBoxMasterVolumeLeft->TabStop = false;
			this->groupBoxMasterVolumeLeft->Text = L"Left";
			// 
			// trackBarMasterVolumeLeft
			// 
			this->trackBarMasterVolumeLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeLeft->LargeChange = 250;
			this->trackBarMasterVolumeLeft->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeLeft->Maximum = 1000;
			this->trackBarMasterVolumeLeft->Name = L"trackBarMasterVolumeLeft";
			this->trackBarMasterVolumeLeft->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeLeft->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeLeft->TabIndex = 0;
			this->trackBarMasterVolumeLeft->TickFrequency = 100;
			this->trackBarMasterVolumeLeft->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeLeft->Value = 500;
			this->trackBarMasterVolumeLeft->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeLeft_ValueChanged);
			// 
			// groupBoxMasterVolumeRight
			// 
			this->groupBoxMasterVolumeRight->Controls->Add(this->trackBarMasterVolumeRight);
			this->groupBoxMasterVolumeRight->Location = System::Drawing::Point(125, 3);
			this->groupBoxMasterVolumeRight->Name = L"groupBoxMasterVolumeRight";
			this->groupBoxMasterVolumeRight->Size = System::Drawing::Size(55, 125);
			this->groupBoxMasterVolumeRight->TabIndex = 2;
			this->groupBoxMasterVolumeRight->TabStop = false;
			this->groupBoxMasterVolumeRight->Text = L"Right";
			// 
			// trackBarMasterVolumeRight
			// 
			this->trackBarMasterVolumeRight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeRight->LargeChange = 250;
			this->trackBarMasterVolumeRight->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeRight->Maximum = 1000;
			this->trackBarMasterVolumeRight->Name = L"trackBarMasterVolumeRight";
			this->trackBarMasterVolumeRight->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeRight->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeRight->TabIndex = 0;
			this->trackBarMasterVolumeRight->TickFrequency = 100;
			this->trackBarMasterVolumeRight->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeRight->Value = 500;
			this->trackBarMasterVolumeRight->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeRight_ValueChanged);
			// 
			// groupBoxMasterVolumeTreble
			// 
			this->groupBoxMasterVolumeTreble->Controls->Add(this->trackBarMasterVolumeTreble);
			this->groupBoxMasterVolumeTreble->Location = System::Drawing::Point(186, 3);
			this->groupBoxMasterVolumeTreble->Name = L"groupBoxMasterVolumeTreble";
			this->groupBoxMasterVolumeTreble->Size = System::Drawing::Size(55, 125);
			this->groupBoxMasterVolumeTreble->TabIndex = 3;
			this->groupBoxMasterVolumeTreble->TabStop = false;
			this->groupBoxMasterVolumeTreble->Text = L"Treble";
			// 
			// trackBarMasterVolumeTreble
			// 
			this->trackBarMasterVolumeTreble->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeTreble->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeTreble->Maximum = 1000;
			this->trackBarMasterVolumeTreble->Name = L"trackBarMasterVolumeTreble";
			this->trackBarMasterVolumeTreble->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeTreble->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeTreble->TabIndex = 0;
			this->trackBarMasterVolumeTreble->TickFrequency = 100;
			this->trackBarMasterVolumeTreble->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeTreble->Value = 500;
			this->trackBarMasterVolumeTreble->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeTreble_ValueChanged);
			// 
			// groupBoxMasterVolumeBass
			// 
			this->groupBoxMasterVolumeBass->Controls->Add(this->trackBarMasterVolumeBass);
			this->groupBoxMasterVolumeBass->Location = System::Drawing::Point(247, 3);
			this->groupBoxMasterVolumeBass->Name = L"groupBoxMasterVolumeBass";
			this->groupBoxMasterVolumeBass->Size = System::Drawing::Size(55, 125);
			this->groupBoxMasterVolumeBass->TabIndex = 3;
			this->groupBoxMasterVolumeBass->TabStop = false;
			this->groupBoxMasterVolumeBass->Text = L"Bass";
			// 
			// trackBarMasterVolumeBass
			// 
			this->trackBarMasterVolumeBass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeBass->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeBass->Maximum = 1000;
			this->trackBarMasterVolumeBass->Name = L"trackBarMasterVolumeBass";
			this->trackBarMasterVolumeBass->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeBass->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeBass->TabIndex = 0;
			this->trackBarMasterVolumeBass->TickFrequency = 100;
			this->trackBarMasterVolumeBass->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeBass->Value = 500;
			this->trackBarMasterVolumeBass->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeBass_ValueChanged);
			// 
			// groupBoxMasterVolumeBalance
			// 
			this->groupBoxMasterVolumeBalance->Controls->Add(this->trackBarMasterVolumeBalance);
			this->groupBoxMasterVolumeBalance->Location = System::Drawing::Point(308, 3);
			this->groupBoxMasterVolumeBalance->Name = L"groupBoxMasterVolumeBalance";
			this->groupBoxMasterVolumeBalance->Size = System::Drawing::Size(60, 125);
			this->groupBoxMasterVolumeBalance->TabIndex = 3;
			this->groupBoxMasterVolumeBalance->TabStop = false;
			this->groupBoxMasterVolumeBalance->Text = L"Balance";
			// 
			// trackBarMasterVolumeBalance
			// 
			this->trackBarMasterVolumeBalance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeBalance->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeBalance->Maximum = 1000;
			this->trackBarMasterVolumeBalance->Minimum = -1000;
			this->trackBarMasterVolumeBalance->Name = L"trackBarMasterVolumeBalance";
			this->trackBarMasterVolumeBalance->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeBalance->Size = System::Drawing::Size(42, 100);
			this->trackBarMasterVolumeBalance->TabIndex = 0;
			this->trackBarMasterVolumeBalance->TickFrequency = 200;
			this->trackBarMasterVolumeBalance->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeBalance->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBarMasterVolumeBalance_ValueChanged);
			// 
			// groupBoxMasterPlayer
			// 
			this->groupBoxMasterPlayer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxMasterPlayer->Controls->Add(this->tableLayoutPanel1);
			this->groupBoxMasterPlayer->Location = System::Drawing::Point(3, 159);
			this->groupBoxMasterPlayer->Name = L"groupBoxMasterPlayer";
			this->groupBoxMasterPlayer->Size = System::Drawing::Size(377, 78);
			this->groupBoxMasterPlayer->TabIndex = 1;
			this->groupBoxMasterPlayer->TabStop = false;
			this->groupBoxMasterPlayer->Text = L"Master Player";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33F)));
			this->tableLayoutPanel1->Controls->Add(this->buttonStopLast, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonResumeLast, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonPauseLast, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->buttonStopAll, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonResumeAll, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->buttonPauseAll, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(371, 59);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// buttonStopLast
			// 
			this->buttonStopLast->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonStopLast->Location = System::Drawing::Point(249, 32);
			this->buttonStopLast->Name = L"buttonStopLast";
			this->buttonStopLast->Size = System::Drawing::Size(119, 24);
			this->buttonStopLast->TabIndex = 5;
			this->buttonStopLast->Text = L"Stop Last";
			this->buttonStopLast->UseVisualStyleBackColor = true;
			this->buttonStopLast->Click += gcnew System::EventHandler(this, &MainForm::buttonStopLast_Click);
			// 
			// buttonResumeLast
			// 
			this->buttonResumeLast->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonResumeLast->Location = System::Drawing::Point(126, 32);
			this->buttonResumeLast->Name = L"buttonResumeLast";
			this->buttonResumeLast->Size = System::Drawing::Size(117, 24);
			this->buttonResumeLast->TabIndex = 4;
			this->buttonResumeLast->Text = L"Resume Last";
			this->buttonResumeLast->UseVisualStyleBackColor = true;
			this->buttonResumeLast->Click += gcnew System::EventHandler(this, &MainForm::buttonResumeLast_Click);
			// 
			// buttonPauseLast
			// 
			this->buttonPauseLast->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPauseLast->Location = System::Drawing::Point(3, 32);
			this->buttonPauseLast->Name = L"buttonPauseLast";
			this->buttonPauseLast->Size = System::Drawing::Size(117, 24);
			this->buttonPauseLast->TabIndex = 3;
			this->buttonPauseLast->Text = L"Pause Last";
			this->buttonPauseLast->UseVisualStyleBackColor = true;
			this->buttonPauseLast->Click += gcnew System::EventHandler(this, &MainForm::buttonPauseLast_Click);
			// 
			// buttonStopAll
			// 
			this->buttonStopAll->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonStopAll->Location = System::Drawing::Point(249, 3);
			this->buttonStopAll->Name = L"buttonStopAll";
			this->buttonStopAll->Size = System::Drawing::Size(119, 23);
			this->buttonStopAll->TabIndex = 2;
			this->buttonStopAll->Text = L"Stop All";
			this->buttonStopAll->UseVisualStyleBackColor = true;
			this->buttonStopAll->Click += gcnew System::EventHandler(this, &MainForm::buttonStopAll_Click);
			// 
			// buttonResumeAll
			// 
			this->buttonResumeAll->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonResumeAll->Location = System::Drawing::Point(126, 3);
			this->buttonResumeAll->Name = L"buttonResumeAll";
			this->buttonResumeAll->Size = System::Drawing::Size(117, 23);
			this->buttonResumeAll->TabIndex = 1;
			this->buttonResumeAll->Text = L"Resume All";
			this->buttonResumeAll->UseVisualStyleBackColor = true;
			this->buttonResumeAll->Click += gcnew System::EventHandler(this, &MainForm::buttonResumeAll_Click);
			// 
			// buttonPauseAll
			// 
			this->buttonPauseAll->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPauseAll->Location = System::Drawing::Point(3, 3);
			this->buttonPauseAll->Name = L"buttonPauseAll";
			this->buttonPauseAll->Size = System::Drawing::Size(117, 23);
			this->buttonPauseAll->TabIndex = 0;
			this->buttonPauseAll->Text = L"Pause All";
			this->buttonPauseAll->UseVisualStyleBackColor = true;
			this->buttonPauseAll->Click += gcnew System::EventHandler(this, &MainForm::buttonPauseAll_Click);
			// 
			// flowLayoutPanelButtonGroups
			// 
			this->flowLayoutPanelButtonGroups->Location = System::Drawing::Point(3, 243);
			this->flowLayoutPanelButtonGroups->Name = L"flowLayoutPanelButtonGroups";
			this->flowLayoutPanelButtonGroups->Size = System::Drawing::Size(377, 254);
			this->flowLayoutPanelButtonGroups->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Location = System::Drawing::Point(3, 503);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(377, 100);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"CustomSounds";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				75)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				25)));
			this->tableLayoutPanel2->Controls->Add(this->buttonPlayCustom1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->buttonPlayCustom2, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->buttonPlayCustom3, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBoxPlayCustom1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBoxPlayCustom2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBoxPlayCustom3, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(371, 81);
			this->tableLayoutPanel2->TabIndex = 0;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel2_Paint);
			// 
			// buttonPlayCustom1
			// 
			this->buttonPlayCustom1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom1->Location = System::Drawing::Point(281, 3);
			this->buttonPlayCustom1->Name = L"buttonPlayCustom1";
			this->buttonPlayCustom1->Size = System::Drawing::Size(87, 21);
			this->buttonPlayCustom1->TabIndex = 0;
			this->buttonPlayCustom1->Text = L"Play Custom 1";
			this->buttonPlayCustom1->UseVisualStyleBackColor = true;
			this->buttonPlayCustom1->Click += gcnew System::EventHandler(this, &MainForm::buttonPlayCustom1_Click);
			// 
			// buttonPlayCustom2
			// 
			this->buttonPlayCustom2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom2->Location = System::Drawing::Point(281, 30);
			this->buttonPlayCustom2->Name = L"buttonPlayCustom2";
			this->buttonPlayCustom2->Size = System::Drawing::Size(87, 21);
			this->buttonPlayCustom2->TabIndex = 1;
			this->buttonPlayCustom2->Text = L"Play Custom 2";
			this->buttonPlayCustom2->UseVisualStyleBackColor = true;
			this->buttonPlayCustom2->Click += gcnew System::EventHandler(this, &MainForm::buttonPlayCustom2_Click);
			// 
			// buttonPlayCustom3
			// 
			this->buttonPlayCustom3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom3->Location = System::Drawing::Point(281, 57);
			this->buttonPlayCustom3->Name = L"buttonPlayCustom3";
			this->buttonPlayCustom3->Size = System::Drawing::Size(87, 21);
			this->buttonPlayCustom3->TabIndex = 2;
			this->buttonPlayCustom3->Text = L"Play Custom 3";
			this->buttonPlayCustom3->UseVisualStyleBackColor = true;
			this->buttonPlayCustom3->Click += gcnew System::EventHandler(this, &MainForm::buttonPlayCustom3_Click);
			// 
			// textBoxPlayCustom1
			// 
			this->textBoxPlayCustom1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom1->Location = System::Drawing::Point(3, 3);
			this->textBoxPlayCustom1->Name = L"textBoxPlayCustom1";
			this->textBoxPlayCustom1->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom1->TabIndex = 3;
			this->textBoxPlayCustom1->DoubleClick += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom1_DoubleClick);
			this->textBoxPlayCustom1->Click += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom1_Click);
			this->textBoxPlayCustom1->MouseEnter += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom1_MouseEnter);
			// 
			// textBoxPlayCustom2
			// 
			this->textBoxPlayCustom2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom2->Location = System::Drawing::Point(3, 30);
			this->textBoxPlayCustom2->Name = L"textBoxPlayCustom2";
			this->textBoxPlayCustom2->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom2->TabIndex = 4;
			this->textBoxPlayCustom2->DoubleClick += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom2_DoubleClick);
			this->textBoxPlayCustom2->Click += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom2_Click);
			this->textBoxPlayCustom2->MouseEnter += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom2_MouseEnter);
			// 
			// textBoxPlayCustom3
			// 
			this->textBoxPlayCustom3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom3->Location = System::Drawing::Point(3, 57);
			this->textBoxPlayCustom3->Name = L"textBoxPlayCustom3";
			this->textBoxPlayCustom3->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom3->TabIndex = 5;
			this->textBoxPlayCustom3->DoubleClick += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom3_DoubleClick);
			this->textBoxPlayCustom3->Click += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom3_Click);
			this->textBoxPlayCustom3->MouseEnter += gcnew System::EventHandler(this, &MainForm::textBoxPlayCustom3_MouseEnter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 609);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Edit Config";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// openFileDialogCustomSounds
			// 
			this->openFileDialogCustomSounds->FileName = L"openFileDialogCustomSounds";
			// 
			// backgroundWorkerSoundController
			// 
			this->backgroundWorkerSoundController->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MainForm::backgroundWorkerSoundController_DoWork);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 664);
			this->Controls->Add(this->tableLayoutPanelMain);
			this->MinimumSize = System::Drawing::Size(818, 661);
			this->Name = L"MainForm";
			this->Text = L"SoundBoard SoftwareProjekt TUBAF 2013";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanelMain->ResumeLayout(false);
			this->flowLayoutPanelLeft->ResumeLayout(false);
			this->flowLayoutPanelLeft->PerformLayout();
			this->groupBoxMasterVolumeControl->ResumeLayout(false);
			this->groupBoxMasterVolumeControl->PerformLayout();
			this->flowLayoutPanelMasterVolumeControl->ResumeLayout(false);
			this->groupBoxMasterVolumeAll->ResumeLayout(false);
			this->groupBoxMasterVolumeAll->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeAll))->EndInit();
			this->groupBoxMasterVolumeLeft->ResumeLayout(false);
			this->groupBoxMasterVolumeLeft->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeLeft))->EndInit();
			this->groupBoxMasterVolumeRight->ResumeLayout(false);
			this->groupBoxMasterVolumeRight->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeRight))->EndInit();
			this->groupBoxMasterVolumeTreble->ResumeLayout(false);
			this->groupBoxMasterVolumeTreble->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeTreble))->EndInit();
			this->groupBoxMasterVolumeBass->ResumeLayout(false);
			this->groupBoxMasterVolumeBass->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeBass))->EndInit();
			this->groupBoxMasterVolumeBalance->ResumeLayout(false);
			this->groupBoxMasterVolumeBalance->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeBalance))->EndInit();
			this->groupBoxMasterPlayer->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void flowLayoutPanelLeft_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlayerGUI^ gB = gcnew PlayerGUI("snafu");			
				 flowLayoutPanelRight->Controls->Add(gB);		
			 }
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 for each (SoundButtonGroup ^ sgb in configController->list_soundButtonGroups)
				 {
					 flowLayoutPanelButtonGroups->Controls->Add(sgb);
				 }
			 }
	private: System::Void buttonStopAll_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->stopAll();
			 }
	private: System::Void buttonResumeAll_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->resumeAll();
			 }
	private: System::Void buttonPauseAll_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->pauseAll();
			 }
	private: System::Void buttonPauseLast_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->pauseLast();
			 }
	private: System::Void buttonResumeLast_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->resumeLast();
			 }
	private: System::Void buttonStopLast_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->stopLast();
			 }
	private: System::Void textBoxPlayCustom1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d1 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom1->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void textBoxPlayCustom1_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d1 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom1->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void buttonPlayCustom1_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->playCustomSound(textBoxPlayCustom1->Text);
			 }
	private: System::Void textBoxPlayCustom2_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d2 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom2->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void textBoxPlayCustom2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d2 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom2->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void buttonPlayCustom2_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->playCustomSound(textBoxPlayCustom2->Text);
			 }
	private: System::Void textBoxPlayCustom3_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d3 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom3->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void textBoxPlayCustom3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult^ d3 = openFileDialogCustomSounds->ShowDialog();
				 textBoxPlayCustom3->Text = openFileDialogCustomSounds->FileName;
			 }
	private: System::Void buttonPlayCustom3_Click(System::Object^  sender, System::EventArgs^  e) {
				 soundController->playCustomSound(textBoxPlayCustom2->Text);
			 }
	private: System::Void textBoxPlayCustom1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 ToolTip^ tt = gcnew ToolTip();
				 tt->Show("Please click on this TextBox to change the path of the CustomSound1",textBoxPlayCustom1,0,0,2000);
			 }
	private: System::Void textBoxPlayCustom2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 ToolTip^ tt = gcnew ToolTip();
				 tt->Show("Please click on this TextBox to change the path of the CustomSound2",textBoxPlayCustom2,0,0,2000);
			 }
	private: System::Void textBoxPlayCustom3_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 ToolTip^ tt = gcnew ToolTip();
				 tt->Show("Please click on this TextBox to change the path of the CustomSound3",textBoxPlayCustom3,0,0,2000);
			 }
	private: System::Void backgroundWorkerSoundController_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
				
				 
				 /*
				 while(true) //(backgroundWorkerSoundController->ChancellationPending oder so
				 {
					 try
					 {						
						soundController->checkPlayingGUIs(this,"");
					 }
					 catch (Exception^ e)
					 {
						 MessageBox::Show(e->Message);
					 }
					 System::Threading::Thread::Sleep(10000);
				 }
				 */
				 
			 }
private: System::Void trackBarMasterVolumeAll_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeVolumeMasterAll(this->trackBarMasterVolumeAll->Value);
		 }
private: System::Void trackBarMasterVolumeLeft_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeVolumeLeftAll(this->trackBarMasterVolumeLeft->Value);
		 }
private: System::Void trackBarMasterVolumeRight_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeVolumeRightAll(this->trackBarMasterVolumeRight->Value);
		 }
private: System::Void trackBarMasterVolumeTreble_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeTrebleAll(this->trackBarMasterVolumeTreble->Value);
		 }
private: System::Void trackBarMasterVolumeBass_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeBassAll(this->trackBarMasterVolumeBass->Value);
		 }
private: System::Void trackBarMasterVolumeBalance_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->soundController->changeBalanceAll(this->trackBarMasterVolumeBalance->Value);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 edit->Show();
		 }
};
}
