#include <stdio.h>
#include <stdlib.h>

void main()
{
    float altura,peso;

    printf (" Calculando seu peso ideal \n  Insira sua altura em metros: \n");
    scanf("%f",&altura);

    peso = (72.7 * altura)-58 ;

    printf("Seu peso ideal eh %.2f \n",peso);

    return 0;
}
