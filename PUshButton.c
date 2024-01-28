/*
 * File:   newmain.c
 * Author: Richard Muhirwa
 *
 * Created on 28 January 2024, 19:57
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

#include <xc.h>
#define _XTAL_FREQ 4000000
#define LED RD0
#define BUTTON RB0

char button_state = 0;
char prev_button_state = 0;
char led_state = 0;

void main(void) {
    TRISB0 = 1;
    TRISD0 = 0;
    
    
    BUTTON = 0;
    LED = 0;
    
    //run infinite loop
    while(1){
        button_state = BUTTON;
        // check for any input pulse or transition 
        if(button_state == 1 && prev_button_state == 0){
            //The below nested if, it toggles the state of an LED
            if(led_state == 0){
                LED = 1;
                led_state = 1;
            }
            else{
                LED = 0;
                led_state = 0;
            }
            
        }
        // update the previous state of the push button
        prev_button_state = button_state;
        
        __delay_ms(100);     
}
    
}
