#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valorhora,horasmes,salbruto,salarioliquido,descontos,INSS,sindicato,imprenda,mes;

    printf(" Quanto voce ganha por hora: \n");
    scanf ("%f", &valorhora);

    printf (" Numero de horas trabalhadas no mes: \n");
    scanf ("%f",&horasmes);

    printf ("  Qual o mes de referencia ? \n");
    scanf("%f",&mes);

    salbruto = (valorhora * horasmes );

    INSS = 8*salbruto/100;
    imprenda = 11*salbruto/100;
    sindicato = 5*salbruto/100;

    descontos = (INSS + sindicato + imprenda);
    salarioliquido = (salbruto - descontos );

    printf("  Seu salario bruto eh %.2f \n  Seu salario liquido eh %.2f \n" ,salbruto,salarioliquido);
    printf("  Voce pagou %.2f ao INSS \n  Pagou %.2f ao sindicato",INSS,sindicato);

    return 0;
}
