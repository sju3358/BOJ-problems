#include <stdio.h>

int arr[7];

int div(int n)
{
    int i = 0;
    int temp = n;
    while(n)
    {
        temp += arr[i] = n%10;
        n /= 10;
    }
    return temp;
}

int main (void)
{
    int n;
    scanf("%d",&n);

    for(int i = 1; i<n; i++)
    {
        if(n == div(i)){
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
}