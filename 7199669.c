#include <stdio.h>

int main (void)
{
	int arr[5];
	int i;
	int sum = 0;
	float avr;
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] < 40)
			arr[i] = 40;
		
		sum += arr[i];
	}
	
	avr = sum /5;
	printf("%0.0f", avr);
	
		
}
