/*!
 *	\file		commands.h
 *  \author		SBG-Systems (Raphael Siryani)
 *	\date		02/04/07
 *
 *	\brief		Generic commands implementation.<br>
 *				Copyright 2007-2008 SBG Systems. All rights reserved.
 */
#ifndef __COMMANDS_H__
#define __COMMANDS_H__

#include "../sbgCommon.h"
#include "protocol.h"
#include "protocolOutput.h"

//----------------------------------------------------------------------//
//- Command definitions                                                -//
//----------------------------------------------------------------------//

//
// Generic commands
//
#define SBG_ACK									(0x01)

//
// General settings configuration
//
#define SBG_GET_INFOS							(0x10)
#define SBG_RET_INFOS							(0x11)

#define SBG_SET_PROTOCOL_MODE					(0x12)
#define SBG_GET_PROTOCOL_MODE					(0x13)
#define SBG_RET_PROTOCOL_MODE					(0x14)

#define SBG_SET_OUTPUT_MODE						(0x15)
#define SBG_GET_OUTPUT_MODE						(0x16)
#define SBG_RET_OUTPUT_MODE						(0x17)

#define SBG_SET_USER_ID							(0x18)
#define SBG_GET_USER_ID							(0x19)
#define SBG_RET_USER_ID							(0x1A)

#define SBG_RESTORE_DEFAULT_SETTINGS			(0x1B)
#define SBG_SET_LOW_POWER_MODE					(0x1C)
#define SBG_GET_LOW_POWER_MODE					(0x1D)
#define SBG_RET_LOW_POWER_MODE					(0x1E)

#define SBG_SET_USER_BUFFER						(0x1F)
#define SBG_GET_USER_BUFFER						(0x20)
#define SBG_RET_USER_BUFFER						(0x21)

#define SBG_GET_ERROR_LOG						(0x22)
#define SBG_RET_ERROR_LOG						(0x23)

//
// Kalman filter, sensors and coordinate frames settings
//
#define SBG_SET_FILTER_FREQUENCIES				(0x30)
#define SBG_GET_FILTER_FREQUENCIES				(0x31)
#define SBG_RET_FILTER_FREQUENCIES				(0x32)

#define SBG_SET_FILTER_ATTITUDE_SENSORS_ERR		(0x33)
#define SBG_GET_FILTER_ATTITUDE_SENSORS_ERR		(0x34)
#define SBG_RET_FILTER_ATTITUDE_SENSORS_ERR		(0x35)

#define SBG_SET_FILTER_ATTITUDE_OPTIONS			(0x36)
#define SBG_GET_FILTER_ATTITUDE_OPTIONS			(0x37)
#define SBG_RET_FILTER_ATTITUDE_OPTIONS			(0x38)

#define SBG_SET_AUTO_ORIENTATION_OFFSET			(0x39)
#define SBG_SET_MANUAL_ORIENTATION_OFFSET		(0x3A)
#define SBG_GET_ORIENTATION_OFFSET				(0x3B)
#define SBG_RET_ORIENTATION_OFFSET				(0x3C)

#define SBG_SET_FILTER_HEADING_SOURCE			(0x3D)
#define SBG_GET_FILTER_HEADING_SOURCE			(0x3E)
#define SBG_RET_FILTER_HEADING_SOURCE			(0x3F)

#define SBG_SET_MAGNETIC_DECLINATION			(0x40)
#define SBG_GET_MAGNETIC_DECLINATION			(0x41)
#define SBG_RET_MAGNETIC_DECLINATION			(0x42)

#define SBG_SEND_FILTER_HEADING					(0x43)

//
// Output configuration, and send
//
#define SBG_SET_DEFAULT_OUTPUT_MASK				(0x50)
#define SBG_GET_DEFAULT_OUTPUT_MASK				(0x51)
#define SBG_RET_DEFAULT_OUTPUT_MASK				(0x52)

#define SBG_SET_CONTINUOUS_MODE					(0x53)
#define SBG_GET_CONTINUOUS_MODE					(0x54)
#define SBG_RET_CONTINUOUS_MODE					(0x55)

#define SBG_GET_DEFAULT_OUTPUT					(0x56)
#define SBG_RET_DEFAULT_OUTPUT					(0x57)
#define SBG_GET_SPECIFIC_OUTPUT					(0x58)
#define SBG_RET_SPECIFIC_OUTPUT					(0x59)

