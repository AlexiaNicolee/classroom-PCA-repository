#include <stdio.h>

int main() {

	int n, i;
	float a, v[100];

	printf(" tamanho da sequ�ncia,at� 100: ");
	scanf("%d", &n);
	while (n>100) {
	printf("N�mero maior que 100");
	printf("Tamanho da sequ�ncia,at� 100: ");
	scanf("%d", &n);
	}

	for (i=0; i<n; i++) {
		printf("Digite o n�mero: ");
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
