#include <stdio.h>
#include <stdlib.h>

void main()
{
    float totalConta,totalDoGarcom, PorcentagemDoGarcom;

    printf("Exercicio 03 - Forneca o valor da conta e a porcentagem dada ao garcom(A porcentagem deve ser em valor decimal) \n");
    scanf("%f %f", &totalConta, &PorcentagemDoGarcom);

    totalDoGarcom = totalConta *  (PorcentagemDoGarcom/ 100 );
    printf("O garcom precisa receber R$%.2f", totalDoGarcom);

    return 0;
}

