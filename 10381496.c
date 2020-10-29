#include <stdio.h>



int main (void)
{

	int arr1[] = {0,500, 300, 200, 50, 30, 10}; // 1,2,3,4,5,6
	int arr2[] = {0,512, 256, 128, 64, 32}; // 1,2,4,8,16
	
	int ref1[] = {0,1,3,6,10,15,21};
	int ref2[] = {0,1,3,7,15,31};
	int T;
	int a,b;
	int result = 0;
	
	int i;
	
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		
		for(i = 0 ; i<7 ; i++)
			if(a <= ref1[i])
			{
				result += arr1[i];
				break;
			}
		
		for (i = 0; i<6; i++)
			if(b <= ref2[i])
			{
				result += arr2[i];
				break;
			}
		
	
		printf("%d\n",result*10000);
		
		result = 0;
		a = 0;
		b = 0;
		
	}
	
}