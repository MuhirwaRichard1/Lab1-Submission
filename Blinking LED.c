
/*
 * File:   Blinking LED.c
 * Author: Richard Muhirwa
 *
 * Created on 21 January 2024, 01:02
 */

// 'C' source line config statements
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 4000000
#define LED0 RA3
#define LED1 RB0
#define LED2 RC1
#define LED3 RD2
#define LED4 RE0
void main(void) {
    TRISA3 = 0;
    TRISB0 = 0;
    TRISC1 = 0;
    TRISD2 = 0;
    TRISE0 = 0;
    LED0 = 0;
    LED1 = 0;
    LED2 = 0;
    LED3 = 0;
    LED4 = 0;
    while(1){
        LED0 = 1;
        LED1 = 1;
        LED2 = 1;
        LED3 = 1;
        LED4 = 1;
        __delay_ms(500);
        LED0 = 0;
        LED1 = 0;
        LED2 = 0;
        LED3 = 0;
        LED4 = 0;
        __delay_ms(500);
    }
}
