#include <stdio.h>

int get_impar(int n, int seque[], int r[]) {
	int i, m = 0;

	for (i = 0; i < n; i++) {
		if (seque[i]%2 != 0) {
			r[m] = seque[i];
			m++;
		}
	}

	return m;
}

int main() {

	int n, m, i, a, v[100], v_impar[100];

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

	m = get_impar(n, v, v_impar);

	for (i=0; i<m; i++) {
		printf("%d ", v_impar[i]);
	}

	printf("\n");

	return 0;
}
