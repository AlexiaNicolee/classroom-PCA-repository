void exercicio 05()
{
    /*somente valores positivos */

    int greater, lowest, num;

    do {
        printf("\n Exercicio 5 - 20 numeros inteiros positivos\n");

        scanf("%d", &num);

        if(num < 0) {
            printf("Apenas numeros positivos sao aceitos,tente novamente. \n");
            continue;
        }

        maior = num;
        menor = num;

        int i = 0;

        while(i < 19) {
            scanf("%d", &num);

            if(num < 0) {
                printf("Apenas numeros positivos sao aceitos,tente novamente \n");
                continue;
            }

            if(maior < num) {
                maior = num;
            }

            if(menor > num) {
                menor = num;
            }

            i++;
        }

        printf("Maior = %d | Menor = %d\n", maior, menor);
    } while(num < 0);
}
