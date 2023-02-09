void exercicio01() {
    int x, y,maio, menor;

    printf("[01] Digite (x) valor\n");
    x = scanIntIntervalo();
    printf("[01] Digite (y) valor\n");
    y = scanIntIntervalo();

    if (x > y) {
        maior = y;
        menor = x;
    } else {
        menor = x;
        maior = y;
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);

    float porcentagem = getPercent(menor, maior);
    printf("Porcentagem = %.2f %%\n", porcentagem);

    float dif = absDif(x, y);
    printf("Diferenca absoluta = %.0f\n", dif);

return 0;
    }