//
// Calibration commands
//
#define SBG_CALIB_MAG							(0x70)
#define SBG_CALIB_GYRO_BIAS						(0x71)
#define SBG_CALIB_MAG_SET_MANUAL				(0x72)
#define SBG_CALIB_MAG_GET_TRANSFORMATIONS		(0x73)
#define SBG_CALIB_MAG_RET_TRANSFORMATIONS		(0x74)

//
// Continuous mode commands
//
#define SBG_CONTINUOUS_DEFAULT_OUTPUT			(0x90)
#define SBG_TRIGGERED_OUTPUT					(0x91)

//
// Position relative Commands GPS and barometer
//
#define SBG_SET_REFERENCE_PRESSURE				(0xA0)
#define SBG_GET_REFERENCE_PRESSURE				(0xA1)
#define SBG_RET_REFERENCE_PRESSURE				(0xA2)

#define	SBG_GET_GPS_SVINFO						(0xA3)
#define	SBG_RET_GPS_SVINFO						(0xA4)
#define	SBG_SET_GPS_OPTIONS						(0xA5)
#define	SBG_GET_GPS_OPTIONS						(0xA6)
#define	SBG_RET_GPS_OPTIONS						(0xA7)

#define SBG_SET_NAV_VELOCITY_SRC				(0xA8)
#define SBG_GET_NAV_VELOCITY_SRC				(0xA9)
#define SBG_RET_NAV_VELOCITY_SRC				(0xAA)

#define SBG_SET_NAV_POSITION_SRC				(0xAB)
#define SBG_GET_NAV_POSITION_SRC				(0xAC)
#define SBG_RET_NAV_POSITION_SRC				(0xAD)

#define SBG_SET_GPS_LEVER_ARM					(0xAE)
#define SBG_GET_GPS_LEVER_ARM					(0xAF)
#define SBG_RET_GPS_LEVER_ARM					(0xB0)

#define SBG_SET_GRAVITY_MAGNITUDE				(0xB1)
#define SBG_GET_GRAVITY_MAGNITUDE				(0xB2)
#define SBG_RET_GRAVITY_MAGNITUDE				(0xB3)

#define SBG_SEND_NAV_VELOCITY					(0xB4)
#define SBG_SEND_NAV_POSITION					(0xB5)

#define SBG_SET_VELOCITY_CONSTRAINTS			(0xB6)
#define SBG_GET_VELOCITY_CONSTRAINTS			(0xB7)
#define SBG_RET_VELOCITY_CONSTRAINTS			(0xB8)

#define SBG_SET_TRIGGERED_OUTPUT				(0xB9)
#define SBG_GET_TRIGGERED_OUTPUT				(0xBA)
#define SBG_RET_TRIGGERED_OUTPUT				(0xBB)

#define SBG_SET_EXTERNAL_DEVICE					(0xBC)
#define SBG_GET_EXTERNAL_DEVICE					(0xBD)
#define SBG_RET_EXTERNAL_DEVICE					(0xBE)

#define SBG_SET_EXTERNAL_DEVICE_CONF			(0xBF)
#define SBG_RET_EXTERNAL_DEVICE_CONF			(0xC0)

#define SBG_SET_SYNC_IN_CONF					(0xC1)
#define SBG_GET_SYNC_IN_CONF					(0xC2)
#define SBG_RET_SYNC_IN_CONF					(0xC3)

#define SBG_SET_SYNC_OUT_CONF					(0xC4)
#define SBG_GET_SYNC_OUT_CONF					(0xC5)
#define SBG_RET_SYNC_OUT_CONF					(0xC6)

#define SBG_SET_ODO_CONFIG						(0xC7)
#define SBG_GET_ODO_CONFIG						(0xC8)
#define SBG_RET_ODO_CONFIG						(0xC9)

#define SBG_SET_ODO_DIRECTION					(0xCA)
#define SBG_GET_ODO_DIRECTION					(0xCB)
#define SBG_RET_ODO_DIRECTION					(0xCD)

#define SBG_SET_ODO_LEVER_ARM					(0xCE)
#define SBG_GET_ODO_LEVER_ARM					(0xCF)
#define SBG_RET_ODO_LEVER_ARM					(0xD0)


