#include <stdio.h>

int main (void)
{
    int a,b;
    int n;

    

    for(;1;)
    {
       scanf("%d",&a);
       scanf("%d",&b);
       if(a==0 && b==0)
            break;
       printf("%d\n",a+b);
       
    }
}
