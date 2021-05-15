#include <xc.h>
#define _XTAL_FREQ 4000000


void main(void) {
    TRISA=0b00000000;
    ADCON1=0b00001111;
    PORTA=0;
    if (PORTAbits.RA2==1){
        
        PORTA=0b0000;
        __delay_ms(1000);
        PORTA=0b0001;
        __delay_ms(1000);
        PORTA=0b0011;
        __delay_ms(1000);
        PORTA=0b0010;
        __delay_ms(1000);
        PORTA=0b0110;
        __delay_ms(1000);
        PORTA=0b0111;
        __delay_ms(1000);
        PORTA=0b0101;
        __delay_ms(1000);
        PORTA=0b0100;
        __delay_ms(1000);
        PORTA=0b1100;
        __delay_ms(1000);
        PORTA=0b1101;
        __delay_ms(1000);
        PORTA=0b1111;
        __delay_ms(1000);
        PORTA=0b1110;
        __delay_ms(1000);
        PORTA=0b1010;
        __delay_ms(1000);
        PORTA=0b1011;
        __delay_ms(1000);
        PORTA=0b1001;
        __delay_ms(1000);
        PORTA=0b1000;
        __delay_ms(1000);
   
    } 
    
    return  ;
}
