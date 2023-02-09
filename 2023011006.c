long long decimalParaBinario(int n) {
    long long bin = 0;
    int rem, i = 1;

    while (n!=0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

void exercicio06() {
    int dec;
    scanf("%d", &dec);
    printf("Binario = %lld\n", decimalParaBinario(dec));
}
return 0 ;
}

