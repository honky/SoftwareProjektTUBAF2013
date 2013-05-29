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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;




	protected: 

	protected: 


	protected: 


	protected: 

	protected: 

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
			this->groupBoxMasterVolumeControl = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanelMasterVolumeControl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBoxMasterVolumeAll = (gcnew System::Windows::Forms::GroupBox());
			this->trackBarMasterVolumeAll = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->tableLayoutPanelMain->SuspendLayout();
			this->groupBoxMasterVolumeControl->SuspendLayout();
			this->flowLayoutPanelMasterVolumeControl->SuspendLayout();
			this->groupBoxMasterVolumeAll->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeAll))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanelMain
			// 
			this->tableLayoutPanelMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanelMain->ColumnCount = 2;
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanelMain->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanelMain->Controls->Add(this->groupBoxMasterVolumeControl, 0, 0);
			this->tableLayoutPanelMain->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelMain->Name = L"tableLayoutPanelMain";
			this->tableLayoutPanelMain->RowCount = 1;
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanelMain->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 
				20)));
			this->tableLayoutPanelMain->Size = System::Drawing::Size(794, 368);
			this->tableLayoutPanelMain->TabIndex = 0;
			// 
			// groupBoxMasterVolumeControl
			// 
			this->groupBoxMasterVolumeControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxMasterVolumeControl->Controls->Add(this->flowLayoutPanelMasterVolumeControl);
			this->groupBoxMasterVolumeControl->Location = System::Drawing::Point(3, 3);
			this->groupBoxMasterVolumeControl->Name = L"groupBoxMasterVolumeControl";
			this->groupBoxMasterVolumeControl->Size = System::Drawing::Size(391, 337);
			this->groupBoxMasterVolumeControl->TabIndex = 0;
			this->groupBoxMasterVolumeControl->TabStop = false;
			this->groupBoxMasterVolumeControl->Text = L"Master Volume Control";
			// 
			// flowLayoutPanelMasterVolumeControl
			// 
			this->flowLayoutPanelMasterVolumeControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBoxMasterVolumeAll);
			this->flowLayoutPanelMasterVolumeControl->Controls->Add(this->groupBox1);
			this->flowLayoutPanelMasterVolumeControl->Location = System::Drawing::Point(6, 19);
			this->flowLayoutPanelMasterVolumeControl->Name = L"flowLayoutPanelMasterVolumeControl";
			this->flowLayoutPanelMasterVolumeControl->Size = System::Drawing::Size(379, 312);
			this->flowLayoutPanelMasterVolumeControl->TabIndex = 0;
			// 
			// groupBoxMasterVolumeAll
			// 
			this->groupBoxMasterVolumeAll->Controls->Add(this->trackBarMasterVolumeAll);
			this->groupBoxMasterVolumeAll->Location = System::Drawing::Point(3, 3);
			this->groupBoxMasterVolumeAll->Name = L"groupBoxMasterVolumeAll";
			this->groupBoxMasterVolumeAll->Size = System::Drawing::Size(56, 122);
			this->groupBoxMasterVolumeAll->TabIndex = 0;
			this->groupBoxMasterVolumeAll->TabStop = false;
			this->groupBoxMasterVolumeAll->Text = L"Master";
			// 
			// trackBarMasterVolumeAll
			// 
			this->trackBarMasterVolumeAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBarMasterVolumeAll->Location = System::Drawing::Point(6, 19);
			this->trackBarMasterVolumeAll->Name = L"trackBarMasterVolumeAll";
			this->trackBarMasterVolumeAll->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarMasterVolumeAll->Size = System::Drawing::Size(41, 97);
			this->trackBarMasterVolumeAll->TabIndex = 0;
			this->trackBarMasterVolumeAll->TickStyle = System::Windows::Forms::TickStyle::Both;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Location = System::Drawing::Point(65, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(56, 122);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Master";
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->Location = System::Drawing::Point(6, 19);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(45, 97);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
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
			this->groupBoxMasterVolumeControl->ResumeLayout(false);
			this->flowLayoutPanelMasterVolumeControl->ResumeLayout(false);
			this->groupBoxMasterVolumeAll->ResumeLayout(false);
			this->groupBoxMasterVolumeAll->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMasterVolumeAll))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	};
}
