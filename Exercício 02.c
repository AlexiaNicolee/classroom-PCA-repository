#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario,novosalario;

    printf("Exercicio 02 - Qual o seu salario? ");
    scanf("%f", &salario);

    novosalario = salario * 1.10;

    printf("Se o seu salario aumenta 10%%, voce ganhara R$%.2f\n", novosalario);

    return 0;
}
