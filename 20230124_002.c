#include <stdio.h>

void print_seque(int n, float seque[]) {
	int i;

	for (i = n-1; i >= 0; i--) {
		printf("%.1f ", seque[i]);
	}

	printf("\n");
}

int main() {
	int n, i;
	float a, v[100];

	printf("Digite o tamanho da sequ�ncia (at� 100): ");
	scanf("%d", &n);
	while (n>100) {
	printf("N�mero maior que 100");
	printf("Digite o tamanho da sequ�ncia (at� 100): ");
	scanf("%d", &n);
	}

	for (i = 0; i < n; i++) {
		printf("Digite o n�mero: ");
		scanf("%f", &a);
		v[i] = a;
	}

	print_seque(n, v);

	return 0;
}
