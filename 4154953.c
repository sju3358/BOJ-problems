#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	int cnt;
	int i,j,k;
	char str[21];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &cnt);
		scanf("%s", str);
		for (j = 0; j < strlen(str); j++)
			for (k = 0; k < cnt; k++)
				printf("%c", str[j]);
		printf("\n");
	}
}