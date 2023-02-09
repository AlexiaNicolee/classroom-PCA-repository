#include <stdio.h>
#include <string.h>

int main()
{
    int i, econ=0;
    char mod[5][1000];
    float consumo[5], dist;

    for (i=0; i<5; i++) {
        printf("Digite o modelo do carro: ");
        scanf(" %s", mod[i]);

        printf("Digite o consumo do carro (Km/L): ");
        scanf(" %f", &consumo[i]);

        if (consumo[i] > consumo[econ]) econ = i;
    }

    printf("Digite a distância em quilômetros: ");
    scanf("%f", &dist);

    printf("O modelo mais economico eh o %s\n", mod[econ]);
    printf("Para percorrer %.2f quilometros, eh necessario:\n", dist);

    for (i=0; i<5; i++) printf("%s: %.2f Litros\n", mod[i], dist/(consumo[i]));


    return 0;
}
