#include <stdio.h>

int arr [42];

int main (void)
{
    int input;

    for(int i=0; i<10; i++)
    {
        scanf("%d",&input);
        arr[input%42] = 1;
    }

    input = 0;
    
    for(int i=0; i<42; i++)
        if(arr[i])
            input++;

    printf("%d",input);
}