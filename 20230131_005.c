#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exercicio05() {
    char string[255] = "a ligeira raposa marrom saltou sobre o cachorro cansado";
    stringParaCima(string);
    shift(string, 3);

    printString(string);
}

int EPalindromo(char *string) {
    int result = 1;
    for (int i = 0, e = strlen(string) - 1; i < strlen(string) / 2; i++, e--) {
        if (string[i] != string[e]) result = 0;
    }
    return result;
}

void removerSpacos(char *string) {
    deleteChar(string, ' ');
}
