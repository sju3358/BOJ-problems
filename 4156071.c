#include <stdio.h>

int cnt;
int num;

void printStar(int n)
{
	int i;

	if (cnt == 1 && n == num + 1)
		return;

	if (n == 1)
		cnt = 1;

	for (i = n; i > 1; i--)
		printf(" ");
	for (i = n; i<=num; i++)
		printf("*");
	printf("\n");

	if (cnt == 0)
		printStar(n - 1);
	else
		printStar(n + 1);



}


int main()
{
	int n;
	scanf("%d", &n);
	num = n;
	printStar(n);
}