#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
}