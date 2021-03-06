#ifndef __ST7565R_H	 
#define __ST7565R_H	 		




#ifdef	ST7565R_C
#define	ST7565R_EXT
#else
#define	ST7565R_EXT extern
#endif

#include "sys.h"   





//ST7588操作线
#define LCD_BLK   PAout(15) 			//ST7588片选信号
// #define RSTB   PCout(13) 			//ST7588片选信号
// #define SDI    PBout(3) 			//ST7588SPI  
// #define SCL    PBout(4)  			//ST7588
// #define A0     PBout(5)  			//ST7588
// #define CS0    PBout(6)  			//ST7588
//ST7588操作线
#define RSTB   PBout(5) 		//ST7588片选信号
#define SDI  PAout(1) 			//ST7588SPI  
#define SCL  PBout(0)  			//ST7588
#define A0  PBout(1)  			//ST7588
#define CS0  PBout(11)  			//ST7588

/*H independent instruction */
#define FUNC_SET_Y 				0Xc0//Function Set
#define FUNC_SET_X 				0Xa0//Function Set
#define MIRROR_X 				0X01//Mirror X,MY=0:normal direction (SEG0|SEG131); MY=1:reverse direction (SEG131|SEG0) 
#define MIRROR_Y 				0X08//Mirror Y,MY=0:normal direction (COM0?COM79); MY=1:reverse direction (COM79?COM0) 
#define PWR_DWN 				0X04//Power  Down,PD=0:chip is active; PD=1:chip is in power down mode 
#define H0							0X01
#define H1							0X02

/*H[1:0]=[0:0]  */
#define VOP_RANGE 					0X04//Set V0 (VOP) range
#define PRS_H               0x01

#define END_CMD 						0X06 //read/modify/write

#define DISPLAY_CTRL				0X08 //Sets display configuration 
#define ALL_SEGON           0X01 //All display segments on 
#define ALL_SEGOFF          0X00 //Display OFF  
#define NORMAL_DIS          0X04 //Normal display 
#define INVERSE_DIS         0X05 //Inverse video mode 


#define SET_START_lINE			0X40 //Set STATT LINE
#define SET_YADDR						0Xb0 //Set Y address ,Set Y address of RAM 0 ≦Y≦9  
#define SET_XADDL						0X00 //Set X address L, Set X address of RAM Low-bit. 0≦ X ≦131  
#define SET_XADDH						0X10 //Set Y address H,Set X address of RAMHigh-bit. 0≦ X ≦131 
/*H[1:0]=[0:1]*/
#define DISPLAY_CFG					0X08 //Display configuration ,Top/bottom row mode set data order and the direction of Address. 
#define LSB_TOP             0X04 //DO=1:LSB is on top DO=0:MSB is on top 
#define SEL_DIRV            0X01 //When V = 0, the horizontal addressing is selected,else the vertical addressing is selected. 

#define LCD_BIAS            0X10 //Select LCD bias ratio of the voltage required for driving the LCD.  
#define BIAS_11             0X00
#define BIAS_10             0X01
#define BIAS_09             0X02
#define BIAS_08             0X03
#define BIAS_07             0X04
#define BIAS_06             0X05
#define BIAS_05             0X06
#define BIAS_04             0X07
#define SET_VOP           0X80	//V0 = VOP = ( a + VOP × b ) 

/*H[1:0]=[1:0]*/
#define  PARTIAL_SCR 				0X40	//Partial screen mode ,Full display mode or partial screen mode selection. PS=0:Full display mode with MUX 1:80. PS=1:Partial screen mode with MUX 1:16 or MUX 1:32. 
#define  SEL_STARTLINE 				0X40	//Set start line ,Sets the line address of display RAtop of row (COM0) of LCD panel. 
/*H[1:0]=[1:1]*/
#define SOFT_RST             	0X03
#define HIH_PWR_MOD             0XB0//This command is to enter the high power mode. HP=1: high power mode, HP=0: normal mode. 
#define HIH_PWR                0X04
#define FRAME_FRQ              0X80//Frame frequency




#define MOVE_CONST            10   //动画移动时间间隔 




#define DISSCANGAS_CONST 4
#define DISOFFGAS_CONST 1
#define DOTGASCONST 	200
#define HOLDMODCONST 	500


#define DELT 0xFFFFffff
#define SYSLEDGAS_CONST	50
#define DIS_DLY_CONST		100  //200X10MS
#define DIS_DLY_5sCONST		100  //200X10MS









//extern uint8_t **LCDRam;




void Write_ST7565R_COM(uint8_t COMDADA_4SPI);
void Write_ST7565R_DISPLAY_DATA_serial_4SPI(uint8_t DADA_4SPI);
void Init_ST7565r(void);
//ST7565R_EXT void LCDDisplayTask(void);
//ST7565R_EXT void LCDInit(void);
//ST7565R_EXT void LCDShowICInfo(void);
//ST7565R_EXT void LCDShowNo2_4gInfo(void);
//ST7565R_EXT void LCD_Clear(uint8_t dat);
#endif



