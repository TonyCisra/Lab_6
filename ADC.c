/*
 * File:   ADC.c
 * Author: Antony
 */

#include "ADC.h"
#define _XTAL_FREQ 1000000

//******************************************************************************
// Función para configurar PWM
//******************************************************************************
void setupADC(uint8_t ValCHS){
    // Configuración ADC
    ADCON0bits.ADCS = 0b01;     // Fosc/8
    
    ADCON1bits.VCFG0 = 0;       // VDD *Referencias internas
    ADCON1bits.VCFG1 = 0;       // VSS
    switch (ValCHS){
        case 1:
            ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
            break;
        case 2:
            ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
            ADCON0bits.CHS = 0b0001;    // Seleccionar AN1
            break;
        case 3:
            ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
            ADCON0bits.CHS = 0b0001;    // Seleccionar AN1
            ADCON0bits.CHS = 0b0010;    // Seleccionar AN2
            break;
        case 4:
            ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
            ADCON0bits.CHS = 0b0001;    // Seleccionar AN1
            ADCON0bits.CHS = 0b0010;    // Seleccionar AN2
            ADCON0bits.CHS = 0b0011;    // Seleccionar AN3
            break;
        case 5:
            ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
            ADCON0bits.CHS = 0b0001;    // Seleccionar AN1
            ADCON0bits.CHS = 0b0010;    // Seleccionar AN2
            ADCON0bits.CHS = 0b0011;    // Seleccionar AN3
            ADCON0bits.CHS = 0b0100;    // Seleccionar AN4
            break;
    }
    ADCON0bits.CHS = 0b0000;    // Seleccionar AN0
    ADCON1bits.ADFM = 0;        // Justificado a la izquierda
    ADCON0bits.ADON = 1;        // Habilitar modulo ADC
    __delay_us(40);             // Delay de 40 us
}