#include <stdio.h>


int main(void)
{
	int n;
	int i = 1;
	int cnt;
	scanf("%d",&n);

	while(1)
	{
		if (i*(i + 1) / 2 >= n)
			break;
		i++;
	}
	i = i - 1;
	n = n - i*(i+1)/2;
	i = i + 1;
	
	if (i % 2 == 0)
		printf("%d/%d", n, i - n + 1);
	else
		printf("%d/%d",i-n+1,n);
}