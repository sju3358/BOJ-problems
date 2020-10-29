#include <stdio.h>
#include <string.h>


int main (void)
{
	
	char string[1000000];
	int size;
	int i;
	char temp;
	int max = -1;
	int max_index = 0;
	int cnt = 0;
	
	int count[26]={0,};
	
	
	scanf("%s",string);
	size = strlen(string);
	
	for(i=0; i<size; i++)
	{
		temp = string[i];
		
		if('A' <= temp && temp <= 'Z')
			count[temp - 65]++;
		else if('a' <= temp && temp <='z')
			count[temp - 97]++;
	}
	
	for(i=0; i<26; i++)
	{
		if(count[i] > max)
		{
			max = count[i];
			max_index = i;
			cnt = 0;
		}
		else if (count[i] == max)
			cnt = 1;
	}
	
	if(cnt == 1)
	{
		printf("?");
		return 0;
	}
	
	printf("%c",max_index+65);

	return 0;
	
}