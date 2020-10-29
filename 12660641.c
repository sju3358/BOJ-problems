#include <stdio.h>

int fill_tile(int n, int (*arr))
{
    if(n ==1)
        return 1;
    else if (n == 2)
        return 3;
    else
    {
        if(arr[n] != 0)
            return arr[n];
        else
            return arr[n] = (fill_tile(n-1,arr) + 2*fill_tile(n-2,arr))%10007; 
    }
}

int main (void)
{
    int arr[1001] = {0,};
    int n;

    scanf("%d",&n);
    printf("%d",fill_tile(n,arr)%10007);
}