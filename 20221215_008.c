#include <stdio.h>
#include <stdlib.h>

void main()
{
    float C,F;

    printf(" Informe a temperatura em Celsius: \n");
    scanf ("%f", &C);

    F = C * 1.8 + 32;

    printf("\n A temperatura em Fahreinheit eh %.2f e em Celsius eh %.2f \n" ,F,C);

    return 0;
}
