#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int arr[100000];

int main (void)
{
    int n,m,tmp;
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    scanf("%d",&m);
    for(int i = 0; i<m; i++)
    {
        scanf("%d",&tmp);
        printf("%d\n",binary_search(arr,arr+n,tmp));
    }
}