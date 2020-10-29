#include <stdio.h>

int main()
{
	int a, b, c;
	int arr[10] = { 0, };
	int i;
	int times;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	times = a*b*c;
	while (1)
	{
		if (times == 0)
			break;

		arr[times % 10]++;
		times = times / 10;

	}
	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	
}