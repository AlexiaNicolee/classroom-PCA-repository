#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n_maior,n_menor,count;
    for (count = 0; count< 5; count++)
        {
        printf("Digite um valor: ");
        scanf("%d", &n);

        if(n > n_maior){
            n_maior = n;
        }
        if(n < n_menor){
            n_menor = n;
        }
    }

    printf("O menor numero eh: %d e o maior eh: %d", n_menor, n_maior);

    return 0;
}
