#include <stdio.h>

int main() {

	int n, i;
	float a, v[100];

	printf(" tamanho da sequência,até 100: ");
	scanf("%d", &n);
	while (n>100) {
	printf("Número maior que 100");
	printf("Tamanho da sequência,até 100: ");
	scanf("%d", &n);
	}

	for (i=0; i<n; i++) {
		printf("Digite o número: ");
		scanf("%f", &a);
		v[i] = a;
	}

	for (i=n-1; i>=0; i--) {
		printf("%.1f ", v[i]);
	}

	printf("\n");

	return 0;
}
}

void print_int(int h){
    printf ("Hiperfatorial eh = %d", h);
}
