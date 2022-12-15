#include <stdio.h>


void exercicio01() {
    float base, altura, area;

    printf("Exercicio 01 - escreva a base e altura :");
    scanf("%f %f", &base, &altura);

    area = base * altura / 2;
    printf("Area = %.2f\n", area);
}



int main() {

    exercicio01();
   
    return 0;
}