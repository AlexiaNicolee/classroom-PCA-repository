#include <stdio.h>
#include <stdlib.h>

void main()
{
    float num1,num2,num3,caso1,caso2,caso3;

    printf(" Caso 1 :O produto do dobro do numero 1 com metade do numero 2 \n ");
    printf(" Caso 2 :A soma do triplo do numero 1 com o numero 3 \n ");
    printf(" Caso 3 :O numero 3 elevado ao cubo \n\n");

    printf (" Insira dois numeros inteiros \n Numero 1 : ");
    scanf("%f",&num1);

    printf (" Numero 2: ");
    scanf("%f",&num2);

    printf (" Agora,Insira o numero 3 que eh um numero real:  ");
    scanf("%f",&num3);

    // produto do dobro do primeiro com metade do segundo
    caso1 = (2*num1)*(num2 * 0.5);

    //a soma do triplo do primeiro com o terceiro
    caso2 = (3*num1) + num3 ;

    //o terceiro elevado ao cubo
    caso3 = (num3*num3*num3);

    printf("Caso 1 :O resultado eh %.2f \n",caso1);
    printf("Caso 2 :O resultado eh %.2f \n",caso2);
    printf("Caso 3 :O resultado eh %.2f",caso3);

    return 0;
}
