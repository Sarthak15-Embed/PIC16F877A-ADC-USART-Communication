#include <xc.h>
//#include <pic16f877a.h>
#define _XTAL_FREQ 20000000
void USART_Tx(char);
unsigned char USART_Rx();
void USART_Init();