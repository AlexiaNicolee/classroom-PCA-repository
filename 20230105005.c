void exercicio05() {
    int num;

    printf("[05] Fibonacci\n");

    do {
        printf("Digite um numero. (nao pode ser negativo)\n");
        scanf("%d", &num);
        printf("Fibonacci = %d\n", fibonacci(num));
    } while (num >= 0);
}

int fibonacci(int num) {
    int anterior = 1, atual = 1;
    int proximo = anterior + atual;

    if (num == 0) return 0;
    if (num == 1 || num == 2) return 1;

    for (int i = 3; i <= num; i++) {
        proximo = anterior + atual;

        anterior = atual;
        atual = proximo;
    }

    return 0;
}
