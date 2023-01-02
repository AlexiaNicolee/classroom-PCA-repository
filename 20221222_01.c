#include <stdio.h>

int main () {

    float num,ap1,ap2,delta;

    do {
        printf("Calculando a raiz do numero: ");
        scanf("%f", &num);
    } while (num < 0);

    ap1 = num/2;

    do {
        ap2 = ap1 - (ap1*ap1 - num)/(2*ap1);
        delta = (ap2 - ap1);
        if(delta < 0){
            delta = delta*(-1);
        }

        ap1 = ap2;

    } while (delta > 0.1);

    printf("\n%f", ap1);

    return 0;
}
