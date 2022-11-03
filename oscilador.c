/*
 * File:   oscilador.c
 * Author: pablo
 *
 * Created on October 21, 2022, 9:02 AM
 */

#include "oscilador.h"


//******************************************************************************
// Función para configurar PWM
//******************************************************************************
void setupINTOSC(uint8_t IRCF){
    
    switch (IRCF){
        case 1:
            OSCCONbits.IRCF = 0b000;       //31 KHz
            break;
        case 2:
            OSCCONbits.IRCF = 0b001;       //125 KHz
            break;
        case 3:
            OSCCONbits.IRCF = 0b010;       // 250 KHz
            break;
        case 4:
            OSCCONbits.IRCF = 0b011;       // 500 KHz
            break;
        case 5:
            OSCCONbits.IRCF = 0b100;       // 1 MHz
            break;
        case 6:
            OSCCONbits.IRCF = 0b101;       // 2 MHz
            break;
        case 7:
            OSCCONbits.IRCF = 0b110;       // 4 MHz
            break;
        case 8:
            OSCCONbits.IRCF = 0b111;       // 8 MHz
            break;
    }
    OSCCONbits.SCS = 1;
}

