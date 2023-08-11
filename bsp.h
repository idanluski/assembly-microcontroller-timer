#ifndef _bsp_H_
#define _bsp_H

#include <msp430.h>       //MSP430x2xx
//#include <msp430xG46x.h //MSP430x4xx

#define  debounceVal        250
#define  delay62_5ms        0xFFFF

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400


#define PBIN               &P2IN
#define PBIFG              &P2IFG
#define PBIE               &P2IE
#define PBIES              &P2IES
#define PBSEL              &P2SEL
#define PBDIR              &P2DIR

#define checkOUT              &P2OUT
#define checkDIR              &P2DIR
#define checkSEL              &P2SEL

#define PB0                0x01
#define PB1                0x02

#define LCDOUT             &P1OUT
#define LCDDIR             &P1DIR
#define LCDSEL             &P1SEL
#define LCDCONOUT          &P2OUT // 2.5 - 2.7
#define LCDCONSEL          &P2SEL // 2.5 - 2.7
#define LCDCONDIR          &P2DIR // 2.5 - 2.7
#define RS                 0x80
#define RW                 0x40
#define EN                 0x20

#define SCLK               0x0200 //smclk 
#define ACLK               0x0100 //amclk 
#define DIV_1              0X0000
#define DIV_2              0X0040
#define DIV_4              0X0080
#define DIV_8              0X00C0

#define comperM            0x0000
#define capturM            0x0100
#define CCIELCD            0x0010
#define SCSLCD              0X0800


#define MC_STOP            0X0000
#define MC_UP              0X0100
#define MC_CON             0X0020
#define MC_U_D             0X0030
            

#define CM_N               0X0000
#define CM_R               0X4000
#define CM_F               0X8000
#define CM_R_F             0XC000

#define CH_1               0X0000
#define CH_2               0X1000
#define GND                0X2000

#define VCC                0X3000



#define O_MOD0             0X0000 //OUT BIT VALUE
#define O_MOD1             0X0010 //SET
#define O_MOD2             0X0020 //TOGGLE/RESET
#define O_MOD3             0X0030 //SET/RESET
#define O_MOD4             0X0040 //TOGGLE
#define O_MOD5             0X0050 //RESET
#define O_MOD6             0X0060
//TOGGELE/SET
#define O_MOD7             0X0070 // RESET/SET

#endif