#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num1, soma = 0;

    printf("A soma de 50 numeros inteiros e a soma dos numeros impares \n\n");

    for(i =1; i <= 50; i++){
        scanf("%d",&num1);

        if(num1 % 2 != 0){
            soma += num1;
        }
    }

    printf("Soma dos impares de 1 a 50: %d\n\n", soma);

    return 0;
}
