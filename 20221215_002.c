#include <stdio.h>
#include <stdlib.h>
    int main()
{
    int notabimestre1,notabimestre2 ,notabimestre3 ,notabimestre4, media;
    printf("\n Calculando a media entre os 4 bimestres");

    printf("\n Entre com a nota bimestre 1 : ");
    scanf ("%d",&notabimestre1 );

    printf ("\n Entre com a nota bimestre 2 : ");
    scanf ("%d",&notabimestre2 );

    printf ("\n Entre com a nota bimestre 3 : ");
    scanf ("%d",&notabimestre3 );

    printf ("\n Entre com a nota bimestre 4 : ");
    scanf ("%d",&notabimestre4 );

    media = (notabimestre1 + notabimestre2 + notabimestre3 + notabimestre4) /4 ;
    printf("\n A media entre os quatro bimestres eh %d", media);
    // a media de 4 notas bimestrais

    return 0;
}
