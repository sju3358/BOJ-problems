#include <stdio.h>
int map[15][15] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}};
int seq(int n,int k)
{
        if(map[n][k] != 0)
            return map[n][k];
        else
        {
            int temp = 0;
            for(int i = 1; i<=k; i++)
            {
                temp += seq(n-1,i);
            }
            return map[n][k] = temp;
        }
}


int main (void)
{
    int n,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        printf("%d\n",seq(n,k));
    }
}