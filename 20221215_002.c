#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notabimestre1,notabimestre2 ,notabimestre3 ,notabimestre4, media;
    printf("\n media entre os 4 bimestres");

    printf("\n Entre com a nota bimestre 1 :");
    scanf ("%d",&notabimestre1 );

    printf ("\n Entre com a nota bimestre 2:");
    scanf ("%d",&notabimestre2 );

    printf ("\n Entre com a nota bimestre 3:");
    scanf ("%d",&notabimestre3 );

    printf ("\n Entre com a nota bimestre 4:");
    scanf ("%d",&notabimestre4 );

    media = (notabimestre1 + notabimestre2 + notabimestre3 + notabimestre4) /4 ;
    printf("\n A media entre a nota do bimestre 1 eh %d ,\n a nota do bimestre 2  eh %d,\n a nota do bimestre 3 eh %d ,\n a nota do bimestre 4 eh %d,\n a media eh %d",notabimestre1,notabimestre2 ,notabimestre3 ,notabimestre4, media);
    // a media de 4 notas bimestrais

    return 0;
}
