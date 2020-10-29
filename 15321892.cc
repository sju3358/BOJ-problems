#include <stdio.h>
#include <algorithm>


int main (void)
{
    int arr[3];

    while(1)
    {
        for(int i = 0; i<3; i++) {scanf("%d",&arr[i]);}

        std::sort(arr, arr+3);

        if(arr[0] ==  arr[1] && arr[1] == arr[2])
            break;

        if((arr[0]*arr[0]) + (arr[1]*arr[1]) == (arr[2]*arr[2]))
            printf("right\n");
        else
        {
            printf("wrong\n");
        }
            
    }
}