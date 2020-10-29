#include <stdio.h>


int main (void)
{
    int n,input;
    int max = -1000001,min = 1000001;
    scanf("%d",&n);

    for(int i= 0; i<n; i++)
    {
        scanf("%d",&input);
        if(max < input)
            max = input;
        if(min > input)
            min = input;
    }
    printf("%d %d",min, max);
}
