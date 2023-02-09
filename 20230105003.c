Void exercicio03() {
    int num;

    printf("[03] Digite num\n");
    num = ScanEVerifiqueNum();

    ONumPerfect(num) ? printf("%d eh perfeito. \n", num) : printf("%d nao eh perfeitot. \n", num);
}

int ScanEVerifiqueNum() {
    int num;
    scanf("%d", &num);

    while (num % 2 != 0 || num < 0) {
        if (num % 2 != 0) printf("Invalido: odd num. Tente novamente. \n");
        if (num < 0) printf("Invalido: negativo num. Tente novamente. \n");

        scanf("%d", &num);
    }

    return num;
}

int ONumPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if(num % i == 0) sum += i;
    }

    return sum == num ? 1 : 0;
}
return 0;
    }
