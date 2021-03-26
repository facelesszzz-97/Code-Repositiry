#ifndef __DATATYPE_H__
#define __DATATYPE_H__
#include "sys.h"

#define DATA_LENGTH 			7
#define SEND_DATA_THENGTH		10
#define RECEIVE_DATA_THENGTH	6

typedef union
{
	struct
	{
		uint8_t b0 : 1;
		uint8_t b1 : 1;
		uint8_t b2 : 1;
		uint8_t b3 : 1;
		uint8_t b4 : 1;
		uint8_t b5 : 1;
		uint8_t b6 : 1;
		uint8_t b7 : 1;
	}Bit;
	uint8_t ALL;
}Byte8;


typedef struct
{
	u8 Head;
	u8 Source;
	Byte8 Data[DATA_LENGTH];		//mq2:2  dht22:4  state:1 (��Ӧ��ϵ: 0000 0000    )
									//		1:����0:��		MQ2 TEM HUMI ���� ���� ģʽ �� ������
	u8 Check;
}stSend;

typedef struct
{
	u8 Head_d;
	u8 Head_e;
	u8 Source_h9;
	u8 Source_l9;
	Byte8 Data[2];					
	//u8 Check;
}stReceived;

typedef struct
{
	u8 *OK;				//�ش�������ȷָ��
	u8 *WokeMode;		//���ù���ģʽ
	u8 *HopSpot;		//�����ȵ�
	u8 *ConnectMode;	//��������ģʽ
	u8 *ConnectTCP;		//����TCP������
	u8 *CipMode;		//͸��ģʽ����
	u8 *CipSend;		//��������
}stWIFI;

typedef struct
{
	u8 HumiHigh;
	u8 HumiLow;
	u8 TempHigh;
	u8 TempLow;
	u8 CheckSum;
}stDHT22;

typedef struct
{
	u8 MQ2_High;
	u8 MQ2_Low;
	u32 MQ2_Value;
}stMQ2;






#endif
