#include <stdio.h>

int main (void)
{
    int a,b;

    
    while(1)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==0 && b==0)
            break;
        if(a<b && b%a ==0)
        {
            printf("factor\n");
        }
        else if(a>b && a%b==0)
            printf("multiple\n");
        else
        {
            printf("neither\n");
        }
        
    }
}