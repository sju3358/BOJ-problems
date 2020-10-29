#include <stdio.h>

int main (void)
{
	int x,y,z;

	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);

	printf("%d\n",(x+y)%z);
	printf("%d\n",(x%z+y%z)%z);
	printf("%d\n",(x*y)%z);
	printf("%d\n",(x%z*y%z)%z);
}