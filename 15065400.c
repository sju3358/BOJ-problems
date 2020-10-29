#include <stdio.h>

int main (void)
{
    int a,b,v,day;
    scanf("%int",&a);
    scanf("%int",&b);
    scanf("%int ",&v);

    if( !((v-a) % (a-b)) )
        day = ((v-a) / (a-b) + 1);
    else
        day = ((v-a) / (a-b) + 2);
    printf("%d",day);
}