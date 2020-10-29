#include <stdio.h>
#include <string.h>


int main (void)
{
	int costArr[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	int i;
	int lengthOfString;
	int cost=0;
	char dial[15];
	
	scanf("%s",dial);
	lengthOfString = strlen(dial);
	
	for(i=0; i<lengthOfString; i++)
		cost+=costArr[dial[i] - 65];
	printf("%d",cost);
}