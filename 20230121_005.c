#include <stdio.h>

int fator(int n) {
	int i, f=1;

	for (i=n; i>1; i--) f *= i;

	return f;
}

int fator_seque(int n, int seque[], int r[]) {
	int i;

	for (i = 0; i < n; i++) {
		r[i] = fator(seque[i]);
	}

	return 0;
}

int main() {
	int n, m, i, a, v[100], v_fat[100];

	printf("Digite o tamanho da sequência (até 100): ");
	scanf("%d", &n);
	while (n>100) {
	printf("Número maior que 100");
	printf("Digite o tamanho da sequência (até 100): ");
	scanf("%d", &n);
	}

	for (i=0; i<n; i++) {
		printf("Digite um número inteiro: ");
		scanf("%d", &a);
		v[i] = a;
	}

	fator_sequr(n, v, v_fat);

	for (i=0; i<n; i++) {
		printf("%d ", v_fat[i]);
	}

	printf("\n");

	return 0;
}
