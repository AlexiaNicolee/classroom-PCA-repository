#include <stdio.h>
#include <stdlib.h>

void main()
{
    float C,F;

    printf(" Transformando a temperatura de Fahrenheit para celsius \n Informe a temperatura em Fahrenheit: \n");
    scanf ("%f", &F);

    C = (5 * (F-32) / 9);

    printf("\n A temperatura em Celsius eh %.2f e em Fahrenheit eh %.2f \n" ,C,F);

    return 0;
}
