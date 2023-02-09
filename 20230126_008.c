#include <stdio.h>

int main() {
	int i, j, k, n1, m1, n2, m2;

	printf("Digite as dimensões da primeira Matriz:\n");
	printf("Número de linhas: ");
	scanf("%d", &n1);

	printf("Número de colunas: ");
	scanf("%d", &m1);

	printf("Digite as dimensões da primeira Matriz:\n");
	printf("Número de linhas: ");
	scanf("%d", &n2);

	if (m1 != n2) {
		printf("Não é possível multiplicar as matrizes.\n");


		return 0;
	}
	printf("Número de colunas: ");
	scanf("%d", &m2);

	float mtrx1[n1][m1], mtrx2[n2][m2], res[n1][m2], mult;

	for (i=0; i<n1; i++) {
		for (j=0; j<m1; j++) {
			printf("Digite o elemento %d, %d da primeira matriz:\n", i+1, j+1);
			scanf("%f", &mtrx1[i][j]);
		}
	}
	for (i=0; i<n2; i++) {
		for (j=0; j<m2; j++) {
			printf("Digite o elemento %d, %d da segunda matriz:\n", i+1, j+1);
			scanf("%f", &mtrx2[i][j]);
		}
	}

	printf("O resultado da multiplicação eh:\n");

	for (i=0; i<n1; i++) {
		for (j=0; j<m2; j++) {
			mult = 0;

			for (k=0; k<m1; k++) mult += mtrx1[i][k] * mtrx2[k][j];
			res[i][j] = mult;
			printf("%.1f ", mult);
		}
		printf("\n");
	}

	return 0;
}
