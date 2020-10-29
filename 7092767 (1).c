#include <stdio.h>

void main (void)
{
    int i,n,temp;
    int result = 0;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        scanf("%1d",&temp);
        result += temp;
    }
    printf("%d",result);
}