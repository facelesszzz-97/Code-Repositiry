#include "run.h"


void System_Init()
{
//	delay_init();	    	 							//��ʱ������ʼ��	  
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
//	//uart_init(115200);	 							//���ڳ�ʼ��Ϊ115200
//	OLED_Init();										//��ʾ����ʼ��
//	RELAY_Init();										//�̵�����ʼ��
//	BEEP_Init();										//��������ʼ��
//	KEY_Init();											//������ʼ��
//	//VOICE_Init();								
//	while(DHT22_Init());								//��ʪ�ȴ�������ʼ��
//	//VOICE_Send(0x02);
//	RC522_Init();										//RFID��ʼ��
//	MQ2_Init();											//����������ʼ��
//	WIFI_Connect();										//wifi����
//	OLED_MAIN();										//OLED��ʾ
//	TIM3_Int_Init(499,7199);							//72Mhz/(7199+1)=10Khz��.����Ƶ�ʣ�0.1ms,  ������(499+1)Ϊ50ms  
}

void System_Running()
{
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
	GPIO_SetBits(GPIOE,GPIO_Pin_5);
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
	GPIO_ResetBits(GPIOE,GPIO_Pin_5);
//	Task_ReceiveHandle();
//	Task_UARTHandle();
//	Task_BodyHandle();
//	
//	Task_KEYHandle();
//	Task_RC522Handle();
//	Task_DHT22Handle();
//	Task_MQ2Handle();
}

//void Task_ReceiveHandle()
//{
//	ESP8266_RecToAPP();
//	OLED_SHOWBMP(gState);
//}

//void Task_BodyHandle()
//{
//	BODY_Handle();
//}

//void Task_UARTHandle()
//{
//	if(UART_TIMER) return;
//	UART_TIMER = SYS_50MS;
//	ESP8266_SendToApp();
//}
//void Task_KEYHandle()
//{
//  	if(KEY_TIMER) return;
//  	KEY_TIMER = SYS_100MS;
//	KEY_Handle();
//}
//void Task_RC522Handle()
//{
//	if(RC522_TIMER) return;
//	RC522_TIMER = SYS_200MS;
//	RC522_Handle();
//}
//void Task_DHT22Handle()
//{
//	if(DHT22_TIMER) return;
//	DHT22_TIMER = SYS_500MS;
//	while(DHT22_Read_Data());
//}

//void Task_MQ2Handle()
//{
//	if(MQ2_TIMER) return;
//	MQ2_TIMER = SYS_1S;
//	MQ2_Handle();
//}

