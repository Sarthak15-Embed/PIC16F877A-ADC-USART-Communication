//#include <pic16f877a.h>
#include"Usart.h"
void USART_Tx(char Tx_data)
{
    TXREG=Tx_data;
    while(TXIF==0);
    TXIF=0;
}
unsigned char USART_Rx()
{
    while(RCIF==0);
    RCIF=0;
    return RCREG;
}
void USART_Init()
{
    TRISC6= 0;//Transmision
    TRISC7= 1;//Receiver
    TXSTA=0x26;
    RCSTA=0x90;
    SPBRG=129;
}