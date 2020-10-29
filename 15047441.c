#include <stdio.h>

int isPrimeNumber(int n)
{
    int flag = 1;
    if(n == 1)
        return flag = 0;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main (void)
{
    int n;
    int result = 0;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(int i = n+1; i<=2*n; i++)        
            if(isPrimeNumber(i))
                result++;
        printf("%d\n",result);

        result = 0;
    }
}