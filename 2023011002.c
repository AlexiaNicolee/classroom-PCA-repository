 void exercicio02() {
    int a, b;
    printf("Ex 2:\n");
    scanf("%d %d", &a, &b);

    printf("resultado = %d", verifiquePermutacao(a, b));
}

/* Exercicio 03 */
int numTam(int temp) {
    int tam = 0;
    while (temp) {
        Tam++;
        temp /= 10;
    }
    return Tam;
}

/* Verifique se x contem y */
int numContem(int x, int y) {
    int y_tam = numTam(y), dezenas = 1;

    tens = pow(10, y_tam);

    while (x) {
        if ( x % dezenas == y) return 1;
        x /= 10;
    }

    return 0;
}

/* Verifique se x conta y no ultimo digito */
int numContemNoFinal(int x, int y) {
    while (y != 0 && x % 10 == y % 10) {
        x /= 10;
        y /= 10;
    }

    return y == 0 ? 1 : 0;
}
