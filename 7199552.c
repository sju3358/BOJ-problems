#include <stdio.h>

int main (void)
{
	int n;
	int tensOfOrigin,unitOfOrigin, unit_temp;
	int cycle = 0;
	int origin, temp;
	
	scanf("%d",&n);
	origin = n;
	temp = n;
	
	
	do
	{
		tensOfOrigin = temp / 10;
		unitOfOrigin = temp % 10;
		
		unit_temp = (tensOfOrigin + unitOfOrigin) % 10;
		
		temp = unitOfOrigin*10 + unit_temp;
		
		cycle++;
		
	}while(temp != origin);
	
	printf("%d",cycle);
}

