#ifndef CUSTOM_PDO_NAME_H
#define CUSTOM_PDO_NAME_H

//-------------------------------------------------------------------//
//                                                                   //
//     This file has been created by the Easy Configurator tool      //
//                                                                   //
//     Easy Configurator project myCustomSlave.prj
//                                                                   //
//-------------------------------------------------------------------//


#define CUST_BYTE_NUM_OUT	12
#define CUST_BYTE_NUM_IN	11
#define TOT_BYTE_NUM_ROUND_OUT	12
#define TOT_BYTE_NUM_ROUND_IN	12


typedef union												//---- output buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_OUT];
	struct
	{
		uint32_t    myOutput_3;
		int32_t     myOutput_4;
		uint16_t    myOutput_2;
		uint8_t     myOutput_1;
		int8_t      TheLastOutput;
	}Cust;
} PROCBUFFER_OUT;


typedef union												//---- input buffer ----
{
	uint8_t  Byte [TOT_BYTE_NUM_ROUND_IN];
	struct
	{
		float       AnOtherInput;
		int32_t     myLastInput;
		int16_t     myInput_1;
		int8_t      myInput_2;
	}Cust;
} PROCBUFFER_IN;

#endif