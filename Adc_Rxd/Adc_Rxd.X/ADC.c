#include <xc.h>
#include"ADC.h"
#include "Lcd_8bit.h"
void Adc_Init(void)
{
   ADCON0=0x85;
   ADCON1=0x84;
}
unsigned int Adc_Read()
{
    GO_nDONE=1;//start conversion
    __delay_ms(5);
    while(GO_nDONE==1);//Monitor
    return((ADRESH<<8)|ADRESL);
}
void Adc_display(unsigned int Adc_value)
{
	lcd_data((Adc_value/1000)+'0');
	lcd_data(((Adc_value/100)%10)+'0');
	lcd_data((Adc_value/10)%10+'0');
    lcd_data((Adc_value%10)+'0');	
}