#include <stdio.h>
#include <stdlib.h>

void main() 
{
    float totalConta, PorcentagemDoGarcom;

    printf("Exercicio 03 - Forneça o valor da conta e a porcentagem dada ao garçom(A porcentagem deve ser em valor decimal) \n");
    scanf("%f %f", &totalConta, &PorcentagemDoGarcom);

    float totalDoGarcom = totalConta *  (PorcentagemDoGarcom/ 100 );
    printf("O garcom precisa receber R$%.2f", totalDoGarcom);

    return 0;
}
