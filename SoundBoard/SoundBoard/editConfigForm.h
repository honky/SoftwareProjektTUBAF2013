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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox36;












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
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox78;
	private: System::Windows::Forms::TextBox^  textBox79;
	private: System::Windows::Forms::TextBox^  textBox80;
	private: System::Windows::Forms::TextBox^  textBox81;
	private: System::Windows::Forms::TextBox^  textBox82;
	private: System::Windows::Forms::TextBox^  textBox83;
	private: System::Windows::Forms::TextBox^  textBox84;
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
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::ComboBox^  comboBox13;
private: System::Windows::Forms::ComboBox^  comboBox14;
private: System::Windows::Forms::ComboBox^  comboBox15;
private: System::Windows::Forms::ComboBox^  comboBox16;
private: System::Windows::Forms::ComboBox^  comboBox17;
private: System::Windows::Forms::ComboBox^  comboBox18;
private: System::Windows::Forms::ComboBox^  comboBox19;
private: System::Windows::Forms::ComboBox^  comboBox20;
private: System::Windows::Forms::ComboBox^  comboBox21;
private: System::Windows::Forms::ComboBox^  comboBox22;
private: System::Windows::Forms::ComboBox^  comboBox23;
private: System::Windows::Forms::ComboBox^  comboBox24;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::TextBox^  textBox48;
private: System::Windows::Forms::TextBox^  textBox85;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::TextBox^  textBox90;
private: System::Windows::Forms::TextBox^  textBox91;
private: System::Windows::Forms::TextBox^  textBox92;
private: System::Windows::Forms::TextBox^  textBox93;
private: System::Windows::Forms::TextBox^  textBox94;
private: System::Windows::Forms::TextBox^  textBox95;
private: System::Windows::Forms::TextBox^  textBox96;
private: System::Windows::Forms::TextBox^  textBox97;
private: System::Windows::Forms::TextBox^  textBox98;
private: System::Windows::Forms::TextBox^  textBox99;
private: System::Windows::Forms::TextBox^  textBox100;
private: System::Windows::Forms::TextBox^  textBox101;
private: System::Windows::Forms::TextBox^  textBox102;
private: System::Windows::Forms::TextBox^  textBox103;
private: System::Windows::Forms::TextBox^  textBox104;
private: System::Windows::Forms::TextBox^  textBox105;
private: System::Windows::Forms::TextBox^  textBox106;
private: System::Windows::Forms::TextBox^  textBox107;
private: System::Windows::Forms::TextBox^  textBox108;
private: System::Windows::Forms::ComboBox^  comboBox25;
private: System::Windows::Forms::ComboBox^  comboBox26;
private: System::Windows::Forms::ComboBox^  comboBox27;
private: System::Windows::Forms::ComboBox^  comboBox28;
private: System::Windows::Forms::ComboBox^  comboBox29;
private: System::Windows::Forms::ComboBox^  comboBox30;
private: System::Windows::Forms::ComboBox^  comboBox31;
private: System::Windows::Forms::ComboBox^  comboBox32;
private: System::Windows::Forms::ComboBox^  comboBox33;
private: System::Windows::Forms::ComboBox^  comboBox34;
private: System::Windows::Forms::ComboBox^  comboBox35;
private: System::Windows::Forms::ComboBox^  comboBox36;


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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox29 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox30 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox31 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox32 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox33 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox34 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox35 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox36 = (gcnew System::Windows::Forms::ComboBox());
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
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox8, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox11, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox12, 0, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox13, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox14, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox15, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox16, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox17, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox18, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox19, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox20, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox21, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox22, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox23, 1, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox24, 1, 12);
			this->tableLayoutPanel1->Controls->Add(this->textBox25, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox26, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox27, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox28, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox29, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox30, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->textBox31, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBox32, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->textBox33, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->textBox34, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->textBox35, 2, 11);
			this->tableLayoutPanel1->Controls->Add(this->textBox36, 2, 12);
			this->tableLayoutPanel1->Controls->Add(this->comboBox1, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->comboBox2, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->comboBox3, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->comboBox4, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->comboBox5, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->comboBox6, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->comboBox7, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->comboBox8, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->comboBox9, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->comboBox10, 3, 10);
			this->tableLayoutPanel1->Controls->Add(this->comboBox11, 3, 11);
			this->tableLayoutPanel1->Controls->Add(this->comboBox12, 3, 12);
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
			this->tableLayoutPanel2->Controls->Add(this->textBox49, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox50, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox51, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox52, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox53, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox54, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox55, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->textBox56, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox57, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox58, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->textBox59, 0, 11);
			this->tableLayoutPanel2->Controls->Add(this->textBox60, 0, 12);
			this->tableLayoutPanel2->Controls->Add(this->textBox61, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox62, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox63, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox64, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox65, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox66, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox67, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->textBox68, 1, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox69, 1, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox70, 1, 10);
			this->tableLayoutPanel2->Controls->Add(this->textBox71, 1, 11);
			this->tableLayoutPanel2->Controls->Add(this->textBox72, 1, 12);
			this->tableLayoutPanel2->Controls->Add(this->textBox73, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox74, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox75, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox76, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox77, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox78, 2, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox79, 2, 7);
			this->tableLayoutPanel2->Controls->Add(this->textBox80, 2, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox81, 2, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox82, 2, 10);
			this->tableLayoutPanel2->Controls->Add(this->textBox83, 2, 11);
			this->tableLayoutPanel2->Controls->Add(this->textBox84, 2, 12);
			this->tableLayoutPanel2->Controls->Add(this->comboBox13, 3, 1);
			this->tableLayoutPanel2->Controls->Add(this->comboBox14, 3, 2);
			this->tableLayoutPanel2->Controls->Add(this->comboBox15, 3, 3);
			this->tableLayoutPanel2->Controls->Add(this->comboBox16, 3, 4);
			this->tableLayoutPanel2->Controls->Add(this->comboBox17, 3, 5);
			this->tableLayoutPanel2->Controls->Add(this->comboBox18, 3, 6);
			this->tableLayoutPanel2->Controls->Add(this->comboBox19, 3, 7);
			this->tableLayoutPanel2->Controls->Add(this->comboBox20, 3, 8);
			this->tableLayoutPanel2->Controls->Add(this->comboBox21, 3, 9);
			this->tableLayoutPanel2->Controls->Add(this->comboBox22, 3, 10);
			this->tableLayoutPanel2->Controls->Add(this->comboBox23, 3, 11);
			this->tableLayoutPanel2->Controls->Add(this->comboBox24, 3, 12);
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
			this->tableLayoutPanel3->Controls->Add(this->textBox37, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox38, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox39, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox40, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox41, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox42, 0, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox43, 0, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox44, 0, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox45, 0, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox46, 0, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox47, 0, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox48, 0, 12);
			this->tableLayoutPanel3->Controls->Add(this->textBox85, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox86, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox87, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox88, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox89, 1, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox90, 1, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox91, 1, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox92, 1, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox93, 1, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox94, 1, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox95, 1, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox96, 1, 12);
			this->tableLayoutPanel3->Controls->Add(this->textBox97, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->textBox98, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->textBox99, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox100, 2, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox101, 2, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox102, 2, 6);
			this->tableLayoutPanel3->Controls->Add(this->textBox103, 2, 7);
			this->tableLayoutPanel3->Controls->Add(this->textBox104, 2, 8);
			this->tableLayoutPanel3->Controls->Add(this->textBox105, 2, 9);
			this->tableLayoutPanel3->Controls->Add(this->textBox106, 2, 10);
			this->tableLayoutPanel3->Controls->Add(this->textBox107, 2, 11);
			this->tableLayoutPanel3->Controls->Add(this->textBox108, 2, 12);
			this->tableLayoutPanel3->Controls->Add(this->comboBox25, 3, 1);
			this->tableLayoutPanel3->Controls->Add(this->comboBox26, 3, 2);
			this->tableLayoutPanel3->Controls->Add(this->comboBox27, 3, 3);
			this->tableLayoutPanel3->Controls->Add(this->comboBox28, 3, 4);
			this->tableLayoutPanel3->Controls->Add(this->comboBox29, 3, 5);
			this->tableLayoutPanel3->Controls->Add(this->comboBox30, 3, 6);
			this->tableLayoutPanel3->Controls->Add(this->comboBox31, 3, 7);
			this->tableLayoutPanel3->Controls->Add(this->comboBox32, 3, 8);
			this->tableLayoutPanel3->Controls->Add(this->comboBox33, 3, 9);
			this->tableLayoutPanel3->Controls->Add(this->comboBox34, 3, 10);
			this->tableLayoutPanel3->Controls->Add(this->comboBox35, 3, 11);
			this->tableLayoutPanel3->Controls->Add(this->comboBox36, 3, 12);
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
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(3, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 20);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(3, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(3, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(111, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(3, 163);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(111, 20);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(3, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(111, 20);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(3, 243);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(111, 20);
			this->textBox6->TabIndex = 21;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(3, 283);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(111, 20);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox8->Location = System::Drawing::Point(3, 323);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(111, 20);
			this->textBox8->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox9->Location = System::Drawing::Point(3, 363);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(111, 20);
			this->textBox9->TabIndex = 24;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox10->Location = System::Drawing::Point(3, 403);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(111, 20);
			this->textBox10->TabIndex = 25;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->Location = System::Drawing::Point(3, 443);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(111, 20);
			this->textBox11->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox12->Location = System::Drawing::Point(3, 483);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(111, 20);
			this->textBox12->TabIndex = 27;
			// 
			// textBox13
			// 
			this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox13->Location = System::Drawing::Point(120, 43);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(111, 20);
			this->textBox13->TabIndex = 28;
			// 
			// textBox14
			// 
			this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox14->Location = System::Drawing::Point(120, 83);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(111, 20);
			this->textBox14->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox15->Location = System::Drawing::Point(120, 123);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(111, 20);
			this->textBox15->TabIndex = 30;
			// 
			// textBox16
			// 
			this->textBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox16->Location = System::Drawing::Point(120, 163);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(111, 20);
			this->textBox16->TabIndex = 31;
			// 
			// textBox17
			// 
			this->textBox17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox17->Location = System::Drawing::Point(120, 203);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(111, 20);
			this->textBox17->TabIndex = 32;
			// 
			// textBox18
			// 
			this->textBox18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox18->Location = System::Drawing::Point(120, 243);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(111, 20);
			this->textBox18->TabIndex = 33;
			// 
			// textBox19
			// 
			this->textBox19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox19->Location = System::Drawing::Point(120, 283);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(111, 20);
			this->textBox19->TabIndex = 34;
			// 
			// textBox20
			// 
			this->textBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox20->Location = System::Drawing::Point(120, 323);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(111, 20);
			this->textBox20->TabIndex = 35;
			// 
			// textBox21
			// 
			this->textBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox21->Location = System::Drawing::Point(120, 363);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(111, 20);
			this->textBox21->TabIndex = 36;
			// 
			// textBox22
			// 
			this->textBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox22->Location = System::Drawing::Point(120, 403);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(111, 20);
			this->textBox22->TabIndex = 37;
			// 
			// textBox23
			// 
			this->textBox23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox23->Location = System::Drawing::Point(120, 443);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(111, 20);
			this->textBox23->TabIndex = 38;
			// 
			// textBox24
			// 
			this->textBox24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox24->Location = System::Drawing::Point(120, 483);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(111, 20);
			this->textBox24->TabIndex = 39;
			// 
			// textBox25
			// 
			this->textBox25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox25->Location = System::Drawing::Point(237, 43);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(111, 20);
			this->textBox25->TabIndex = 40;
			// 
			// textBox26
			// 
			this->textBox26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox26->Location = System::Drawing::Point(237, 83);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(111, 20);
			this->textBox26->TabIndex = 41;
			// 
			// textBox27
			// 
			this->textBox27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox27->Location = System::Drawing::Point(237, 123);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(111, 20);
			this->textBox27->TabIndex = 42;
			// 
			// textBox28
			// 
			this->textBox28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox28->Location = System::Drawing::Point(237, 163);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(111, 20);
			this->textBox28->TabIndex = 43;
			// 
			// textBox29
			// 
			this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox29->Location = System::Drawing::Point(237, 203);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(111, 20);
			this->textBox29->TabIndex = 44;
			// 
			// textBox30
			// 
			this->textBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox30->Location = System::Drawing::Point(237, 243);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(111, 20);
			this->textBox30->TabIndex = 45;
			// 
			// textBox31
			// 
			this->textBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox31->Location = System::Drawing::Point(237, 283);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(111, 20);
			this->textBox31->TabIndex = 46;
			// 
			// textBox32
			// 
			this->textBox32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox32->Location = System::Drawing::Point(237, 323);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(111, 20);
			this->textBox32->TabIndex = 47;
			// 
			// textBox33
			// 
			this->textBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox33->Location = System::Drawing::Point(237, 363);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(111, 20);
			this->textBox33->TabIndex = 48;
			// 
			// textBox34
			// 
			this->textBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox34->Location = System::Drawing::Point(237, 403);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(111, 20);
			this->textBox34->TabIndex = 49;
			// 
			// textBox35
			// 
			this->textBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox35->Location = System::Drawing::Point(237, 443);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(111, 20);
			this->textBox35->TabIndex = 50;
			// 
			// textBox36
			// 
			this->textBox36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox36->Location = System::Drawing::Point(237, 483);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(111, 20);
			this->textBox36->TabIndex = 51;
			// 
			// textBox49
			// 
			this->textBox49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox49->Location = System::Drawing::Point(3, 43);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(111, 20);
			this->textBox49->TabIndex = 16;
			// 
			// textBox50
			// 
			this->textBox50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox50->Location = System::Drawing::Point(3, 83);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(111, 20);
			this->textBox50->TabIndex = 17;
			// 
			// textBox51
			// 
			this->textBox51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox51->Location = System::Drawing::Point(3, 123);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(111, 20);
			this->textBox51->TabIndex = 18;
			// 
			// textBox52
			// 
			this->textBox52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox52->Location = System::Drawing::Point(3, 163);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(111, 20);
			this->textBox52->TabIndex = 19;
			// 
			// textBox53
			// 
			this->textBox53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox53->Location = System::Drawing::Point(3, 203);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(111, 20);
			this->textBox53->TabIndex = 20;
			// 
			// textBox54
			// 
			this->textBox54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox54->Location = System::Drawing::Point(3, 243);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(111, 20);
			this->textBox54->TabIndex = 21;
			// 
			// textBox55
			// 
			this->textBox55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox55->Location = System::Drawing::Point(3, 283);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(111, 20);
			this->textBox55->TabIndex = 22;
			// 
			// textBox56
			// 
			this->textBox56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox56->Location = System::Drawing::Point(3, 323);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(111, 20);
			this->textBox56->TabIndex = 23;
			// 
			// textBox57
			// 
			this->textBox57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox57->Location = System::Drawing::Point(3, 363);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(111, 20);
			this->textBox57->TabIndex = 24;
			// 
			// textBox58
			// 
			this->textBox58->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox58->Location = System::Drawing::Point(3, 403);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(111, 20);
			this->textBox58->TabIndex = 25;
			// 
			// textBox59
			// 
			this->textBox59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox59->Location = System::Drawing::Point(3, 443);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(111, 20);
			this->textBox59->TabIndex = 26;
			// 
			// textBox60
			// 
			this->textBox60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox60->Location = System::Drawing::Point(3, 483);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(111, 20);
			this->textBox60->TabIndex = 27;
			// 
			// textBox61
			// 
			this->textBox61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox61->Location = System::Drawing::Point(120, 43);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(111, 20);
			this->textBox61->TabIndex = 28;
			// 
			// textBox62
			// 
			this->textBox62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox62->Location = System::Drawing::Point(120, 83);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(111, 20);
			this->textBox62->TabIndex = 29;
			// 
			// textBox63
			// 
			this->textBox63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox63->Location = System::Drawing::Point(120, 123);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(111, 20);
			this->textBox63->TabIndex = 30;
			// 
			// textBox64
			// 
			this->textBox64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox64->Location = System::Drawing::Point(120, 163);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(111, 20);
			this->textBox64->TabIndex = 31;
			// 
			// textBox65
			// 
			this->textBox65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox65->Location = System::Drawing::Point(120, 203);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(111, 20);
			this->textBox65->TabIndex = 32;
			// 
			// textBox66
			// 
			this->textBox66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox66->Location = System::Drawing::Point(120, 243);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(111, 20);
			this->textBox66->TabIndex = 33;
			// 
			// textBox67
			// 
			this->textBox67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox67->Location = System::Drawing::Point(120, 283);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(111, 20);
			this->textBox67->TabIndex = 34;
			// 
			// textBox68
			// 
			this->textBox68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox68->Location = System::Drawing::Point(120, 323);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(111, 20);
			this->textBox68->TabIndex = 35;
			// 
			// textBox69
			// 
			this->textBox69->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox69->Location = System::Drawing::Point(120, 363);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(111, 20);
			this->textBox69->TabIndex = 36;
			// 
			// textBox70
			// 
			this->textBox70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox70->Location = System::Drawing::Point(120, 403);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(111, 20);
			this->textBox70->TabIndex = 37;
			// 
			// textBox71
			// 
			this->textBox71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox71->Location = System::Drawing::Point(120, 443);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(111, 20);
			this->textBox71->TabIndex = 38;
			// 
			// textBox72
			// 
			this->textBox72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox72->Location = System::Drawing::Point(120, 483);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(111, 20);
			this->textBox72->TabIndex = 39;
			// 
			// textBox73
			// 
			this->textBox73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox73->Location = System::Drawing::Point(237, 43);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(111, 20);
			this->textBox73->TabIndex = 40;
			// 
			// textBox74
			// 
			this->textBox74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox74->Location = System::Drawing::Point(237, 83);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(111, 20);
			this->textBox74->TabIndex = 41;
			// 
			// textBox75
			// 
			this->textBox75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox75->Location = System::Drawing::Point(237, 123);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(111, 20);
			this->textBox75->TabIndex = 42;
			// 
			// textBox76
			// 
			this->textBox76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox76->Location = System::Drawing::Point(237, 163);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(111, 20);
			this->textBox76->TabIndex = 43;
			// 
			// textBox77
			// 
			this->textBox77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox77->Location = System::Drawing::Point(237, 203);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(111, 20);
			this->textBox77->TabIndex = 44;
			// 
			// textBox78
			// 
			this->textBox78->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox78->Location = System::Drawing::Point(237, 243);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(111, 20);
			this->textBox78->TabIndex = 45;
			// 
			// textBox79
			// 
			this->textBox79->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox79->Location = System::Drawing::Point(237, 283);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(111, 20);
			this->textBox79->TabIndex = 46;
			// 
			// textBox80
			// 
			this->textBox80->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox80->Location = System::Drawing::Point(237, 323);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(111, 20);
			this->textBox80->TabIndex = 47;
			// 
			// textBox81
			// 
			this->textBox81->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox81->Location = System::Drawing::Point(237, 363);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(111, 20);
			this->textBox81->TabIndex = 48;
			// 
			// textBox82
			// 
			this->textBox82->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox82->Location = System::Drawing::Point(237, 403);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(111, 20);
			this->textBox82->TabIndex = 49;
			// 
			// textBox83
			// 
			this->textBox83->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox83->Location = System::Drawing::Point(237, 443);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(111, 20);
			this->textBox83->TabIndex = 50;
			// 
			// textBox84
			// 
			this->textBox84->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox84->Location = System::Drawing::Point(237, 483);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(111, 20);
			this->textBox84->TabIndex = 51;
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
			// textBox37
			// 
			this->textBox37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox37->Location = System::Drawing::Point(3, 43);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(111, 20);
			this->textBox37->TabIndex = 16;
			// 
			// textBox38
			// 
			this->textBox38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox38->Location = System::Drawing::Point(3, 83);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(111, 20);
			this->textBox38->TabIndex = 17;
			// 
			// textBox39
			// 
			this->textBox39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox39->Location = System::Drawing::Point(3, 123);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(111, 20);
			this->textBox39->TabIndex = 18;
			// 
			// textBox40
			// 
			this->textBox40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox40->Location = System::Drawing::Point(3, 163);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(111, 20);
			this->textBox40->TabIndex = 19;
			// 
			// textBox41
			// 
			this->textBox41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox41->Location = System::Drawing::Point(3, 203);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(111, 20);
			this->textBox41->TabIndex = 20;
			// 
			// textBox42
			// 
			this->textBox42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox42->Location = System::Drawing::Point(3, 243);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(111, 20);
			this->textBox42->TabIndex = 21;
			// 
			// textBox43
			// 
			this->textBox43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox43->Location = System::Drawing::Point(3, 283);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(111, 20);
			this->textBox43->TabIndex = 22;
			// 
			// textBox44
			// 
			this->textBox44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox44->Location = System::Drawing::Point(3, 323);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(111, 20);
			this->textBox44->TabIndex = 23;
			// 
			// textBox45
			// 
			this->textBox45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox45->Location = System::Drawing::Point(3, 363);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(111, 20);
			this->textBox45->TabIndex = 24;
			// 
			// textBox46
			// 
			this->textBox46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox46->Location = System::Drawing::Point(3, 403);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(111, 20);
			this->textBox46->TabIndex = 25;
			// 
			// textBox47
			// 
			this->textBox47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox47->Location = System::Drawing::Point(3, 443);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(111, 20);
			this->textBox47->TabIndex = 26;
			// 
			// textBox48
			// 
			this->textBox48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox48->Location = System::Drawing::Point(3, 483);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(111, 20);
			this->textBox48->TabIndex = 27;
			// 
			// textBox85
			// 
			this->textBox85->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox85->Location = System::Drawing::Point(120, 43);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(111, 20);
			this->textBox85->TabIndex = 28;
			// 
			// textBox86
			// 
			this->textBox86->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox86->Location = System::Drawing::Point(120, 83);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(111, 20);
			this->textBox86->TabIndex = 29;
			// 
			// textBox87
			// 
			this->textBox87->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox87->Location = System::Drawing::Point(120, 123);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(111, 20);
			this->textBox87->TabIndex = 30;
			// 
			// textBox88
			// 
			this->textBox88->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox88->Location = System::Drawing::Point(120, 163);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(111, 20);
			this->textBox88->TabIndex = 31;
			// 
			// textBox89
			// 
			this->textBox89->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox89->Location = System::Drawing::Point(120, 203);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(111, 20);
			this->textBox89->TabIndex = 32;
			// 
			// textBox90
			// 
			this->textBox90->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox90->Location = System::Drawing::Point(120, 243);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(111, 20);
			this->textBox90->TabIndex = 33;
			// 
			// textBox91
			// 
			this->textBox91->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox91->Location = System::Drawing::Point(120, 283);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(111, 20);
			this->textBox91->TabIndex = 34;
			// 
			// textBox92
			// 
			this->textBox92->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox92->Location = System::Drawing::Point(120, 323);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(111, 20);
			this->textBox92->TabIndex = 35;
			// 
			// textBox93
			// 
			this->textBox93->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox93->Location = System::Drawing::Point(120, 363);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(111, 20);
			this->textBox93->TabIndex = 36;
			// 
			// textBox94
			// 
			this->textBox94->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox94->Location = System::Drawing::Point(120, 403);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(111, 20);
			this->textBox94->TabIndex = 37;
			// 
			// textBox95
			// 
			this->textBox95->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox95->Location = System::Drawing::Point(120, 443);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(111, 20);
			this->textBox95->TabIndex = 38;
			// 
			// textBox96
			// 
			this->textBox96->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox96->Location = System::Drawing::Point(120, 483);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(111, 20);
			this->textBox96->TabIndex = 39;
			// 
			// textBox97
			// 
			this->textBox97->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox97->Location = System::Drawing::Point(237, 43);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(111, 20);
			this->textBox97->TabIndex = 40;
			// 
			// textBox98
			// 
			this->textBox98->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox98->Location = System::Drawing::Point(237, 83);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(111, 20);
			this->textBox98->TabIndex = 41;
			// 
			// textBox99
			// 
			this->textBox99->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox99->Location = System::Drawing::Point(237, 123);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(111, 20);
			this->textBox99->TabIndex = 42;
			// 
			// textBox100
			// 
			this->textBox100->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox100->Location = System::Drawing::Point(237, 163);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(111, 20);
			this->textBox100->TabIndex = 43;
			// 
			// textBox101
			// 
			this->textBox101->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox101->Location = System::Drawing::Point(237, 203);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(111, 20);
			this->textBox101->TabIndex = 44;
			// 
			// textBox102
			// 
			this->textBox102->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox102->Location = System::Drawing::Point(237, 243);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(111, 20);
			this->textBox102->TabIndex = 45;
			// 
			// textBox103
			// 
			this->textBox103->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox103->Location = System::Drawing::Point(237, 283);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(111, 20);
			this->textBox103->TabIndex = 46;
			// 
			// textBox104
			// 
			this->textBox104->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox104->Location = System::Drawing::Point(237, 323);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(111, 20);
			this->textBox104->TabIndex = 47;
			// 
			// textBox105
			// 
			this->textBox105->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox105->Location = System::Drawing::Point(237, 363);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(111, 20);
			this->textBox105->TabIndex = 48;
			// 
			// textBox106
			// 
			this->textBox106->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox106->Location = System::Drawing::Point(237, 403);
			this->textBox106->Name = L"textBox106";
			this->textBox106->Size = System::Drawing::Size(111, 20);
			this->textBox106->TabIndex = 49;
			// 
			// textBox107
			// 
			this->textBox107->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox107->Location = System::Drawing::Point(237, 443);
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(111, 20);
			this->textBox107->TabIndex = 50;
			// 
			// textBox108
			// 
			this->textBox108->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox108->Location = System::Drawing::Point(237, 483);
			this->textBox108->Name = L"textBox108";
			this->textBox108->Size = System::Drawing::Size(111, 20);
			this->textBox108->TabIndex = 51;
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox1->Location = System::Drawing::Point(354, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(111, 21);
			this->comboBox1->TabIndex = 52;
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox2->Location = System::Drawing::Point(354, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(111, 21);
			this->comboBox2->TabIndex = 53;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox3->Location = System::Drawing::Point(354, 123);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(111, 21);
			this->comboBox3->TabIndex = 54;
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox4->Location = System::Drawing::Point(354, 163);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(111, 21);
			this->comboBox4->TabIndex = 55;
			// 
			// comboBox5
			// 
			this->comboBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox5->Location = System::Drawing::Point(354, 203);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(111, 21);
			this->comboBox5->TabIndex = 56;
			// 
			// comboBox6
			// 
			this->comboBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox6->Location = System::Drawing::Point(354, 243);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(111, 21);
			this->comboBox6->TabIndex = 57;
			// 
			// comboBox7
			// 
			this->comboBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox7->Location = System::Drawing::Point(354, 283);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(111, 21);
			this->comboBox7->TabIndex = 58;
			// 
			// comboBox8
			// 
			this->comboBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox8->Location = System::Drawing::Point(354, 323);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(111, 21);
			this->comboBox8->TabIndex = 59;
			// 
			// comboBox9
			// 
			this->comboBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox9->Location = System::Drawing::Point(354, 363);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(111, 21);
			this->comboBox9->TabIndex = 60;
			// 
			// comboBox10
			// 
			this->comboBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox10->Location = System::Drawing::Point(354, 403);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(111, 21);
			this->comboBox10->TabIndex = 61;
			// 
			// comboBox11
			// 
			this->comboBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox11->Location = System::Drawing::Point(354, 443);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(111, 21);
			this->comboBox11->TabIndex = 62;
			// 
			// comboBox12
			// 
			this->comboBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox12->Location = System::Drawing::Point(354, 483);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(111, 21);
			this->comboBox12->TabIndex = 63;
			// 
			// comboBox13
			// 
			this->comboBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox13->Location = System::Drawing::Point(354, 43);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(111, 21);
			this->comboBox13->TabIndex = 52;
			// 
			// comboBox14
			// 
			this->comboBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox14->Location = System::Drawing::Point(354, 83);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(111, 21);
			this->comboBox14->TabIndex = 53;
			// 
			// comboBox15
			// 
			this->comboBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox15->Location = System::Drawing::Point(354, 123);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(111, 21);
			this->comboBox15->TabIndex = 54;
			// 
			// comboBox16
			// 
			this->comboBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox16->Location = System::Drawing::Point(354, 163);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(111, 21);
			this->comboBox16->TabIndex = 55;
			// 
			// comboBox17
			// 
			this->comboBox17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox17->Location = System::Drawing::Point(354, 203);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(111, 21);
			this->comboBox17->TabIndex = 56;
			// 
			// comboBox18
			// 
			this->comboBox18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox18->Location = System::Drawing::Point(354, 243);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(111, 21);
			this->comboBox18->TabIndex = 57;
			// 
			// comboBox19
			// 
			this->comboBox19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox19->Location = System::Drawing::Point(354, 283);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(111, 21);
			this->comboBox19->TabIndex = 58;
			// 
			// comboBox20
			// 
			this->comboBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox20->Location = System::Drawing::Point(354, 323);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(111, 21);
			this->comboBox20->TabIndex = 59;
			// 
			// comboBox21
			// 
			this->comboBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox21->FormattingEnabled = true;
			this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox21->Location = System::Drawing::Point(354, 363);
			this->comboBox21->Name = L"comboBox21";
			this->comboBox21->Size = System::Drawing::Size(111, 21);
			this->comboBox21->TabIndex = 60;
			// 
			// comboBox22
			// 
			this->comboBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox22->Location = System::Drawing::Point(354, 403);
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(111, 21);
			this->comboBox22->TabIndex = 61;
			// 
			// comboBox23
			// 
			this->comboBox23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox23->FormattingEnabled = true;
			this->comboBox23->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox23->Location = System::Drawing::Point(354, 443);
			this->comboBox23->Name = L"comboBox23";
			this->comboBox23->Size = System::Drawing::Size(111, 21);
			this->comboBox23->TabIndex = 62;
			// 
			// comboBox24
			// 
			this->comboBox24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox24->Location = System::Drawing::Point(354, 483);
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(111, 21);
			this->comboBox24->TabIndex = 63;
			// 
			// comboBox25
			// 
			this->comboBox25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox25->FormattingEnabled = true;
			this->comboBox25->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox25->Location = System::Drawing::Point(354, 43);
			this->comboBox25->Name = L"comboBox25";
			this->comboBox25->Size = System::Drawing::Size(111, 21);
			this->comboBox25->TabIndex = 52;
			// 
			// comboBox26
			// 
			this->comboBox26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox26->Location = System::Drawing::Point(354, 83);
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(111, 21);
			this->comboBox26->TabIndex = 53;
			// 
			// comboBox27
			// 
			this->comboBox27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox27->FormattingEnabled = true;
			this->comboBox27->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox27->Location = System::Drawing::Point(354, 123);
			this->comboBox27->Name = L"comboBox27";
			this->comboBox27->Size = System::Drawing::Size(111, 21);
			this->comboBox27->TabIndex = 54;
			// 
			// comboBox28
			// 
			this->comboBox28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox28->Location = System::Drawing::Point(354, 163);
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(111, 21);
			this->comboBox28->TabIndex = 55;
			// 
			// comboBox29
			// 
			this->comboBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox29->FormattingEnabled = true;
			this->comboBox29->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox29->Location = System::Drawing::Point(354, 203);
			this->comboBox29->Name = L"comboBox29";
			this->comboBox29->Size = System::Drawing::Size(111, 21);
			this->comboBox29->TabIndex = 56;
			// 
			// comboBox30
			// 
			this->comboBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox30->FormattingEnabled = true;
			this->comboBox30->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox30->Location = System::Drawing::Point(354, 243);
			this->comboBox30->Name = L"comboBox30";
			this->comboBox30->Size = System::Drawing::Size(111, 21);
			this->comboBox30->TabIndex = 57;
			// 
			// comboBox31
			// 
			this->comboBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox31->FormattingEnabled = true;
			this->comboBox31->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox31->Location = System::Drawing::Point(354, 283);
			this->comboBox31->Name = L"comboBox31";
			this->comboBox31->Size = System::Drawing::Size(111, 21);
			this->comboBox31->TabIndex = 58;
			// 
			// comboBox32
			// 
			this->comboBox32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox32->FormattingEnabled = true;
			this->comboBox32->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox32->Location = System::Drawing::Point(354, 323);
			this->comboBox32->Name = L"comboBox32";
			this->comboBox32->Size = System::Drawing::Size(111, 21);
			this->comboBox32->TabIndex = 59;
			// 
			// comboBox33
			// 
			this->comboBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox33->FormattingEnabled = true;
			this->comboBox33->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox33->Location = System::Drawing::Point(354, 363);
			this->comboBox33->Name = L"comboBox33";
			this->comboBox33->Size = System::Drawing::Size(111, 21);
			this->comboBox33->TabIndex = 60;
			// 
			// comboBox34
			// 
			this->comboBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox34->FormattingEnabled = true;
			this->comboBox34->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox34->Location = System::Drawing::Point(354, 403);
			this->comboBox34->Name = L"comboBox34";
			this->comboBox34->Size = System::Drawing::Size(111, 21);
			this->comboBox34->TabIndex = 61;
			// 
			// comboBox35
			// 
			this->comboBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox35->FormattingEnabled = true;
			this->comboBox35->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox35->Location = System::Drawing::Point(354, 443);
			this->comboBox35->Name = L"comboBox35";
			this->comboBox35->Size = System::Drawing::Size(111, 21);
			this->comboBox35->TabIndex = 62;
			// 
			// comboBox36
			// 
			this->comboBox36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox36->FormattingEnabled = true;
			this->comboBox36->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Random", L"Loop", L"Single", L"Playlist"});
			this->comboBox36->Location = System::Drawing::Point(354, 483);
			this->comboBox36->Name = L"comboBox36";
			this->comboBox36->Size = System::Drawing::Size(111, 21);
			this->comboBox36->TabIndex = 63;
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
