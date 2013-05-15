#include "stdafx.h"

#include "Windows.h"
#pragma comment(lib, "winmm.lib")
#include "vcclr.h"


namespace SoundBoard
{
	using namespace System;
	using namespace System::Data;
	using namespace System::Threading;
	using namespace System::Text;
	using namespace SoundBoard;
	using namespace Windows::Forms;
	using namespace System;
	using namespace System::Runtime::InteropServices;


	Player::Player(Sound^ givenSound)
	{
		//setting default values of this instance
		alias = getUniqueAlias();
		currentSound = givenSound;
		isPlaying = false;
		isPaused = false;
		isOpen = false;
		isLoop = false;
		isMutedAll = false; //should be a property
		isMutedRight = false; // this too
		isMutedLeft = false; // this too

		//we take the Programms overall Volume vor the current sound
		//this might be changed to to value of the last sound startet, 
		// but that might be a bit confusing
		// please recognize that we are using Properties for Volumes
		rightVolume = rightVolumeOverall; 
		leftVolume = leftVolumeOverall;
		totalVolume = totalVolumeOverall;
		trebleVolume = trebleVolumeOverall;
		bassVolume = bassVolumeOverall;

		//


		//now open sound and give him its alias
		openSound(givenSound);

		//probably done
	}
	
	int Player::mciSendStringHandle(String^ givenHandle)
	{
		// http://msdn.microsoft.com/de-de/library/ms235631(v=vs.80).aspx 
		// http://stackoverflow.com/questions/16216386/mcisendstring-with-visual-c-parameters/16322700#16322700
		// http://msdn.microsoft.com/de-de/library/585whdf9(v=vs.80).aspx
		// makes gc handle pinned and adressable by unmanaged system		
		pin_ptr<const wchar_t> wch = PtrToStringChars(givenHandle);
		int errorCode = mciSendString(wch, 0, 0, 0);
		checkError(errorCode);
		return errorCode;
	}

	String^ Player::mciSendStringHandleResponse(String^ givenHandle)
	{ 
		// just don't ask for mercy
		pin_ptr<const wchar_t> wch = PtrToStringChars(givenHandle);
		char* rch = new char[128];
		int errorCode = mciSendString(wch,(LPWSTR) rch,128,0);
		checkError(errorCode);
		return gcnew String(rch);
	}


	void Player::playSound(void)
	{
		//if empty dont do anything
		if(currentSound== nullptr)
		{
			return;
		}

		//if paused restart
		if(isPaused)
		{
			String^ cmd = "seek " + alias + " to start";	
			int errCode = mciSendStringHandle(cmd);
			if(errCode==0)
			{
				isPaused = false;
			}
		}
		
		//if it doesn't already play so try playing it
		if(!isPlaying)
		{
			String^ cmd = "play " + alias;	
			int errCode = mciSendStringHandle(cmd);
			if(errCode==0)
			{
				isPlaying = true;
				isPaused = false;
			}
		}
	}
	void Player::openSound(Sound^ givenSound)
	{
		//we are using mpegvideo for most compatibility available, it just plays everything even videos
		String^ cmd = "open \""+givenSound->Path +"\" type mpegvideo alias " + alias;
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isOpen = true;
		}
		checkError(errCode);
	}
	
