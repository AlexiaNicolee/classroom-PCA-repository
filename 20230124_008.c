#include <stdio.h>

#include <stdio.h>

float scalar(float v1[], float v2[], int n) {
	int i;
	float p = 0;

	for (i=0; i<n; i++) {
		p += v1[i]*v2[i];
	}

	return p;
}

int main() {
	int i, n;

	float prod_scl;

	printf("Digite o número de elementos dos vetores: ");
	scanf("%d", &n);

	float v1[n], v2[n];
	printf("Digite os elementos do vetor 1:\n");
	for (i=0; i<n; i++) {
		scanf("%f", &v1[i]);
	}
	printf("Digite os elementos do vetor 2:\n");
	for (i=0; i<n; i++) {
		scanf("%f", &v2[i]);
	}

	prod_scl = scalar(v1, v2, n);

	printf("(");
	for (i=0; i<n; i++) {
		if (i<n-1) printf("%.1f, ", v1[i]);
		else printf("%.1f", v1[i]);
	}
	printf(").(");
	for (i=0; i<n; i++) {
		if (i<n-1) printf("%.1f, ", v2[i]);
		else printf("%.1f", v2[i]);
	}
	printf(") = %.2f\n", prod_scl);

	return 0;
}
