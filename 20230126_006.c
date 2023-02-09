#include <stdio.h>

int main()
{
	int i, j, k, n=5, m=5, s = 0, soma = 0;
	int m1[n][m];

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d,%d da matriz:\n", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
		s += m1[i][m-1]; // guarda a soma da �ltima coluna
	}

	for (i=0; i<n; i++) { // verifica a soma de cada linha

		soma = 0;

		for (j=0; j<m; j++) soma += m1[i][j];
		if (soma != s) {
			printf("N�o eh um quadrado magico\n");

			return 0;
		}
	}

	for (i=0; i<n; i++) { // verificae soma cada coluna

		soma = 0;

		for (j=0; j<m; j++) soma += m1[j][i];
		if (soma != s) {
			printf("N�o eh um quadrado magico\n");

			return 0;
		}
	}

	soma = 0;
	for (i=0; i<n; i++) soma += m1[i][i]; // soma diagonal principal

	if (soma != s) {
		printf("N�o � um quadrado m�gico\n");

		return 0;
	}

	soma = 0;

	for (i=0; i<n; i++) soma += m1[i][n-1-i];  // soma diagonal segund�ria
	if (soma != s) {
		printf("N�o eh um quadrado magico\n");

		return 0;
	}

	printf("Eh um quadrado m�gico\n");

	return 0;
}