void Player::closeSound()
	{
		//we are using mpegvideo for most compatibility available, it just plays everything even videos
		String^ cmd = "close "+alias;
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isOpen = false;
			isPlaying = false;
			isPaused = false;
			
		}
		checkError(errCode);
	}

	String^ Player::getUniqueAlias()
	{
		aliasCounter = aliasCounter++;
		String^ alias = "SoundBoardSound"+Convert::ToString(aliasCounter);
		return alias;
	}

	void Player::muteSound(void)
	{
		String^ cmd = "setaudio " + alias + " off";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedAll = true;
		}
	}

	void Player::muteSoundLeft(void)
	{
		String^ cmd = "setaudio " + alias + " left off";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedLeft = true;
		}
	}	
	void Player::unmuteSoundLeft(void)
	{
		String^ cmd = "setaudio " + alias + " left on";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedLeft = false;
		}
	}

	void Player::muteSoundRight(void)
	{
		String^ cmd = "setaudio " + alias + " right off";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedRight = true;
		}
	}
	
	void Player::unmuteSound(void)
	{
		String^ cmd = "setaudio " + alias + " on";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedAll = false;
		}
	}

	void Player::unmuteSoundRight(void)
	{
		String^ cmd = "setaudio " + alias + " right on";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isMutedRight = false;
		}
	}

	//muting and volume control might be expanded for toggling each other
	int Player::rightVolume::get() { return _rightVolume; }
	void Player::rightVolume::set(int value) { 
		if(isOpen && value >= 0 && value < 1000)
		{
			_rightVolume = value; 
			String^ cmd = "setaudio " + alias + " right volume to " + _rightVolume.ToString();	
			int errCode = mciSendStringHandle(cmd);
		}				
	}
	int Player::leftVolume::get() { return _leftVolume; }
	void Player::leftVolume::set(int value) { 
		if(isOpen && value >= 0 && value < 1000)
		{
			_leftVolume = value; 
			String^ cmd = "setaudio " + alias + " left volume to " + _leftVolume.ToString();	
			int errCode = mciSendStringHandle(cmd);
		}				
	}

	int Player::totalVolume::get() { return rightVolume; }
	void Player::totalVolume::set(int value) { 
		if(isOpen && value >= 0 && value < 1000)
		{
			_totalVolume = value; 
			String^ cmd = "setaudio " + alias + " volume to " + _totalVolume.ToString();	
			int errCode = mciSendStringHandle(cmd);
		}				
	}

	int Player::trebleVolume::get() { return rightVolume; }
	void Player::trebleVolume::set(int value) { 
		if(isOpen && value >= 0 && value < 1000)
		{
			_trebleVolume = value; 
			String^ cmd = "setaudio " + alias + " treble to " + _trebleVolume.ToString();	
			int errCode = mciSendStringHandle(cmd);
		}				
	}	

	int Player::bassVolume::get() { return rightVolume; }
	void Player::bassVolume::set(int value) { 
		if(isOpen && value >= 0 && value < 1000)
		{
			_bassVolume = value; 
			String^ cmd = "setaudio " + alias + " bass to " + _bassVolume.ToString();	
			int errCode = mciSendStringHandle(cmd);
		}				
	}
	
	int Player::balanceVolume::get() { return rightVolume; }
	void Player::balanceVolume::set(int value) { 
		if(isOpen && value >= -1000 && value < 1000)
		{
			_balanceVolume = value; 
			if(value>0)
			{				
				String^ cmd = "setaudio " + alias + " left volume to 1000"; //this could be better	thinking of prev Volume?
				int errCode = mciSendStringHandle(cmd);
				cmd = "setaudio " + alias + " right volume to " + _balanceVolume.ToString();	
				errCode = mciSendStringHandle(cmd);
			}
			else
			{
				String^ cmd = "setaudio " + alias + " right volume to 1000"; //this could be better thinking of prev Volume?
				int errCode = mciSendStringHandle(cmd);
				cmd = "setaudio " + alias + " left volume to " + _balanceVolume.ToString();	
				errCode = mciSendStringHandle(cmd);
			}
			
		}				
	}




	void Player::playSound(Sound^ givenSound)
	{		
		currentSound = givenSound;
		openSound(givenSound);
		playSound();
	}

	void Player::stopSound(void)
	{
		//reset position to start
		String^ cmd = "seek " + alias + " to start";	
		int errCode = mciSendStringHandle(cmd);

		//and now stop
		cmd = "stop " + alias;	
		errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = false;
			isPaused = false;
		}
	}

	void Player::restartSound(void)
	{
		stopSound();
		playSound();
	}


	void Player::pauseSound(void)
	{
		String^ cmd = "pause " + alias;	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = false;
			isPaused = true;
		}
	}

	void Player::resumeSound(void)
	{
		String^ cmd = "resume " + alias;	
		int errCode = mciSendStringHandle(cmd);
	}
	
	
	void Player::setPosition(int givenPosition)
	{
		stopSound();
		String^ cmd = "seek " + alias + " to " + givenPosition.ToString();	
		int errCode = mciSendStringHandle(cmd);
		resumeSound();
	}

	int Player::getCurrentPosition(void)
	{
		String^ cmd = "status " + alias + " position";	
		String^ response = mciSendStringHandleResponse(cmd);
		return Convert::ToInt32(response);
	}

	void Player::getLength(void)
	{
		String^ cmd = "status " + alias + " length";	
		String^ response = mciSendStringHandleResponse(cmd);
	}

	void Player::setTimeFormat(String^ timeFormat)
	{
		String^ cmd = "set " + alias + " time format to " + timeFormat;	
		int errCode = mciSendStringHandle(cmd);
	}


	void Player::checkError(int code)
	{
		if(code==0)
		{
			if(code == 5)
			{
				throw gcnew System::Exception("mciInvalidProcedureCall"); 
			}
			if(code == 380)
			{
				throw gcnew System::Exception("mciInvalidProertyValue"); 
			}
			if(code == 383)
			{
				throw gcnew System::Exception("mciSetNotSupported"); 
			}
			if(code == 394)
			{
				throw gcnew System::Exception("mciGetNotSupported"); 
			}
			if(code == 425)
			{
				throw gcnew System::Exception("mciInvalidObjectUse"); 
			}
			if(code == 461)
			{
				throw gcnew System::Exception("mciWrongClipboardFormat"); 
			}
			if(code == 672)
			{
				throw gcnew System::Exception("mciObjectLocked"); 
			}
			if(code == 673)
			{
				throw gcnew System::Exception("mciExpectedArgument"); 
			}
			if(code == 674)
			{
				throw gcnew System::Exception("mciRecursiveOleDrag"); 
			}
			if(code == 675)
			{
				throw gcnew System::Exception("mciFormatNotByteArray"); 
			}
			if(code == 676)
			{
				throw gcnew System::Exception("mciDataNotSetForFormat"); 
			}
			if(code == 30001)
			{
				throw gcnew System::Exception("mciCantCreateButton"); 
			}
			if(code == 30002)
			{
				throw gcnew System::Exception("mciCantCreateTimer"); 
			}
			if(code == 30004)
			{
				throw gcnew System::Exception("mciUnsupportedFunction"); 
			}
			if(code == 256)
			{
				throw gcnew System::Exception("MCIERR_BASE"); 
			}
			if(code == 257)
			{
				throw gcnew System::Exception("MCIERR_INVALID_DEVICE_ID"); 
			}
			if(code == 259)
			{
				throw gcnew System::Exception("MCIERR_UNRECOGNIZED_KEYWORD"); 
			}
			if(code == 261)
			{
				throw gcnew System::Exception("MCIERR_UNRECOGNIZED_COMMAND"); 
			}
			if(code == 262)
			{
				throw gcnew System::Exception("MCIERR_HARDWARE"); 
			}
			if(code == 263)
			{
				throw gcnew System::Exception("MCIERR_INVALID_DEVICE_NAME"); 
			}
			if(code == 264)
			{
				throw gcnew System::Exception("MCIERR_OUT_OF_MEMORY"); 
			}
			if(code == 265)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_OPEN"); 
			}
			if(code == 266)
			{
				throw gcnew System::Exception("MCIERR_CANNOT_LOAD_DRIVER"); 
			}
			if(code == 267)
			{
				throw gcnew System::Exception("MCIERR_MISSING_COMMAND_STRING"); 
			}
			if(code == 268)
			{
				throw gcnew System::Exception("MCIERR_PARAM_OVERFLOW"); 
			}
			if(code == 269)
			{
				throw gcnew System::Exception("MCIERR_MISSING_STRING_ARGUMENT"); 
			}
			if(code == 270)
			{
				throw gcnew System::Exception("MCIERR_BAD_INTEGER"); 
			}
			if(code == 271)
			{
				throw gcnew System::Exception("MCIERR_PARSER_INTERNAL"); 
			}
			if(code == 272)
			{
				throw gcnew System::Exception("MCIERR_DRIVER_INTERNAL"); 
			}
			if(code == 273)
			{
				throw gcnew System::Exception("MCIERR_MISSING_PARAMETER"); 
			}
			if(code == 274)
			{
				throw gcnew System::Exception("MCIERR_UNSUPPORTED_FUNCTION"); 
			}
			if(code == 275)
			{
				throw gcnew System::Exception("MCIERR_FILE_NOT_FOUND"); 
			}
			if(code == 276)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_NOT_READY"); 
			}
			if(code == 277)
			{
				throw gcnew System::Exception("MCIERR_INTERNAL"); 
			}
			if(code == 278)
			{
				throw gcnew System::Exception("MCIERR_DRIVER"); 
			}
			if(code == 279)
			{
				throw gcnew System::Exception("MCIERR_CANNOT_USE_ALL"); 
			}
			if(code == 280)
			{
				throw gcnew System::Exception("MCIERR_MULTIPLE"); 
			}
			if(code == 281)
			{
				throw gcnew System::Exception("MCIERR_EXTENSION_NOT_FOUND"); 
			}
			if(code == 282)
			{
				throw gcnew System::Exception("MCIERR_OUTOFRANGE"); 
			}
			if(code == 283)
			{
				throw gcnew System::Exception("MCIERR_FLAGS_NOT_COMPATIBLE"); 
			}
			if(code == 286)
			{
				throw gcnew System::Exception("MCIERR_FILE_NOT_SAVED"); 
			}
			if(code == 287)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_TYPE_REQUIRED"); 
			}
			if(code == 288)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_LOCKED"); 
			}
			if(code == 289)
			{
				throw gcnew System::Exception("MCIERR_DUPLICATE_ALIAS"); 
			}
			if(code == 290)
			{
				throw gcnew System::Exception("MCIERR_BAD_CONSTANT"); 
			}
			if(code == 291)
			{
				throw gcnew System::Exception("MCIERR_MUST_USE_SHAREABLE"); 
			}
			if(code == 292)
			{
				throw gcnew System::Exception("MCIERR_MISSING_DEVICE_NAME"); 
			}
			if(code == 293)
			{
				throw gcnew System::Exception("MCIERR_BAD_TIME_FORMAT"); 
			}
			if(code == 294)
			{
				throw gcnew System::Exception("MCIERR_NO_CLOSING_QUOTE"); 
			}
			if(code == 295)
			{
				throw gcnew System::Exception("MCIERR_DUPLICATE_FLAGS"); 
			}
			if(code == 296)
			{
				throw gcnew System::Exception("MCIERR_INVALID_FILE"); 
			}
			if(code == 297)
			{
				throw gcnew System::Exception("MCIERR_NULL_PARAMETER_BLOCK"); 
			}
			if(code == 298)
			{
				throw gcnew System::Exception("MCIERR_UNNAMED_RESOURCE"); 
			}
			if(code == 299)
			{
				throw gcnew System::Exception("MCIERR_NEW_REQUIRES_ALIAS"); 
			}
			if(code == 300)
			{
				throw gcnew System::Exception("MCIERR_NOTIFY_ON_AUTO_OPEN"); 
			}
			if(code == 301)
			{
				throw gcnew System::Exception("MCIERR_NO_ELEMENT_ALLOWED"); 
			}
			if(code == 302)
			{
				throw gcnew System::Exception("MCIERR_NONAPPLICABLE_FUNCTION"); 
			}
			if(code == 303)
			{
				throw gcnew System::Exception("MCIERR_ILLEGAL_FOR_AUTO_OPEN"); 
			}
			if(code == 304)
			{
				throw gcnew System::Exception("MCIERR_FILENAME_REQUIRED"); 
			}
			if(code == 305)
			{
				throw gcnew System::Exception("MCIERR_EXTRA_CHARACTERS"); 
			}
			if(code == 306)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_NOT_INSTALLED"); 
			}
			if(code == 307)
			{
				throw gcnew System::Exception("MCIERR_GET_CD"); 
			}
			if(code == 308)
			{
				throw gcnew System::Exception("MCIERR_SET_CD"); 
			}
			if(code == 309)
			{
				throw gcnew System::Exception("MCIERR_SET_DRIVE"); 
			}
			if(code == 310)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_LENGTH"); 
			}
			if(code == 311)
			{
				throw gcnew System::Exception("MCIERR_DEVICE_ORD_LENGTH"); 
			}
			if(code == 312)
			{
				throw gcnew System::Exception("MCIERR_NO_INTEGER"); 
			}
			if(code == 320)
			{
				throw gcnew System::Exception("MCIERR_WAVE_OUTPUTSINUSE"); 
			}
			if(code == 321)
			{
				throw gcnew System::Exception("MCIERR_WAVE_SETOUTPUTINUSE"); 
			}
			if(code == 322)
			{
				throw gcnew System::Exception("MCIERR_WAVE_INPUTSINUSE"); 
			}
			if(code == 323)
			{
				throw gcnew System::Exception("MCIERR_WAVE_SETINPUTINUSE"); 
			}
			if(code == 324)
			{
				throw gcnew System::Exception("MCIERR_WAVE_OUTPUTUNSPECIFIED"); 
			}
			if(code == 325)
			{
				throw gcnew System::Exception("MCIERR_WAVE_INPUTUNSPECIFIED"); 
			}
			if(code == 326)
			{
				throw gcnew System::Exception("MCIERR_WAVE_OUTPUTSUNSUITABLE"); 
			}
			if(code == 327)
			{
				throw gcnew System::Exception("MCIERR_WAVE_SETOUTPUTUNSUITABLE"); 
			}
			if(code == 328)
			{
				throw gcnew System::Exception("MCIERR_WAVE_INPUTSUNSUITABLE"); 
			}
			if(code == 329)
			{
				throw gcnew System::Exception("MCIERR_WAVE_SETINPUTUNSUITABLE"); 
			}
			if(code == 336)
			{
				throw gcnew System::Exception("MCIERR_SEQ_DIV_INCOMPATIBLE"); 
			}
			if(code == 337)
			{
				throw gcnew System::Exception("MCIERR_SEQ_PORT_INUSE"); 
			}
			if(code == 338)
			{
				throw gcnew System::Exception("MCIERR_SEQ_PORT_NONEXISTENT"); 
			}
			if(code == 339)
			{
				throw gcnew System::Exception("MCIERR_SEQ_PORT_MAPNODEVICE"); 
			}
			if(code == 340)
			{
				throw gcnew System::Exception("MCIERR_SEQ_PORT_MISCERROR"); 
			}
			if(code == 341)
			{
				throw gcnew System::Exception("MCIERR_SEQ_TIMER"); 
			}
			if(code == 342)
			{
				throw gcnew System::Exception("MCIERR_SEQ_PORTUNSPECIFIED"); 
			}
			if(code == 343)
			{
				throw gcnew System::Exception("MCIERR_SEQ_NOMIDIPRESENT"); 
			}
			if(code == 346)
			{
				throw gcnew System::Exception("MCIERR_NO_WINDOW"); 
			}
			if(code == 347)
			{
				throw gcnew System::Exception("MCIERR_CREATEWINDOW"); 
			}
			if(code == 348)
			{
				throw gcnew System::Exception("MCIERR_FILE_READ"); 
			}
			if(code == 349)
			{
				throw gcnew System::Exception("MCIERR_FILE_WRITE"); 
			}
			if(code == 512)
			{
				throw gcnew System::Exception("MCIERR_CUSTOM_DRIVER_BASE"); 
			}

		}


	}

	

	void Player::openCdDoor(void)
	{
		if(cdIsOpen)
		{
			//return;
		}
		String^ cmd = "set cdaudio door open"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			cdIsOpen = true;
		}
	}

	void Player::closeCdDoor(void)
	{
		if(!cdIsOpen)
		{
			return;
		}
		String^ cmd = "set cdaudio door closed"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
	}

	
	
	void Player::drawGuiPanel(void)
	{

	}

}