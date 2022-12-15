#include    <stdio.h>



void exercicio03() {
    float totalConta, PorcentagemDoGarcom;

    printf("Exercicio 03 - Forneça o valor da conta e a porcentagem dada ao garçom(Obs: Forneça a porcentagem em valor decimal) \n");
    scanf("%f %f", &totalConta, &PorcentagemDoGarcom);

    float totalDoGarcom = totalConta *  (PorcentagemDoGarcom/ 100 );
    printf("O garcom precisa receber R$%.2f", totalDoGarcom);
}

int main() {

    exercicio03();

    return 0;
}