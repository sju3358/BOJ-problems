#include <stdio.h>

int main (void)
{
    int n,result = 1;;
    scanf("%d",&n);
    
    for(int i=0;i<n; i++ )
    {
        result *= (n-i);
    }
    printf("%d",result);
}