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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->tableLayoutPanelMain->Size = System::Drawing::Size(792, 366);
			this->tableLayoutPanelMain->TabIndex = 0;
			// 
			// flowLayoutPanelRight
			// 
			this->flowLayoutPanelRight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelRight->Location = System::Drawing::Point(399, 3);
			this->flowLayoutPanelRight->Name = L"flowLayoutPanelRight";
			this->flowLayoutPanelRight->Size = System::Drawing::Size(390, 360);
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
			this->flowLayoutPanelLeft->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanelLeft->Name = L"flowLayoutPanelLeft";
			this->flowLayoutPanelLeft->Size = System::Drawing::Size(390, 360);
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
			this->tableLayoutPanel1->Controls->Add(this->button6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(371, 59);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pause All";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(126, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Resume All";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(249, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Stop All";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(3, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 24);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Pause Last";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(126, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 24);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Pause Last";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(249, 32);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 24);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Stop Last";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 366);
			this->Controls->Add(this->tableLayoutPanelMain);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
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
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }

private: System::Void flowLayoutPanelLeft_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
