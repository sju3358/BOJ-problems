#include <stdio.h>



int main (void)

{
	
	
	int n1,n2;
	int temp;
	
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	temp = (n1%10)*100;
	n1 = n1/10;
	temp += (n1%10)*10;
	n1 = n1/10;
	temp += n1;
	
	n1 = temp;
	
	
	temp = (n2%10)*100;
	n2 = n2/10;
	temp += (n2%10)*10;
	n2 = n2/10;
	temp += n2;
	
	n2 = temp;
	
	printf("%d", n1>n2 ? n1 : n2);
	
}