//----------------------------------------------------------------------//
//- Common command definitions                                         -//
//----------------------------------------------------------------------//
#define SBG_TEMPORARY_OPTION					(0x00)
#define SBG_PERMANENT_OPTION					(0x01)

#define SBG_DISABLE								(0x00)
#define SBG_ENABLE								(0x01)

//----------------------------------------------------------------------//
//- Output mode masks definition used by SBG_SET_OUTPUT_MODE           -//
//----------------------------------------------------------------------//
#define SBG_OUTPUT_MODE_DEFAULT					(0x00)					/*!< Default ouput mode, big endian and float. */
#define SBG_OUTPUT_MODE_BIG_ENDIAN				(0x00)					/*!< Use big endian data ordering. */
#define SBG_OUTPUT_MODE_LITTLE_ENDIAN			(0x01)					/*!< Use little endian data ordering. */
#define SBG_OUTPUT_MODE_FLOAT					(0x00)					/*!< Use float or double format for real values. */
#define SBG_OUTPUT_MODE_FIXED					(0x02)					/*!< Use fixed32 or fixed64 format for real values */

//----------------------------------------------------------------------//
//- Protocol mode options                                              -//
//----------------------------------------------------------------------//

#define SBG_PROTOCOL_EN_TX_EMI_REDUCTION		(0x80000000)			/*!< EMI reduction activation parameter for main communication port. (slow slew rate)
																			 If set, baudrate is limited to 230400 bps */
#define SBG_PROTOCOL_DIS_TX_EMI_REDUCTION		(0x00000000)			/*!< Fast slew rate parameter for main communication port.
																			 If set, baudrate is not limited */

//----------------------------------------------------------------------//
//- Definitions about the cmdGetErrorLog - size of the error log       -//
//----------------------------------------------------------------------//

#define SBG_ERROR_LOG_SIZE_LONG				(20)									/*!< Error log size returned by cmdGetErrorLog in 32 bits words */
#define SBG_ERROR_LOG_SIZE_BYTES			(SBG_ERROR_LOG_SIZE_LONG*sizeof(uint32))/*!< Error log size returned by cmdGetErrorLog in bytes */

//----------------------------------------------------------------------//
//- GPS receiver power modes                                           -//
//----------------------------------------------------------------------//

/*!
 *	Defines our device power mode options
 */
typedef enum _SbgPowerModeDevice
{
	SBG_DEVICE_NORMAL	= (0x02)										/*!< Normal device operations. */
} SbgPowerModeDevice;

/*!
 *	Define our GPS power mode options
 */
typedef enum _SbgPowerModeGps
{
	SBG_GPS_MAX_PERF			= 0x00,										/*!< Max. performance mode. */
	SBG_GPS_ECO_MODE_1			= 0x01,										/*!< Eco mode 1: Current peaks are limited;<br>
																			 *   startup might be longer than in MAX_PERF mode. <br>
																			 *   (Supported on GPS hardware V3 and above) */
	SBG_GPS_ECO_MODE_2			= 0x02,										/*!< Eco mode 2: Current peaks are limited;<br>
																			 *   In addition, once sufficient satellites are visible, 
																			 *   the GPS enters into a low power mode and stops new satellites tracking<br>
																			 *   (Supported on GPS hardware V3 and above) */
	SBG_GPS_OFF_MODE			= 0x05,										/*!< GPS receiver is turned off. */
} SbgPowerModeGps;
			

//----------------------------------------------------------------------//
//- Common commands operations                                         -//
//----------------------------------------------------------------------//

/*!
 *	Send an ACK frame to our device with a specified error code.
 *	\param[in]	handle							A valid sbgMatLab library handle.
 *	\param[in]	error							The error code field of the ACK frame.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgSendAck(SbgProtocolHandle handle, SbgErrorCode error);

/*!
 *	Wait for an ACK or NACK frame for ms number of milliseconds.<br>
 *	If we have received a frame, the function returns the error code field<br>
 *	contained in the received frame.<br>
 *	If the received frame contains SBG_NO_ERROR, we have received an ACK otherwise it's an NACK.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	ms								Number of milliseconds to wait for a frame.
 *	\return										SBG_NO_ERROR if we have received an ACK frame within ms milliseconds.<br>
 *												Error code if we have received an NACK frame<br>
 *												SBG_TIME_OUT if no ACK/NACK frame was received.<br>
 */
