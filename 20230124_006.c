#include <stdio.h>

int menor(int l[], int n) {
	int menor = 0;
	for (int i=0; i<n; i++) if (l[i] < l[menor]) menor = i;

	return menor;
}

int sel_sort(int l[], int n) {
	int i, j, l0;
	int men;

	for (i=0; i<n; i++) {
		l0 = l[i];
		men = menor(l+i, n-i) + i;
		if (l0>l[men]) {
			l[i] = l[men];
			l[men] = l0;
		}
	}

	return 0;
}

int main() {
	int i, n;

	printf("Digite o tamanho: ");
	scanf("%d", &n);

	int lista[n];
	printf("Digite os valores:\n");
	for (i=0; i<n; i++) {
		scanf("%d", &lista[i]);
	}

	sel_sort(lista, n);

	for (i=0; i<n; i++) printf("%d ", lista[i]);
	printf("\n");

	return 0;
}
