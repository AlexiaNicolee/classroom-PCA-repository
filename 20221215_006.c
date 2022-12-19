#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valorhora,horasmes,salario;
    char mes;

    printf(" Quanto voce ganha por hora: \n");
    scanf ("%f", &valorhora);

    printf(" Numero de horas trabalhadas no mes: \n");
    scanf ("%f", &horasmes);

    printf(" Qual mes: \n");
    scanf ("%f", &mes);

    salario = (horasmes*valorhora);

    printf("\n Seu salario eh %.2f \n",salario);

    return 0;
}
