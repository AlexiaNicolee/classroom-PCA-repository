#include <stdio.h>

int main() {
	int i, j, n, m, v1, v2, soma = 0;
	char itn[1000];

	printf("Digite as dimensões das Matrizes:\n");
	printf("Número de linhas: ");
	scanf("%d", &n);

	printf("Número de colunas: ");
	scanf("%d", &m);

	int m1[n][m]; //= {{4,1,2,3},{5,2,1,400},{2,1,3,8},{7,1,2,5}};

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("Digite o elemento %d, %d da matriz:\n", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Digite o itinerario: ");

	scanf("\n%[^\n]s", itn);

	i = 0;
	while(itn[i]!='\0'){
		v1 = (int) itn[i] - 48;

		if (itn[i+1]!='\0') {
			v2 = (int) itn[i+2] - 48;
			soma += m1[v1][v2];
		}
		i += 2;
	}

	printf("%d\n", soma);

	return 0;
}
