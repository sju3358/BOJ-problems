#include <stdio.h>

int main (void)
{
    int x,y,w,h;

    int min1,min2,min;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&w);
    scanf("%d",&h);

    min1 = x < w-x ? x : w-x;
    min2 = y < h-y ? y : h-y;
    min = min1 < min2 ? min1 : min2;

    printf("%d",min);     
}