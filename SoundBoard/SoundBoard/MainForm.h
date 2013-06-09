#pragma once

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
	public:
		MainForm(void)
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



	private: System::Windows::Forms::Panel^  panelButtonGroups;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  buttonPlayCustom1;
	private: System::Windows::Forms::Button^  buttonPlayCustom2;
	private: System::Windows::Forms::Button^  buttonPlayCustom3;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom1;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom2;
	private: System::Windows::Forms::TextBox^  textBoxPlayCustom3;
	private: System::Windows::Forms::GroupBox^  groupBoxSoundTemplate;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;











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
			this->groupBoxSoundTemplate = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
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
			this->panelButtonGroups = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonPlayCustom1 = (gcnew System::Windows::Forms::Button());
			this->buttonPlayCustom2 = (gcnew System::Windows::Forms::Button());
			this->buttonPlayCustom3 = (gcnew System::Windows::Forms::Button());
			this->textBoxPlayCustom1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlayCustom2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPlayCustom3 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanelMain->SuspendLayout();
			this->flowLayoutPanelRight->SuspendLayout();
			this->groupBoxSoundTemplate->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar4))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->BeginInit();
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
			this->panelButtonGroups->SuspendLayout();
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
			this->tableLayoutPanelMain->Size = System::Drawing::Size(792, 540);
			this->tableLayoutPanelMain->TabIndex = 0;
			// 
			// flowLayoutPanelRight
			// 
			this->flowLayoutPanelRight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelRight->Controls->Add(this->groupBoxSoundTemplate);
			this->flowLayoutPanelRight->Location = System::Drawing::Point(399, 3);
			this->flowLayoutPanelRight->Name = L"flowLayoutPanelRight";
			this->flowLayoutPanelRight->Size = System::Drawing::Size(390, 534);
			this->flowLayoutPanelRight->TabIndex = 1;
			// 
			// groupBoxSoundTemplate
			// 
			this->groupBoxSoundTemplate->Controls->Add(this->flowLayoutPanel1);
			this->groupBoxSoundTemplate->Location = System::Drawing::Point(3, 3);
			this->groupBoxSoundTemplate->Name = L"groupBoxSoundTemplate";
			this->groupBoxSoundTemplate->Size = System::Drawing::Size(378, 208);
			this->groupBoxSoundTemplate->TabIndex = 0;
			this->groupBoxSoundTemplate->TabStop = false;
			this->groupBoxSoundTemplate->Text = L"groupBoxSoundTemplate";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->groupBox3);
			this->flowLayoutPanel1->Controls->Add(this->groupBox2);
			this->flowLayoutPanel1->Controls->Add(this->groupBox4);
			this->flowLayoutPanel1->Controls->Add(this->groupBox5);
			this->flowLayoutPanel1->Controls->Add(this->groupBox6);
			this->flowLayoutPanel1->Controls->Add(this->groupBox7);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 16);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(372, 189);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(365, 50);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(6, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(275, 43);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(287, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pause";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->trackBar2);
			this->groupBox3->Location = System::Drawing::Point(3, 59);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(55, 125);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Left";
			// 
			// trackBar2
			// 
			this->trackBar2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar2->LargeChange = 250;
			this->trackBar2->Location = System::Drawing::Point(6, 19);
			this->trackBar2->Maximum = 1000;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->Size = System::Drawing::Size(45, 100);
			this->trackBar2->TabIndex = 0;
			this->trackBar2->TickFrequency = 100;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar2->Value = 500;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->trackBar1);
			this->groupBox2->Location = System::Drawing::Point(64, 59);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(55, 125);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Master";
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->LargeChange = 250;
			this->trackBar1->Location = System::Drawing::Point(6, 19);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(45, 100);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickFrequency = 100;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 500;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->trackBar3);
			this->groupBox4->Location = System::Drawing::Point(125, 59);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(55, 125);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Right";
			// 
			// trackBar3
			// 
			this->trackBar3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar3->LargeChange = 250;
			this->trackBar3->Location = System::Drawing::Point(6, 19);
			this->trackBar3->Maximum = 1000;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar3->Size = System::Drawing::Size(45, 100);
			this->trackBar3->TabIndex = 0;
			this->trackBar3->TickFrequency = 100;
			this->trackBar3->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar3->Value = 500;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->trackBar4);
			this->groupBox5->Location = System::Drawing::Point(186, 59);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(55, 125);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Treble";
			// 
			// trackBar4
			// 
			this->trackBar4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar4->Location = System::Drawing::Point(6, 19);
			this->trackBar4->Maximum = 1000;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar4->Size = System::Drawing::Size(45, 100);
			this->trackBar4->TabIndex = 0;
			this->trackBar4->TickFrequency = 100;
			this->trackBar4->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar4->Value = 500;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->trackBar5);
			this->groupBox6->Location = System::Drawing::Point(247, 59);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(55, 125);
			this->groupBox6->TabIndex = 3;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Bass";
			// 
			// trackBar5
			// 
			this->trackBar5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar5->Location = System::Drawing::Point(6, 19);
			this->trackBar5->Maximum = 1000;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar5->Size = System::Drawing::Size(45, 100);
			this->trackBar5->TabIndex = 0;
			this->trackBar5->TickFrequency = 100;
			this->trackBar5->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar5->Value = 500;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->trackBar6);
			this->groupBox7->Location = System::Drawing::Point(308, 59);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(60, 125);
			this->groupBox7->TabIndex = 3;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Balance";
			// 
			// trackBar6
			// 
			this->trackBar6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar6->Location = System::Drawing::Point(6, 19);
			this->trackBar6->Maximum = 1000;
			this->trackBar6->Minimum = -1000;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar6->Size = System::Drawing::Size(45, 100);
			this->trackBar6->TabIndex = 0;
			this->trackBar6->TickFrequency = 200;
			this->trackBar6->TickStyle = System::Windows::Forms::TickStyle::Both;
			// 
			// flowLayoutPanelLeft
			// 
			this->flowLayoutPanelLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelLeft->AutoScroll = true;
			this->flowLayoutPanelLeft->Controls->Add(this->groupBoxMasterVolumeControl);
			this->flowLayoutPanelLeft->Controls->Add(this->groupBoxMasterPlayer);
			this->flowLayoutPanelLeft->Controls->Add(this->panelButtonGroups);
			this->flowLayoutPanelLeft->Controls->Add(this->groupBox1);
			this->flowLayoutPanelLeft->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanelLeft->Name = L"flowLayoutPanelLeft";
			this->flowLayoutPanelLeft->Size = System::Drawing::Size(390, 534);
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
			this->trackBarMasterVolumeAll->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeAll->TabIndex = 0;
			this->trackBarMasterVolumeAll->TickFrequency = 100;
			this->trackBarMasterVolumeAll->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeAll->Value = 500;
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
			this->trackBarMasterVolumeLeft->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeLeft->TabIndex = 0;
			this->trackBarMasterVolumeLeft->TickFrequency = 100;
			this->trackBarMasterVolumeLeft->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeLeft->Value = 500;
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
			this->trackBarMasterVolumeRight->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeRight->TabIndex = 0;
			this->trackBarMasterVolumeRight->TickFrequency = 100;
			this->trackBarMasterVolumeRight->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeRight->Value = 500;
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
			this->trackBarMasterVolumeTreble->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeTreble->TabIndex = 0;
			this->trackBarMasterVolumeTreble->TickFrequency = 100;
			this->trackBarMasterVolumeTreble->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeTreble->Value = 500;
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
			this->trackBarMasterVolumeBass->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeBass->TabIndex = 0;
			this->trackBarMasterVolumeBass->TickFrequency = 100;
			this->trackBarMasterVolumeBass->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBarMasterVolumeBass->Value = 500;
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
			this->trackBarMasterVolumeBalance->Size = System::Drawing::Size(45, 100);
			this->trackBarMasterVolumeBalance->TabIndex = 0;
			this->trackBarMasterVolumeBalance->TickFrequency = 200;
			this->trackBarMasterVolumeBalance->TickStyle = System::Windows::Forms::TickStyle::Both;
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
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.33333F)));
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
			// 
			// panelButtonGroups
			// 
			this->panelButtonGroups->Controls->Add(this->button3);
			this->panelButtonGroups->Location = System::Drawing::Point(3, 243);
			this->panelButtonGroups->Name = L"panelButtonGroups";
			this->panelButtonGroups->Size = System::Drawing::Size(377, 175);
			this->panelButtonGroups->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(296, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel2);
			this->groupBox1->Location = System::Drawing::Point(3, 424);
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
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(371, 81);
			this->tableLayoutPanel2->TabIndex = 0;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel2_Paint);
			// 
			// buttonPlayCustom1
			// 
			this->buttonPlayCustom1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom1->Location = System::Drawing::Point(281, 3);
			this->buttonPlayCustom1->Name = L"buttonPlayCustom1";
			this->buttonPlayCustom1->Size = System::Drawing::Size(87, 20);
			this->buttonPlayCustom1->TabIndex = 0;
			this->buttonPlayCustom1->Text = L"Play Custom 1";
			this->buttonPlayCustom1->UseVisualStyleBackColor = true;
			// 
			// buttonPlayCustom2
			// 
			this->buttonPlayCustom2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom2->Location = System::Drawing::Point(281, 29);
			this->buttonPlayCustom2->Name = L"buttonPlayCustom2";
			this->buttonPlayCustom2->Size = System::Drawing::Size(87, 21);
			this->buttonPlayCustom2->TabIndex = 1;
			this->buttonPlayCustom2->Text = L"Play Custom 2";
			this->buttonPlayCustom2->UseVisualStyleBackColor = true;
			// 
			// buttonPlayCustom3
			// 
			this->buttonPlayCustom3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->buttonPlayCustom3->Location = System::Drawing::Point(281, 56);
			this->buttonPlayCustom3->Name = L"buttonPlayCustom3";
			this->buttonPlayCustom3->Size = System::Drawing::Size(87, 22);
			this->buttonPlayCustom3->TabIndex = 2;
			this->buttonPlayCustom3->Text = L"Play Custom 3";
			this->buttonPlayCustom3->UseVisualStyleBackColor = true;
			// 
			// textBoxPlayCustom1
			// 
			this->textBoxPlayCustom1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom1->Location = System::Drawing::Point(3, 3);
			this->textBoxPlayCustom1->Name = L"textBoxPlayCustom1";
			this->textBoxPlayCustom1->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom1->TabIndex = 3;
			// 
			// textBoxPlayCustom2
			// 
			this->textBoxPlayCustom2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom2->Location = System::Drawing::Point(3, 29);
			this->textBoxPlayCustom2->Name = L"textBoxPlayCustom2";
			this->textBoxPlayCustom2->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom2->TabIndex = 4;
			// 
			// textBoxPlayCustom3
			// 
			this->textBoxPlayCustom3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxPlayCustom3->Location = System::Drawing::Point(3, 56);
			this->textBoxPlayCustom3->Name = L"textBoxPlayCustom3";
			this->textBoxPlayCustom3->Size = System::Drawing::Size(272, 20);
			this->textBoxPlayCustom3->TabIndex = 5;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 540);
			this->Controls->Add(this->tableLayoutPanelMain);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tableLayoutPanelMain->ResumeLayout(false);
			this->flowLayoutPanelRight->ResumeLayout(false);
			this->groupBoxSoundTemplate->ResumeLayout(false);
			this->groupBoxSoundTemplate->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar4))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar5))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar6))->EndInit();
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
			this->panelButtonGroups->ResumeLayout(false);
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
			 
			

			Windows::Forms::GroupBox^ gB = gcnew GroupBox();
			
			//System::Object^ sysClone = groupBoxSoundTemplate->Controls->MemberwiseClone();			 
	        //gB->Controls = groupBoxSoundTemplate->Controls;
			
			
			int i = 0;
			for each(Control^ eC in groupBoxSoundTemplate->Controls)
			{
				//maybe its that way..
				if(eC->GetType() == Panel::typeid)
				{

				}

				Control^ copyControl = gcnew Control();
				copyControl->Location = eC->Location;
				copyControl->Name = "snafu"+i++;
				copyControl->Size = eC->Size;
				copyControl->Dock = eC->Dock;
				copyControl->Visible = true;
				copyControl->Text = "C" + copyControl->Text;
				gB->Controls->Add(copyControl);
			}
			

			flowLayoutPanelRight->Controls->Add(gB);



			// 
			

		 }
};
}
