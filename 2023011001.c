int getDigiteRepeticao(int n, int d) {
    int conte = 0;

    while (n) {
        int res = n % 10;

        if (res == d) conte++;

        n /= 10;
    }

    return conte;
}

void exercicio01() {
    int n, d;

    printf("Ex 01:\n");
    scanf("%d %d", &n, &d);

    printf("Digite %d apenas %d vezes", d, getDigiteRepeticao(n, d));
}

/* Exercicio 02 */
int verifiquePermutacao(int a, int b) {
    int EPermutacao = 1;

    for (int i = 1; i <= 9; i++) {
        if (getDigiteRepeticao(a, i) != getDigiteRepeticao(b, i)) EPermutacao = 0;
    }

    return EPermutation;
}
    return 0;
}
