#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
    int number,count,soma;
    count=1;
    soma=0;

    printf("Digite um numero: ");
    scanf("%d", &number);
    do
    {
        if (number % count == 0)
        {
            soma = soma + count;
            count++;
        }
        else{
            count++;
        }
    } while (count < number);
    if (soma == number) {
        printf("O numero %d eh perfeito", number);
    }
    else{
        printf("O numero %d nao eh perfeito", number);
    }
    }
    return 0;
    }
