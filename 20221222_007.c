#include<stdio.h>
#include <math.h>

int main(){
    float massa,massaInicial;
    int voltas,tempo2,horas,minutos,segundos;

    printf("Massa: ");
    scanf("%f", &massa);
    massaInicial = massa;
    do
    {
        massa = massa/2;
        voltas++;
    } while (massa>0.5);

    tempo2 = 50* voltas;
    horas = trunc(tempo2/3600);
    minutos = trunc(tempo2 - horas*3600)/60;
    segundos = tempo2 - minutos*60 - horas*3600;

    printf("Massa inicial eh: %.2f\nMassa final eh: %.2f\n Tempo total eh: %d horas %d minutos e %d segundos ",massaInicial, massa, horas, minutos, segundos);

    return 0;
    }

