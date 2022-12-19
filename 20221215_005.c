#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado,area,area2;

    printf ("Area de um quadrado \n Insira o valor do lado a: \n ");
    scanf("%f", &lado);
    
    area = (lado*lado);
    area2 = (2*area);
    
    printf("A area eh %f e o dobro da area eh %f \n",area,area2);

    return 0;
}
