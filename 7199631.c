#include <stdio.h>

int isAscending (int * arr)
{
	int i;
	for(i=0; i<8; i++)
		if(arr[i] != i+1)
			return 0;
	return 1;
}


int isDescending ( int * arr)
{
	int i;
	for(i=0; i<8; i++)
		if(arr[i] != 8-i)
			return 0;
	return 1;
}




int main (void)
{
	
	int i;
	int arr[8];
	int cnt = 0;
	
	for(i=0; i<8; i++)
		scanf("%d",&arr[i]);
	
	
	if(isAscending(arr))
		printf("ascending");
	else if(isDescending(arr))
		printf("descending");
	else
		printf("mixed");
	
}
