#include <stdio.h>
int main()
{
	int n, x;
	int temp;
	int i;
	scanf("%d", &n);
	scanf("%d", &x);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp < x)
			printf("%d ", temp);
	}

}
