#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace SoundBoard {

	/// <summary>
	/// Summary for editConfigForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class editConfigForm : public System::Windows::Forms::Form
	{
	public:
		ConfigController^ configController;
		List<TextBox^> ^ TBoxes;
		List<ComboBox^> ^ CBoxes;
		TextBox^ NewTextBox;

		editConfigForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			TBoxes = gcnew List<TextBox^>();
			CBoxes = gcnew List<ComboBox^>();
			
			for(int i = 0; i < 108; i++)
			{
				TBoxes->Add(gcnew TextBox());
			}

			for(int i = 0; i < 36; i++)
			{
				CBoxes->Add(gcnew ComboBox());
			}
			
			for(int i = 0; i < 36; i++)
			{
				// There is a 0th column
				int Column	=	(i % 3);
				// There is no 0th row
				int Row	=	(i + 3) / 3;
			
				TBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				TBoxes[i]->Location = System::Drawing::Point(3 + (117 * Column), (3 + 40 * Row));
				TBoxes[i]->Name = "TextBox1" + Row.ToString() + Column.ToString();
				TBoxes[i]->Size = System::Drawing::Size(111, 20);
				//TBoxes[i]->TabIndex = 22;
				TBoxes[i]->Visible = true;
				this->tableLayoutPanel1->Controls->Add(this->TBoxes[i], Column, Row);
			}

			for(int i = 36; i < 72; i++)
			{
			
				// There is a 0th column
				int Column	=	((i - 36) % 3);
				// There is no 0th row
				int Row	=	((i - 36) + 3) / 3;
			
				TBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				TBoxes[i]->Location = System::Drawing::Point(3 + (117 * Column), (3 + 40 * Row));
				TBoxes[i]->Name = "TextBox2" + Row.ToString() + Column.ToString();
				TBoxes[i]->Size = System::Drawing::Size(111, 20);
				//TBoxes[i]->TabIndex = 22;
				TBoxes[i]->Visible = true;
				this->tableLayoutPanel2->Controls->Add(this->TBoxes[i], Column, Row);
			}

			for(int i = 72; i < 108; i++)
			{
			
				// There is a 0th column
				int Column	=	((i - 72) % 3);
				// There is no 0th row
				int Row	=	((i - 72) + 3) / 3;
			
				TBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				TBoxes[i]->Location = System::Drawing::Point(3 + (117 * Column), 3 + (40 * Row));
				TBoxes[i]->Name = "TextBox3" + Row.ToString() + Column.ToString();
				TBoxes[i]->Size = System::Drawing::Size(111, 20);
				//TBoxes[i]->TabIndex = 22;
				TBoxes[i]->Visible = true;
				this->tableLayoutPanel3->Controls->Add(this->TBoxes[i], Column, Row);
			}

			for(int i = 0; i < 12; i++)
			{
				// The column is always 3
				int Column	=	3;
				// There is no 0th row
				int Row		=	i + 1;

				CBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				CBoxes[i]->FormattingEnabled = true;
				CBoxes[i]->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
				CBoxes[i]->Location = System::Drawing::Point(354, 3 + (40 * Row));
				CBoxes[i]->Name = "comboBox1" + Row.ToString() + Column.ToString();
				CBoxes[i]->Size = System::Drawing::Size(111, 21);
				//CBoxes[i]->comboBox2->TabIndex = 53;
				CBoxes[i]->Visible = true;
				this->tableLayoutPanel1->Controls->Add(this->CBoxes[i], Column, Row);
			}

			for(int i = 12; i < 24; i++)
			{
				// The column is always 3
				int Column	=	3;
				// There is no 0th row
				int Row		=	(i - 12) + 1;

				CBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				CBoxes[i]->FormattingEnabled = true;
				CBoxes[i]->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
				CBoxes[i]->Location = System::Drawing::Point(354, 3 + (40 * Row));
				CBoxes[i]->Name = "comboBox2" + Row.ToString() + Column.ToString();
				CBoxes[i]->Size = System::Drawing::Size(111, 21);
				//CBoxes[i]->comboBox2->TabIndex = 53;
				CBoxes[i]->Visible = true;
				this->tableLayoutPanel2->Controls->Add(this->CBoxes[i], Column, Row);
			}

			for(int i = 24; i < 36; i++)
			{
				// The column is always 3
				int Column	=	3;
				// There is no 0th row
				int Row		=	(i - 24) + 1;

				CBoxes[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				CBoxes[i]->FormattingEnabled = true;
				CBoxes[i]->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
				CBoxes[i]->Location = System::Drawing::Point(354, 3 + (40 * Row));
				CBoxes[i]->Name = "comboBox3" + Row.ToString() + Column.ToString();
				CBoxes[i]->Size = System::Drawing::Size(111, 21);
				//CBoxes[i]->comboBox2->TabIndex = 53;
				CBoxes[i]->Visible = true;
				this->tableLayoutPanel3->Controls->Add(this->CBoxes[i], Column, Row);
			}

		}

		editConfigForm(ConfigController^ _configController)
		{
			InitializeComponent();
			configController = _configController;
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editConfigForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControleditConfigForm;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
















































	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;




































	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Label^  label1;


























































































































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
			this->tabControleditConfigForm = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->tabControleditConfigForm->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControleditConfigForm
			// 
			this->tabControleditConfigForm->Controls->Add(this->tabPage1);
			this->tabControleditConfigForm->Controls->Add(this->tabPage2);
			this->tabControleditConfigForm->Controls->Add(this->tabPage3);
			this->tabControleditConfigForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControleditConfigForm->Location = System::Drawing::Point(0, 0);
			this->tabControleditConfigForm->Name = L"tabControleditConfigForm";
			this->tabControleditConfigForm->SelectedIndex = 0;
			this->tabControleditConfigForm->Size = System::Drawing::Size(603, 552);
			this->tabControleditConfigForm->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(595, 526);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->button2, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->button3, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->button4, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->button5, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->button6, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->button7, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->button8, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->button9, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->button10, 4, 10);
			this->tableLayoutPanel1->Controls->Add(this->button11, 4, 11);
			this->tableLayoutPanel1->Controls->Add(this->button12, 4, 12);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 13;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(589, 520);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Button Label";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 40);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Button Path";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(237, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 40);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Button Color";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(354, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 40);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Button Type";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(471, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(471, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(471, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 34);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(471, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 34);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Remove";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(471, 203);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 34);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Remove";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(471, 243);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 34);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Remove";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->Location = System::Drawing::Point(471, 283);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 34);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Remove";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->Location = System::Drawing::Point(471, 323);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 34);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Remove";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button9->Location = System::Drawing::Point(471, 363);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(115, 34);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Remove";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->Location = System::Drawing::Point(471, 403);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(115, 34);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Remove";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button11->Location = System::Drawing::Point(471, 443);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(115, 34);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Remove";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button12->Location = System::Drawing::Point(471, 483);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(115, 34);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Remove";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(595, 526);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel2->Controls->Add(this->button13, 4, 1);
			this->tableLayoutPanel2->Controls->Add(this->button14, 4, 2);
			this->tableLayoutPanel2->Controls->Add(this->button15, 4, 3);
			this->tableLayoutPanel2->Controls->Add(this->button16, 4, 4);
			this->tableLayoutPanel2->Controls->Add(this->button17, 4, 5);
			this->tableLayoutPanel2->Controls->Add(this->button18, 4, 6);
			this->tableLayoutPanel2->Controls->Add(this->button19, 4, 7);
			this->tableLayoutPanel2->Controls->Add(this->button20, 4, 8);
			this->tableLayoutPanel2->Controls->Add(this->button21, 4, 9);
			this->tableLayoutPanel2->Controls->Add(this->button22, 4, 10);
			this->tableLayoutPanel2->Controls->Add(this->button23, 4, 11);
			this->tableLayoutPanel2->Controls->Add(this->button24, 4, 12);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label7, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 3, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 13;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(589, 520);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button13->Location = System::Drawing::Point(471, 43);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(115, 34);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Remove";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button14->Location = System::Drawing::Point(471, 83);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(115, 34);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Remove";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button15->Location = System::Drawing::Point(471, 123);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(115, 34);
			this->button15->TabIndex = 2;
			this->button15->Text = L"Remove";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->Location = System::Drawing::Point(471, 163);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(115, 34);
			this->button16->TabIndex = 3;
			this->button16->Text = L"Remove";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button17->Location = System::Drawing::Point(471, 203);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(115, 34);
			this->button17->TabIndex = 4;
			this->button17->Text = L"Remove";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button18->Location = System::Drawing::Point(471, 243);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(115, 34);
			this->button18->TabIndex = 5;
			this->button18->Text = L"Remove";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			// 
			// button19
			// 
			this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button19->Location = System::Drawing::Point(471, 283);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(115, 34);
			this->button19->TabIndex = 6;
			this->button19->Text = L"Remove";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button20->Location = System::Drawing::Point(471, 323);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(115, 34);
			this->button20->TabIndex = 7;
			this->button20->Text = L"Remove";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			// 
			// button21
			// 
			this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button21->Location = System::Drawing::Point(471, 363);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(115, 34);
			this->button21->TabIndex = 8;
			this->button21->Text = L"Remove";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Visible = false;
			// 
			// button22
			// 
			this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button22->Location = System::Drawing::Point(471, 403);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(115, 34);
			this->button22->TabIndex = 9;
			this->button22->Text = L"Remove";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Visible = false;
			// 
			// button23
			// 
			this->button23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button23->Location = System::Drawing::Point(471, 443);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(115, 34);
			this->button23->TabIndex = 10;
			this->button23->Text = L"Remove";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Visible = false;
			// 
			// button24
			// 
			this->button24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button24->Location = System::Drawing::Point(471, 483);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(115, 34);
			this->button24->TabIndex = 11;
			this->button24->Text = L"Remove";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Button Label";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Button Path";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(237, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Button Color";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(354, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Button Type";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tableLayoutPanel3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(595, 526);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 5;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				20)));
			this->tableLayoutPanel3->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label10, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->label11, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->label12, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->button25, 4, 1);
			this->tableLayoutPanel3->Controls->Add(this->button26, 4, 2);
			this->tableLayoutPanel3->Controls->Add(this->button27, 4, 3);
			this->tableLayoutPanel3->Controls->Add(this->button28, 4, 4);
			this->tableLayoutPanel3->Controls->Add(this->button29, 4, 5);
			this->tableLayoutPanel3->Controls->Add(this->button30, 4, 6);
			this->tableLayoutPanel3->Controls->Add(this->button31, 4, 7);
			this->tableLayoutPanel3->Controls->Add(this->button32, 4, 8);
			this->tableLayoutPanel3->Controls->Add(this->button33, 4, 9);
			this->tableLayoutPanel3->Controls->Add(this->button34, 4, 10);
			this->tableLayoutPanel3->Controls->Add(this->button35, 4, 11);
			this->tableLayoutPanel3->Controls->Add(this->button36, 4, 12);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 13;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(589, 520);
			this->tableLayoutPanel3->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Button Label";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(120, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Button Path";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(237, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Button Color";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(354, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Button Type";
			// 
			// button25
			// 
			this->button25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button25->Location = System::Drawing::Point(471, 43);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(115, 34);
			this->button25->TabIndex = 4;
			this->button25->Text = L"Remove";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Visible = false;
			// 
			// button26
			// 
			this->button26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button26->Location = System::Drawing::Point(471, 83);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(115, 34);
			this->button26->TabIndex = 5;
			this->button26->Text = L"Remove";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Visible = false;
			// 
			// button27
			// 
			this->button27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button27->Location = System::Drawing::Point(471, 123);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(115, 34);
			this->button27->TabIndex = 6;
			this->button27->Text = L"Remove";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Visible = false;
			// 
			// button28
			// 
			this->button28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button28->Location = System::Drawing::Point(471, 163);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(115, 34);
			this->button28->TabIndex = 7;
			this->button28->Text = L"Remove";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Visible = false;
			// 
			// button29
			// 
			this->button29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button29->Location = System::Drawing::Point(471, 203);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(115, 34);
			this->button29->TabIndex = 8;
			this->button29->Text = L"Remove";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Visible = false;
			// 
			// button30
			// 
			this->button30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button30->Location = System::Drawing::Point(471, 243);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(115, 34);
			this->button30->TabIndex = 9;
			this->button30->Text = L"Remove";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Visible = false;
			// 
			// button31
			// 
			this->button31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button31->Location = System::Drawing::Point(471, 283);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(115, 34);
			this->button31->TabIndex = 10;
			this->button31->Text = L"Remove";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Visible = false;
			// 
			// button32
			// 
			this->button32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button32->Location = System::Drawing::Point(471, 323);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(115, 34);
			this->button32->TabIndex = 11;
			this->button32->Text = L"Remove";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Visible = false;
			// 
			// button33
			// 
			this->button33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button33->Location = System::Drawing::Point(471, 363);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(115, 34);
			this->button33->TabIndex = 12;
			this->button33->Text = L"Remove";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Visible = false;
			// 
			// button34
			// 
			this->button34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button34->Location = System::Drawing::Point(471, 403);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(115, 34);
			this->button34->TabIndex = 13;
			this->button34->Text = L"Remove";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Visible = false;
			// 
			// button35
			// 
			this->button35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button35->Location = System::Drawing::Point(471, 443);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(115, 34);
			this->button35->TabIndex = 14;
			this->button35->Text = L"Remove";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Visible = false;
			// 
			// button36
			// 
			this->button36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button36->Location = System::Drawing::Point(471, 483);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(115, 34);
			this->button36->TabIndex = 15;
			this->button36->Text = L"Remove";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Visible = false;
			// 
			// editConfigForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 552);
			this->Controls->Add(this->tabControleditConfigForm);
			this->Name = L"editConfigForm";
			this->Text = L"editConfigForm";
			this->Load += gcnew System::EventHandler(this, &editConfigForm::editConfigForm_Load);
			this->tabControleditConfigForm->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void editConfigForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
