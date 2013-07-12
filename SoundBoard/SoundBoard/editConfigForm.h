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
	private: System::Windows::Forms::Button^  button1;
	public: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

			 List<Button^> ^ RButtons;
			 List<DataTable^> ^ Dtbl;
	public:
		editConfigForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

		editConfigForm(ConfigController^ _configController)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			configController = _configController;

			TBoxes = gcnew List<TextBox^>();
			CBoxes = gcnew List<ComboBox^>();
			RButtons = gcnew List<Button^>();
			Dtbl = gcnew List<DataTable^>();
			
			for each(SoundButtonGroup^ sbg in configController->list_soundButtonGroups)
			{
				Dtbl->Add(configController->getButtonGroupConfig(sbg->name));
			}

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
				Button^ btn = gcnew Button();
				btn->Click += gcnew System::EventHandler(this, &editConfigForm::removeButton_Click);
				RButtons->Add(btn);
			}

			int RowCount = 0;
			int count = configController->list_soundButtonGroups->Count;
			for each(DataTable^ dt in Dtbl)
			{
				int mi = dt->Rows->Count;
				int Zeile = 0 + RowCount;
					for each (DataRow^ row in dt->Rows)
					{
						String^ bla = Convert::ToString(row["Button Label"]);
						TBoxes[3 * Zeile]->Text = Convert::ToString(row["Button Label"]);
						TBoxes[3 * Zeile]->Visible = true;
						TBoxes[(3 * Zeile) + 1]->Text = Convert::ToString(row["Button Path"]);
						TBoxes[(3 * Zeile) + 1]->Visible = true;
						TBoxes[(3 * Zeile) + 2]->Text = Convert::ToString(row["Button Color"]);
						TBoxes[(3 * Zeile) + 2]->Visible = true;
						CBoxes[Zeile]->Text = Convert::ToString(row["Button Type"]);
						RButtons[Zeile]->Visible = true;
						//row["Button Remove"]
						Zeile++;
					}
				RowCount += 12;
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

			for(int i = 0; i < 12; i++)
			{
				// The column is always 4
				int Column	=	4;
				// There is no 0th row
				int Row		=	i + 1;

				RButtons[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				RButtons[i]->Location = System::Drawing::Point(471, 3 + (40 * Row));
				RButtons[i]->Name = L"button1" + Row.ToString() + Column.ToString();
				RButtons[i]->Size = System::Drawing::Size(115, 34);
				//RButtons[i]->TabIndex = 7;
				RButtons[i]->Text = L"Remove";
				RButtons[i]->UseVisualStyleBackColor = true;
				RButtons[i]->Visible = true;
				this->tableLayoutPanel1->Controls->Add(this->RButtons[i], Column, Row);
			}

			for(int i = 12; i < 24; i++)
			{
				// The column is always 4
				int Column	=	4;
				// There is no 0th row
				int Row		=	(i - 12) + 1;

				RButtons[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				RButtons[i]->Location = System::Drawing::Point(471, 3 + (40 * Row));
				RButtons[i]->Name = L"button2" + Row.ToString() + Column.ToString();
				RButtons[i]->Size = System::Drawing::Size(115, 34);
				//RButtons[i]->TabIndex = 7;
				RButtons[i]->Text = L"Remove";
				RButtons[i]->UseVisualStyleBackColor = true;
				RButtons[i]->Visible = true;
				this->tableLayoutPanel2->Controls->Add(this->RButtons[i], Column, Row);
			}

			for(int i = 24; i < 36; i++)
			{
				// The column is always 4
				int Column	=	4;
				// There is no 0th row
				int Row		=	(i - 24) + 1;

				RButtons[i]->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
				RButtons[i]->Location = System::Drawing::Point(471, 3 + (40 * Row));
				RButtons[i]->Name = L"button3" + Row.ToString() + Column.ToString();
				RButtons[i]->Size = System::Drawing::Size(115, 34);
				//RButtons[i]->TabIndex = 7;
				RButtons[i]->Text = L"Remove";
				RButtons[i]->UseVisualStyleBackColor = true;
				RButtons[i]->Visible = true;
				this->tableLayoutPanel3->Controls->Add(this->RButtons[i], Column, Row);
			}
		
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








































































	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;




































	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;












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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->tabControleditConfigForm->Size = System::Drawing::Size(603, 600);
			this->tabControleditConfigForm->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(595, 574);
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
			this->tableLayoutPanel1->Controls->Add(this->button1, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->button4, 2, 13);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 14;
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
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(589, 568);
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
			this->label3->Text = L"Button Color\r\nOnly BLUE or RED";
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
			this->button1->Location = System::Drawing::Point(471, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add Sound";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editConfigForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(237, 523);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 42);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Save Changes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &editConfigForm::button4_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(595, 574);
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
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->label7, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label8, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->button2, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->button5, 2, 13);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 14;
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
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(589, 568);
			this->tableLayoutPanel2->TabIndex = 0;
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
			this->label7->Size = System::Drawing::Size(97, 26);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Button Color\r\nOnly BLUE or RED";
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
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(471, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 34);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Add Sound";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editConfigForm::button2_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->Location = System::Drawing::Point(237, 523);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 42);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Save Changes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &editConfigForm::button5_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tableLayoutPanel3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(595, 574);
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
			this->tableLayoutPanel3->Controls->Add(this->button3, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->button6, 2, 13);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 14;
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
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(589, 568);
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
			this->label11->Size = System::Drawing::Size(97, 26);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Button Color\r\nOnly BLUE or RED";
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
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(471, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 34);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Add Sound";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &editConfigForm::button3_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->Location = System::Drawing::Point(237, 523);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 42);
			this->button6->TabIndex = 5;
			this->button6->Text = L"SaveChanges";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &editConfigForm::button6_Click);
			// 
			// editConfigForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 600);
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
			 
			 void removeButton_Click(System::Object ^ sender, System::EventArgs^ e)
			 {
				 Button^ b = dynamic_cast<Button^>(sender);
				 int Row;
				 for(Row = 0; Row < 36; Row++)
				 {
					 if(b->Name == RButtons[Row]->Name)break;
				 }
				 if(b->Text == "Remove")
				 {
					 TBoxes[3 * Row]->Visible = false;
					 TBoxes[(3 * Row) + 1]->Visible = false;
					 TBoxes[(3 * Row) + 2]->Visible = false;
					 CBoxes[Row]->Visible = false;
					 b->Text = "Add";
					 Dtbl[Row / 12]->Rows[Row % 12]["Button Remove"] = "false";
				 }else
				 {
					 TBoxes[3 * Row]->Visible = true;
					 TBoxes[(3 * Row) + 1]->Visible = true;
					 TBoxes[(3 * Row) + 2]->Visible = true;
					 CBoxes[Row]->Visible = true;
					 b->Text = "Remove";
					 Dtbl[Row / 12]->Rows[Row % 12]["Button Remove"] = "true";
				 }

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 int Row;
				 for(Row = 0; Row < 11; Row++)
				 {
					 if(CBoxes[Row]->Visible == false)break;
				 }
				 TBoxes[3 * Row]->Visible = true;
				 TBoxes[(3 * Row) + 1]->Visible = true;
				 TBoxes[(3 * Row) + 2]->Visible = true;
				 CBoxes[Row]->Visible = true;
				 RButtons[Row]->Visible = true;
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int Row;
				 for(Row = 12; Row < 23; Row++)
				 {
					 if(CBoxes[Row]->Visible == false)break;
				 }
				 TBoxes[3 * Row]->Visible = true;
				 TBoxes[(3 * Row) + 1]->Visible = true;
				 TBoxes[(3 * Row) + 2]->Visible = true;
				 CBoxes[Row]->Visible = true;
				 RButtons[Row]->Visible = true;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int Row;
				 for(Row = 24; Row < 35; Row++)
				 {
					 if(CBoxes[Row]->Visible == false)break;
				 }
				 TBoxes[3 * Row]->Visible = true;
				 TBoxes[(3 * Row) + 1]->Visible = true;
				 TBoxes[(3 * Row) + 2]->Visible = true;
				 CBoxes[Row]->Visible = true;
				 RButtons[Row]->Visible = true;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int i = 0; i < 11; i++)
			 {
				 Dtbl[0]->Rows[i]["Button Label"] = TBoxes[i * 3]->Text;
				 Dtbl[0]->Rows[i]["Button Path"] = TBoxes[(i * 3) + 1]->Text;
				 Dtbl[0]->Rows[i]["Button Color"] = TBoxes[(i * 3) + 2]->Text;
				 Dtbl[0]->Rows[i]["Button Type"] = CBoxes[i]->Text;
				 configController->setButtonGroupConfig(configController->list_soundButtonGroups[0]->name, Dtbl[0]);
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int i = 12; i < 23; i++)
			 {
				 Dtbl[1]->Rows[i - 12]["Button Label"] = TBoxes[i * 3]->Text;
				 Dtbl[1]->Rows[i - 12]["Button Path"] = TBoxes[(i * 3) + 1]->Text;
				 Dtbl[1]->Rows[i - 12]["Button Color"] = TBoxes[(i * 3) + 2]->Text;
				 Dtbl[1]->Rows[i - 12]["Button Type"] = CBoxes[i]->Text;
				 configController->setButtonGroupConfig(configController->list_soundButtonGroups[1]->name, Dtbl[1]);
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int i = 24; i < 35; i++)
			 {		
				 Dtbl[2]->Rows[i - 24]["Button Label"] = TBoxes[i * 3]->Text;
				 Dtbl[2]->Rows[i - 24]["Button Path"] = TBoxes[(i * 3) + 1]->Text;
				 Dtbl[2]->Rows[i - 24]["Button Color"] = TBoxes[(i * 3) + 1]->Text;
				 Dtbl[2]->Rows[i - 24]["Button Type"] = CBoxes[i]->Text;
				 configController->setButtonGroupConfig(configController->list_soundButtonGroups[2]->name, Dtbl[2]);
			 }
		 }
};
}
