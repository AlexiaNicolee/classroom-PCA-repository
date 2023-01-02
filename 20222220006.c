#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n_1;
	for (i = 0; i <= 10; i ++)
        {
		n_1 = i * 1;
		printf("1 X %d = %d\n", i, n_1);
	}

	printf("\n");
	for (i = 0; i <= 10; i ++)
        {
		n_1 = i * 2;
		printf("2 X %d = %d\n", i, n_1);
	}
	printf("\n");

	for (i = 0; i <= 10; i ++)
	{
		n_1 = i * 3;
		printf("3 X %d = %d\n", i, n_1);
	}
	printf("\n");
	for (i = 0; i <= 9; i ++)
        {
		n_1 = i * 4;

		printf("4 X %d = %d\n", i, n_1);
	}

	printf("\n");

	for (i = 0; i <= 9; i ++)
        {
		n_1 = i * 5;
		printf("5 X %d = %d\n", i, n_1);
	}

	printf("\n");
	for (i = 0; i <= 9; i ++)
        {
		n_1 = i * 6;
		printf("6 X %d = %d\n", i, n_1);
	}
	printf("\n");

	for (i = 0; i <= 9; i ++)
        {
		n_1 = i * 7;
		printf("7 X %d = %d\n", i, n_1);
	}
	printf("\n");
	for (i = 0; i <= 9; i ++)
	{
		n_1 = i * 8;
		printf("8 X %d = %d\n", i, n_1);
	}
	printf("\n");
	for (i = 0; i <= 9; i ++)
	{
		n_1 = i * 9;

		printf("9 X %d = %d\n", i, n_1);
	}
    return 0;
}

