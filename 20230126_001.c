#include <stdio.h>

int main() {
	int i, j, n=3, m=5;
	float m1[n][m], m2[n][m], soma[n][m];

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d,%d da primeira matriz:\n", i+1, j+1);
			scanf("%f", &m1[i][j]);
		}
	}
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d,%d da segunda matriz:\n", i+1, j+1);
			scanf("%f", &m2[i][j]);
			soma[i][j] = m1[i][j] + m2[i][j];
		}
	}

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("%.1f ", soma[i][j]);
		}
		printf("\n");
	}

	return 0;
}