SbgErrorCode sbgWaitForAck(SbgProtocolHandle handle, uint32 ms);

//----------------------------------------------------------------------//
//- Settings commands operations                                       -//
//----------------------------------------------------------------------//

/*!
 *	Gets device information such as product code, hardware and firmware revisions.<br>
 *	For versions, use SBG_VERSION_GET_MAJOR, SBG_VERSION_GET_MINOR, SBG_VERSION_GET_REV and SBG_VERSION_GET_BUILD<br>
 *	to extract versions inforamtion.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[out]	productCode						Device product code string.
 *	\param[out]	pDeviceId						Device id.
 *	\param[out]	pFirmwareVersion				The device firmware version. ('1.0.0.0')
 *	\param[out]	pCalibDataVersion				The device calibration data version. ('1.0.0.0')
 *	\param[out]	pMainBoardVersion				The device main board hardware version. ('1.0.0.0')
 *	\param[out]	pGpsBoardVersion				The device gps/top board hardware version. ('1.0.0.0')
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgGetInfos(SbgProtocolHandle handle, char productCode[32], uint32 *pDeviceId, uint32 *pFirmwareVersion, uint32 *pCalibDataVersion, uint32 *pMainBoardVersion, uint32 *pGpsBoardVersion);

/*!
 *	Defines a user selectable ID for the device.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\param[in]	userId							An uint32 used to hold our device user id.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgSetUserId(SbgProtocolHandle handle, bool permanent, uint32 userId);

/*!
 *	Returns the device user id.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[out]	pUserId							Pointer to an uint32 used to hold our device user id.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgGetUserId(SbgProtocolHandle handle, uint32 *pUserId);

/*!
 *	Defines the baud rate of our device uart communication.<br>
 *	If the command is valid, the device acknoledge the baudrate change at the current speed and THEN change it's baud rate.<br>
 *	This command only change the baud rate on the device. It doesn't change the sbgCom library baud rate.<br>
 *	To change only the baud rate used by the library, you have to use the function sbgProtocolChangeBaud.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\param[in]	baudRate						The new device baud rate to use.<br>
 *												Valid values are [9600, 19200,38400,57600,115200,230400,460800,921600].
 *	\param[in]	uartOptions						Options applied on the COM port; restart the device if options are changed (only with supported hardware)
 *												 - SBG_PROTOCOL_DIS_TX_EMI_REDUCTION : Normal / Fast mode of operation
 *												 - SBG_PROTOCOL_EN_TX_EMI_REDUCTION: Slow operation for EMI reduction. 
 *												   Baudrate is then limited at 230400bps.
 *	\return										If SBG_NO_ERROR, the device has been configured to the new speed.
 */
SbgErrorCode sbgSetProtocolMode(SbgProtocolHandle handle, bool permanent, uint32 baudRate, uint32 uartOptions);

