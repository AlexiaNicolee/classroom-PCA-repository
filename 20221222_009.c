#include<stdio.h>
#include <math.h>

int main(){

    int m, n, x, y, a, b, resultado, maior=0;

    printf("Valor de M =");
    scanf("%d", &m);

    printf("\nValor de N =");
    scanf("%d", &n);

    while(m<0 || n<0){
    	printf("Insira valores maiores que zero:\n");
        if(m < 0){
            printf("valor para m:  ");
    	    scanf("%d", &m);
        }
        if(n < 0){
            printf("valor para n:  ");
    	    scanf("%d", &n);
        }
    }
    for (x = 0; x <= m; x++)
        {
        for (y = 0; y <= n; y++)
        {
            resultado = x*y - x*x + y;
            if(resultado >= maior)
            {
            maior = resultado;
            a = x;
            b = y;
            }
        }
    }
        printf("Os valores de x e y para valor maximo sao de %d e % d cujo resultade eh de %d",a, b, maior);

  return 0;
}
