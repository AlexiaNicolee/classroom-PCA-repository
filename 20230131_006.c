#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exercicio06() {
    char string[255] = "socorram me subi no onibus em marrocos";

    removeeSpacos(string);
    stringToUpper(string);
    isPalindromo(string) == 1 ? printf("\nString eh um palindromo") : printf("\nString nao eh um palindromo");
}
