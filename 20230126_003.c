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

	printf("Digite o escalar para multiplicar a matriz: ");
	scanf("%d", &k);
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			res[i][j] = m1[i][j]*k;
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}

	return 0;
}
