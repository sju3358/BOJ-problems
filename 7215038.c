#include <stdio.h>

long long fibo(long long * fiboArr, int n)
{
	if(fiboArr[n] == -1)
		fiboArr[n] = fibo(fiboArr, n-1) + fibo(fiboArr, n-2);
	
	return fiboArr[n];
}




int main (void)
{	
	long long fiboArr[91] = {0, 1};
	int i;
	int n;
	
	for(i=2; i<91; i++)
		fiboArr[i] = -1;
	
	scanf("%d",&n);
	
	
	printf("%lld",fibo(fiboArr, n));
}