#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num1, soma = 0;

    printf("A soma dos numeros impares entre 100 e 200 que sejam impares \n\n");

    for(i =1 ; 100 <= i <= 200; i++){
        scanf("%d",&num1);

        if(num1 % 2 != 0){
            soma += num1;
        }
    }

    printf("Soma dos impares de 100 a 200: %d\n\n", soma);

    return 0;
}
