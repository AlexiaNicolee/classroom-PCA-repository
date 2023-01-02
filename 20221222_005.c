#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i=1,soma,count;
    count=1;

    do
    {
        printf("\n\n i:%f  \n count:%f \n soma:%f", i, count, soma);
        soma = soma + (count / i);
        i++;
        count += 2;
        printf("\n A soma eh :%f", soma);
    } while (i < 51);

    return 0;
}
