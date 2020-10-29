#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int arr[100];

int main(void)
{
    int n,m;
    int i,j,k;
    int dif = 999999999,result = 0;
    int temp;

    scanf("%d %d",&n,&m);

    for(i = 0; i<n; i++)
        scanf("%d",&arr[i]);

    for(i = 0; i<n-2; i++)
        for(j=i+1; j<n-1; j++)
            for(k = j+1; k<n; k++)
            {
                temp = arr[i] + arr[j] + arr[k];
                int cnt = m-temp;
                if(cnt >= 0 && cnt < dif)
                {
                    dif = cnt;
                    result = temp;
                }
            }
    printf("%d",result);
}