#include <stdio.h>

int main (void)
{
    int a,b;
    int n;

    scanf("%d",&n);

    for(int i = 0; i<n; i++)
    {
       scanf("%d",&a);
       scanf("%d",&b);
       printf("%d\n",a+b);
    }
}
