#include <stdio.h>

int main () {

    float num,num_maior,num_menor;
    int i;

    for (i = 0; i < 15; i++){
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (i == 0){
            num_maior = num;
            num_menor = num;
        }

        else if (num > num_maior){
            num_maior = num;
        }

        else if (num < num_menor){
            num_menor = num;
        }
    }

    printf("\n O maior numero eh: %f \n O menor numero eh: %f", num_maior, num_menor);

    return 0;
}
