Void exercise04() {
    int num;
    printf("[04] Factorial\n");

    do {
        printf("Digite um numero. (numeros negativos sao invalidos)\n");
        scanf("%d", &num);
        printf("Factorial = %d\n", factorial(num));
    } while (num >= 0);
}

int factorial(int num) {
    if (num == 0 || num == 1) return 1;

    return num * factorial(num - 1);
};
}
return 0;
    }
