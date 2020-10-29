#include <stdio.h>


int main (void)
{
    int n,input,index;;
    int max = -1000001,min = 1000001;
    
    for(int i= 0; i<9; i++)
    {
        scanf("%d",&input);
        if(max < input)
        {
            max = input;
            index = i+1;
        }
    }
    printf("%d\n%d",max, index);
}
