#include <stdio.h>
int main (void)
{
	int a,b;
	int c[3],result;
	int i;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(i=0; i<3;i++)
	{
		c[i] = a * (b%10);
		b = b/10;
	}
	
	
	result = c[0] + (c[1]*10) + (c[2]*100);
	
	
	printf("%d\n",c[0]);
	printf("%d\n",c[1]);
	printf("%d\n",c[2]);
	printf("%d\n",result);
}