#include <stdio.h>
#include <stdlib.h>

void main()
{
    float C,F;

    printf(" Informe a temperatura em Fahreinheit: \n");
    scanf ("%f", &F);

    C = (5 * (F-32) / 9);

    printf("\n A temperatura em Celsius eh %.2f e em Fahreinheit eh %.2f \n" ,C,F);

    return 0;
}
