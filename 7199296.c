#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int size;
	float * arr;
	
	int i;
	
	int max = -1;
	int temp;
	
	float result = 0.0;
	float sum = 0.0;
	
	
	scanf("%d",&size);
	
	arr = (float*)malloc(sizeof(float)*size);
	
	for(i=0; i<size; i++)
	{
		scanf("%f",&arr[i]);
		temp = arr[i];
		if(temp > max)
			max = temp;
	}
	
	for(i=0; i<size; i++)
	{
		arr[i] = arr[i] / max;
		sum += arr[i];
	}
	
	result = sum / size * 100;
	
	printf("%0.2f",result);
	
	free(arr);
	
}
