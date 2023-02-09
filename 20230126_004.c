#include <stdio.h>

int main() {
	int i, j, k, n=3, m=3;
	int m1[n][m], res[n][m];

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d,%d da matriz:\n", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Digite o número a ser encontrado na matriz: ");
	scanf("%d", &k);

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			if (m1[i][j] == k) {
				printf("%d está na posição %d,%d\n", k, i+1, j+1);
				return 0;
			}
		}
	}

	printf("Não encontrado\n");

	return 0;
}
