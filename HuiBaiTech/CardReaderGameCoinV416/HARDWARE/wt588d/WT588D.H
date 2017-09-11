#ifndef __WT588D_H
#define __WT588D_H	 
#include "sys.h"



#ifdef WT588D_C
#define WT588D_EXT 
#else
#define WT588D_EXT extern
#endif

#define WT588D_CLK_H()          	GPIO_SetBits(GPIOB,GPIO_Pin_4);
#define WT588D_CLK_L()        		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
#define WT588D_DAT_H()          	GPIO_SetBits(GPIOA,GPIO_Pin_15);
#define WT588D_DAT_L()        		GPIO_ResetBits(GPIOA,GPIO_Pin_15);
#define WT588D_CS_H()          		GPIO_SetBits(GPIOB,GPIO_Pin_3);
#define WT588D_CS_L()        			GPIO_ResetBits(GPIOB,GPIO_Pin_3);
		


/*------------ �����ֶ��� ----------------------------*/
//��������
#define WT588D_VOL1_8        		0xE0
#define WT588D_VOL2_8        		0xE1
#define WT588D_VOL3_8        		0xE2
#define WT588D_VOL4_8        		0xE3
#define WT588D_VOL5_8        		0xE4
#define WT588D_VOL6_8        		0xE5
#define WT588D_VOL7_8        		0xE6
#define WT588D_VOL8_8        		0xE7
//ѭ������
#define CLYPLAY        				0xF2
//ֹͣ����
#define STOPPLAY        			0xFE
//������ַ��
#define WT588D_WEL_VOL1        		  0x00	//��ӭʹ�û�ٿƼ����ܹ���ϵͳ
#define WT588D_WEL_VOL2        			0x01	//��ӭʹ�û�ٿƼ����ܹ���ϵͳ
#define WT588D_REOK_VOL        	    0x02    //ˢ���ɹ�
#define WT588D_NOPA_VOL        			0x03			//����
#define WT588D_SHI_VOL        			0x04			//ʮ
#define WT588D_BAI_VOL        			0x05			//��
#define WT588D_QIAN_VOL        			0x06			//ǧ
#define WT588D_YU_E_VOL        			0x07			//���
#define WT588D_LOSLNK_VOL        		0x08	//�����ж�
#define WT588D_YUAN_VOL        			0x09			//Ԫ
#define WT588D_IC_VALID        		  0x0A	//�Ƿ���


//WT588D_EXT uint8_t gWt588dDat;		//wt588d���ŵ�ַ
//WT588D_EXT uint8_t gWt588dTxFlg; //wt588d ���ű�־


void Sound_Ply(void);
void Wt588dInit(void);
#endif

