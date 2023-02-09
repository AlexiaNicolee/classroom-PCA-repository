#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char data[11];
  int dia, mes, ano;

  printf("Entre com a data no formato DD/MM/YYYY: ");
  scanf("%10s", data);

  if (strlen(data) != 10 || data[2] != '/' || data[5] != '/' ||
      !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3]) ||
      !isdigit(data[4]) || !isdigit(data[6]) || !isdigit(data[7]) ||
      !isdigit(data[8]) || !isdigit(data[9])) {
    printf("Invalid data format\n");
    return 1;
  }

  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[3] - '0') * 10 + (data[4] - '0');
  ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 +
         (data[8] - '0') * 10 + (data[9] - '0');

  printf("Dia: %d\nMes: %d\nAno: %d\n", dia,mes,ano);

  return 0;
}
