#include <xc.h>
#define _XTAL_FREQ 1000000
void main(void) {
TRISA=0;
PORTA=0;
ADCON1=0b1111;
if(PORTAbits.RA2==1){
PORTAbits.RA1=0b00000001;//PORTAbits.RA1=0b00000001;
__delay_ms(700);
PORTAbits.RA1=0b00000000;
__delay_ms(300);

}
    return ;
}
