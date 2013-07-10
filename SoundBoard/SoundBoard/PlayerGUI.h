#pragma once
namespace SoundBoard
{
	ref class PlayerGUI :
	public System::Windows::Forms::GroupBox
	{
	public:
		PlayerGUI(System::String^ title);

		System::Windows::Forms::TrackBar^ trackBarVolumeAll;
		System::Windows::Forms::TrackBar^ trackBarVolumeLeft;
		System::Windows::Forms::TrackBar^ trackBarVolumeRight;
		System::Windows::Forms::TrackBar^ trackBarBalance;
		System::Windows::Forms::TrackBar^ trackBarTreble;
		System::Windows::Forms::TrackBar^ trackBarBass;
		System::Windows::Forms::Button^ buttonPause;
		System::Windows::Forms::Button^ buttonStop;
		System::Windows::Forms::Label^ labelFileName;
		System::Windows::Forms::PictureBox^ pictureBox;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelMain;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelTop;
		System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanelTrackBars;
		System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelButtons;
		System::Windows::Forms::GroupBox^ groupBoxBalance;
		System::Windows::Forms::GroupBox^ groupBoxBass;
		System::Windows::Forms::GroupBox^ groupBoxTreble;
		System::Windows::Forms::GroupBox^ groupBoxVolumeAll;
		System::Windows::Forms::GroupBox^ groupBoxVolumeLeft;
		System::Windows::Forms::GroupBox^ groupBoxVolumeRight;

	private :
		System::Void buttonStop_Click(System::Object^  sender, System::EventArgs^  e);
				void initTableLayoutPanels(void);
				void initButtons(void);
				void initTrackBars(void);
				void initFlowLayoutPanels(void);
				void initDefaultFlowLayoutPanel(System::Windows::Forms::FlowLayoutPanel^);
				void initPictureBox(void);
				void initDefaultTrackBar(System::Windows::Forms::TrackBar^,System::Windows::Forms::GroupBox^);
	};

}