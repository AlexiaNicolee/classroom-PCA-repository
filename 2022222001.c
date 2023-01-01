#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num,i,soma;
	soma = 0;

	for (i=0; i<5; i++)
    {
		printf("Digite um numero: ");
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("%d", soma);

    return 0;
}
