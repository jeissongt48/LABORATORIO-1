#include <xc.h>
#define _XTAL_FREQ 4000000


void main(void) {
    TRISB=0b00000000;
    ADCON1=0b00001111;
    if (PORTAbits.RA2==1)
    {
        PORTBbits.RB0=0b00000001;
        __delay_ms(500);
        PORTBbits.RB1=0b00000001;
        __delay_ms(500);
        PORTBbits.RB2=0b00000001;
        __delay_ms(500);
        PORTBbits.RB3=0b00000001;
        __delay_ms(500);
        PORTBbits.RB4=0b00000001;
        __delay_ms(500);
        PORTBbits.RB5=0b00000001;
        __delay_ms(500);
        PORTBbits.RB6=0b01000001;
        __delay_ms(500);
        PORTBbits.RB7=0b10000001;
        __delay_ms(500);
        PORTBbits.RB0=0b00000000;
        __delay_ms(500);
       PORTBbits.RB1=0b00000000; 
       __delay_ms(500);
       PORTBbits.RB2=0b00000000;
       __delay_ms(500);
       PORTBbits.RB3=0b00000000;
       __delay_ms(500);
       PORTBbits.RB4=0b00000000;
       __delay_ms(500);
       PORTBbits.RB5=0b00000000;
       __delay_ms(500);
       PORTBbits.RB6=0b01000000;
       __delay_ms(500);
       PORTBbits.RB7=0b10000000;
        
    }
   
  
    return ;
}
