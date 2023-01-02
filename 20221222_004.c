#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count,i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for ( i = 1; i <= 10; i++)
    {
        if(num % i == 0 ){
            count += 1;
        }
    }

    if (count > 2){
        printf("Esse numero nao eh primo");
    }

    else{
        printf("Esse numero eh primo");
    }
    return 0;
}
