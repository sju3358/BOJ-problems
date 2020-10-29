#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n / 2 + n % 2); j++)
			printf("* ");
		printf("\n");
		for (j = 0; j < n / 2; j++)
			printf(" *");
		printf("\n");
	}
}