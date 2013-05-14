#include "stdafx.h"
#include "Player.h"
#include "Windows.h"
#include "Sound.h"
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

	void Player::openSound(Sound^ givenSound)
	{
		String^ cmd = "open \""+givenSound->Path +"\" type mpegvideo alias " + alias;
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isOpen = true;
		}
		checkError(errCode);
	}

	String^ Player::getUniqueAlias()
	{
		aliasCounter = aliasCounter++;
		String^ alias = "SoundBoardSound"+Convert::ToString(aliasCounter);
		return alias;
	}

	int Player::mciSendStringHandle(String^ givenHandle)
	{
		// http://msdn.microsoft.com/de-de/library/ms235631(v=vs.80).aspx 
		// http://stackoverflow.com/questions/16216386/mcisendstring-with-visual-c-parameters/16322700#16322700
		// http://msdn.microsoft.com/de-de/library/585whdf9(v=vs.80).aspx
		// makes gc handle pinned and adressable by unmanaged system		
		pin_ptr<const wchar_t> wch = PtrToStringChars(givenHandle);
		return mciSendString(wch, 0, 0, 0);
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
			checkError(errCode);
		}

		if(!isPlaying)
		{
			String^ cmd = "play " + alias;	
			int errCode = mciSendStringHandle(cmd);
			if(errCode==0)
			{
				isPlaying = true;
				isPaused = false;
			}
			checkError(errCode);
		}
	}

	void Player::playSound(Sound^ givenSound)
	{		
		currentSound = givenSound;
		this->playSound();
	}

	void Player::stopSound(void)
	{
		//reset position to start
		String^ cmd = "seek " + alias + " to start";	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = true;
			isPaused = false;
		}
		checkError(errCode);

		//and now stop
		cmd = "stop " + alias;	
		errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = true;
			isPaused = false;
		}
		checkError(errCode);
	}

	void Player::restartSound(void)
	{
		stopSound();
		playSound();
	}


	void Player::setPosition(void)
	{

	}

	void Player::getCurrentPosition(void)
	{
		// "status " + alias + " position";
	}

	void Player::getLength(void)
	{

	}

	void Player::setTimeFormat(void)
	{

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

	void Player::pauseSound(void)
	{
		String^ cmd = "pause " + alias;	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isPlaying = false;
			isPaused = true;
		}
		checkError(errCode);
	}

	void Player::resumeSound(void)
	{
		this->playSound();
	}

	void Player::openCdDoor(void)
	{
		if(isOpen)
		{
			//return;
		}
		String^ cmd = "set cdaudio door open"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		if(errCode==0)
		{
			isOpen = true;
		}
		checkError(errCode);
	}

	void Player::closeCdDoor(void)
	{
		if(!isOpen)
		{
			return;
		}
		String^ cmd = "set cdaudio door closed"; // + this->currentAlias++; 	
		int errCode = mciSendStringHandle(cmd);
		checkError(errCode);
	}

	void Player::drawGuiPanel(void)
	{

	}

}