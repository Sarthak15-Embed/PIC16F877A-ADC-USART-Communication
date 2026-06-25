#include"config.h"
#include <xc.h>
#include"Usart.h"
#include "Lcd_8bit.h"
#include"ADC.h"
void USART_Data(unsigned int Adc_Value); 
int main()
{
   USART_Init();
   Adc_Init();
   lcd_init();
   lcd_cmd(0x80);
   lcd_str("Adc_Transmit:");
	while(1)
    {
     Adc_value = Adc_Read();
     lcd_cmd(0xC0);
     Adc_display(Adc_value);
     USART_Tx(Adc_value);  
	}
}
void USART_Data(unsigned int Adc_Value)  
{
     USART_Tx(':');
     USART_Tx((Adc_value/1000)+'0');
	 USART_Tx(((Adc_value/100)%10)+'0');
	 USART_Tx((Adc_value/10)%10+'0');
     USART_Tx((Adc_value%10)+'0');
}

