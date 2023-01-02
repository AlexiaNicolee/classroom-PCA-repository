#include<stdio.h>
#include <math.h>

int main(){
     int c1, c2, H, K;

    printf("Hipotenusa Maxima:");
    scanf("%d", &H);

    while(H <= 0){
        printf("Digite um valor maior que zero\n Hipotenusa maxima: \n");
        scanf("%d", &H);
        }

    for (c1 = 1; c1 <= H; c1++)
        {
        for (c2 = 1; c2 <= c1; c2++)
        {
            for(K = 1; K <= H; K++)
            {
                if ((c2*c2) + (c1*c1) == K*K)
                {
                    printf("Os catetos %d e %d ,tem como hipotenusa = %d\n", c1, c2, K);
                }
            }
        }
    }
  return 0;
}
