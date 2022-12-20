#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2 ;
    printf("\n Conversao de metros para centimetros");

    printf("\n Entre com numero 1 :");
    scanf ("%f",&num1 );

    num2 = num1 *100 ;
    printf("\n Transformando o num 1 que eh %.2f metros em = %.2f centimetros ",num1,num2);
    // conversao de metros para centimetros

    return 0;
}
