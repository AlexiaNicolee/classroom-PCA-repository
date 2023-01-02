#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    float si,sp,resto;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);
        resto = n % 2;
        if (resto == 0 && n <= 1000){
            sp += n;
        }
        else if (resto != 0 && n <= 1000) {
            si += n;
        }

    } while (n <= 1000);

    printf("A soma dos numeros pares eh: %.2f e dos impares eh: %.2f", sp, si);

    return 0;
}
