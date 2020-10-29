#include <stdio.h>

unsigned long long int padovanSeq[101]={0,1,1,1,2,2};

long long find(int n)
{
    if(n<6)
        return padovanSeq[n];
    else
    {
        if(padovanSeq[n] != 0)
            return padovanSeq[n];
        else
            return padovanSeq[n] = find(n-1) + find(n-5);
        
    }
    
}

int main (void)
{
    int T,n;
    
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%llu\n",find(n));
    }
}