/*!
 *	Command used to get the current theorical baudrate used by the device.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[out]	pBaudRate						Theorical baud rate used by the device.
 *  \param[out]	pUartOptions					Options applied on the COM port: (only with supported hardware)
 *												 - SBG_PROTOCOL_DIS_TX_EMI_REDUCTION : Normal / Fast mode of operation
 *												 - SBG_PROTOCOL_EN_TX_EMI_REDUCTION: Slow operation for EMI reduction.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgGetProtocolMode(SbgProtocolHandle handle, uint32 *pBaudRate, uint32 *pUartOptions);

/*!
 *	Defines the output mode of our target, big/little endian and float/fixed format.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\param[in]	outputMode						The output mode configuration using masks<br>
 *												- #SBG_OUTPUT_MODE_DEFAULT<br>
 *												- #SBG_OUTPUT_MODE_BIG_ENDIAN<br>
 *												- #SBG_OUTPUT_MODE_LITTLE_ENDIAN<br>
 *												- #SBG_OUTPUT_MODE_FLOAT<br>
 *												- #SBG_OUTPUT_MODE_FIXED<br>
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgSetOutputMode(SbgProtocolHandle handle, bool permanent, uint8 outputMode);

/*!
 *	Returns the output mode of our target, big/little endian and float/fixed format.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[out]	pOutputMode						Current output mask used by the device.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgGetOutputMode(SbgProtocolHandle handle, uint8 *pOutputMode);

/*!
 *	Sets the Low power modes for the IG-Device
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\param[in]	devicePowerMode					Defines the device power mode. (leave to SBG_DEVICE_NORMAL).
 *	\param[in]	gpsPowerMode					Defines the the GPS receiver power mode. (leave to SBG_GPS_MAX_PERF if there is no GPS reveicer)	<br>
 * 												SBG_GPS_MAX_PERF	(0): Max. performance mode										<br>
 *												SBG_GPS_POWER_SAVE	(1): Power Save Mode(unsupported)								<br>
 *												SBG_GPS_ECO_MODE	(4): Eco mode	(unsupported)									<br>
 * 												SBG_GPS_OFF_MODE	(5): GPS Off mode
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgSetLowPowerModes(SbgProtocolHandle handle,  bool permanent, SbgPowerModeDevice devicePowerMode, SbgPowerModeGps gpsPowerMode);

/*!
 *	Gets the Low power modes for the IG-Device
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[out]	pDevicePowerMode				Returns the device power mode. (pass NULL if not used)
 *	\param[out]	pGpsPowerMode					Returns the GPS receiver power mode. (pass NULL if not used)	<br>
 * 												SBG_GPS_MAX_PERF	(0): Max. performance mode					<br>
 *												SBG_GPS_POWER_SAVE	(1): Power Save Mode(unsupported)			<br>
 *												SBG_GPS_ECO_MODE	(4): Eco mode	(unsupported)				<br>
 * 												SBG_GPS_OFF_MODE	(5): GPS Off mode
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgGetLowPowerModes(SbgProtocolHandle handle, SbgPowerModeDevice *pDevicePowerMode, SbgPowerModeGps *pGpsPowerMode);


/*!
 *	Write a user buffer in the IG device's memory
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\param[in]	index							Address in the user memory where the data has to be written.	<br>
 *												Max address: 0x0280 (640 bytes)
 *	\param[in]	size							Size of the user buffer to write in bytes						<br>
 *												Max size: 504 or (640 - index), whichever is the smallest
 *  \param[in]	pBuffer							Buffer that will be written to IG device's memory
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgSetUserBuffer(SbgProtocolHandle handle,  bool permanent, uint16 index, uint16 size, const void *pBuffer);

/*!
 *	Read a user buffer in the IG device's memory
 *	\param[in]	handle							A valid sbgCom library handle.
 *  \param[out]	pBuffer							Buffer that will be read from the IG device's memory. Needs to be preallocated
 *	\param[in]	index							Address in the user memory where the data has to be read.	<br>
 *												Max address: 0x0280 (640 bytes)
 *	\param[in]	size							Size of the user buffer to read in bytes					<br>
 *												Max size: 504 or (640 - index), whichever is the smallest
 */
SbgErrorCode sbgGetUserBuffer(SbgProtocolHandle handle, void *pBuffer, uint16 index, uint16 size);

/*!
 *	Get the error log stored in memory
 *	\param[in]	handle							A valid sbgCom library handle.
 *  \param[out]	pErrorLog						A buffer that will be filled with the error log. <br>
												PreAllocate SBG_ERROR_LOG_SIZE_BYTES bytes  (80 bytes) in the buffer.
 *  \param[in]	reserved						Reserved parameter for future use. Leave to 0
 */
SbgErrorCode sbgGetErrorLog(SbgProtocolHandle handle, void *pErrorLog, uint16 reserved);

/*!
 *	Restore all settings to factory defaults (excepted for calibration data such as gyros bias and magnetometers calibration).<br>
 *	The device baud rate is reseted to 115200 bauds.<br>
 *	This command dosen't change the sbgCom library baud rate.<br>
 *	To change only the baud rate used by the library, you have to use the function sbgProtocolChangeBaud.<br>
 *	You should also call sbgGetOutputMode to update the output mode format.
 *	\param[in]	handle							A valid sbgCom library handle.
 *	\param[in]	permanent						If true, stores this settings in flash memory.
 *	\return										SBG_NO_ERROR if no error.
 */
SbgErrorCode sbgRestoreDefaultSettings(SbgProtocolHandle handle, bool permanent);


#endif
