#include <stdio.h>

int main() {
	int i, j, k, n=5, m=5, soma = 0;
	int m1[n][m], res[n][m];

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d,%d da matriz:\n", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Diagonal principal: ");
	for (i=0; i<n; i++) printf("%d ", m1[i][i]);

	printf("\nDiagonal secundária: ");
	for (i=0; i<n; i++) printf("%d ", m1[i][n-1-i]);

	printf("\nSoma da linha 4: ");

	for (i=0; i<n; i++) soma += m1[3][i];
	printf("%d \n", soma);
	printf("Soma da coluna 2: ");

	soma = 0;

	for (i=0; i<n; i++) soma += m1[i][1];
	printf("%d \n", soma);

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			if (i!=j) printf("%d\t", m1[i][j]);
			else printf("\t");
		}
		printf("\n");
	}


	return 0;
}
