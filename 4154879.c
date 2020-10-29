#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	int i,j;
	int score = 0;
	int sum = 0;
	int n;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", str);
		for (j = 0; j < strlen(str); j++)
		{
			if(str[j] == 'O')
				score++;
			else
				score = 0;
			sum += score;
		}
		printf("%d\n", sum);
		score = 0;
		sum = 0;
	}

}