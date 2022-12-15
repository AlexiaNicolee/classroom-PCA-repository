#include <stdio.h>



void exercicio02() {
    float salario;

    printf("Exercicio 02 - Qual o seu salario?");
    scanf("%f", &salario);

    float novosalario = salario * 1.10;
    printf("Se o seu salario aumenta 10%%, voce ganhara R$%.2f\n", novosalario);
}


int main() {

    
    exercicio02();
    
    return 0;
}