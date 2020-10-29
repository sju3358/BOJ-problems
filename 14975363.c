#include <stdio.h>

int main (void)
{
    int h,m;

    scanf("%d",&h);
    scanf("%d",&m);

    if(m <45)
    {
        if(h == 0)
            h = 23;
        else
            h=h-1;
        
        m = 15+m;
    }
    else
    {
        m=m-45;
    }

    printf("%d %d",h,m);
}