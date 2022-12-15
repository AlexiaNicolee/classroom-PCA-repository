#include <stdio.h>


void exercicio01() {
    float base, altura, area;

    printf("Exercicio 01 - escreva a base e altura :");
    scanf("%f %f", &base, &altura);

    area = base * altura / 2;
    printf("Area = %.2f\n", area);
}

void exercicio02() {
    float salario;

    printf("Exercicio 02 - Qual o seu salario?");
    scanf("%f", &salario);

    float novosalario = salario * 1.10;
    printf("Se o seu salario aumenta 10%%, voce ganhara R$%.2f\n", novosalario);
}

void exercicio03() {
    float totalConta, PorcentagemDoGarcom;

    printf("Exercicio 03 - Forneça o valor da conta e a porcentagem dada ao garçom(Obs: Forneça a porcentagem em valor decimal) \n");
    scanf("%f %f", &totalConta, &PorcentagemDoGarcom);

    float totalDoGarcom = totalConta *  (PorcentagemDoGarcom/ 100 );
    printf("O garcom precisa receber R$%.2f", totalDoGarcom);
}

int main() {

    exercicio01();
    exercicio02();
    exercicio03();

    return 0;
}