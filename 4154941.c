#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char str[101];
	int arr[26];
	int index;
	for (i = 0; i < 26; i++)
		arr[i] = -1;

	scanf("%s", str);

	for (i = 0; i < strlen(str); i++)
	{
		index = (int)str[i] - 97;
		
		if (arr[index] == -1)
			arr[index] = i;
	}

	for (i = 0; i < 26; i++)
		printf("%d ", arr[i]);
}