#include <stdio.h>
long long a,b,c,k;
int main (void)
{
    
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%lld",&c);
    
    if(!(c-b)){
        printf("-1");
        return 0 ;
    }
    
    k = (a/(c-b))+1;

    if( k <= 0)
        printf("-1");
    else
        printf("%lld",k);
}