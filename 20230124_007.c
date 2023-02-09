#include <stdio.h>

int main() {
	int i, n, v, freq[]={0,0,0,0,0,0};

	printf("Digite o número de lançamentos: ");
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		printf("Digite o valor obtido: ");
		scanf("%d", &v);
		switch(v) {
			case 1:
				freq[0]++;
				break;
			case 2:
				freq[1]++;
				break;
			case 3:
				freq[2]++;
				break;
			case 4:
				freq[3]++;
				break;
			case 5:
				freq[4]++;
				break;
			case 6:
				freq[5]++;
				break;
		}
	}

	printf("Valor: Frequência\n");
	for (i=0; i<6; i++) {
		printf("%d: %d\n", i+1, freq[i]);
	}


}
