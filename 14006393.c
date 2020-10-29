#include <stdio.h>


int main (void)
{
    int input[9];
    int i,j,k,min,temp;
    int sum = 0;

    for(i=0; i<9; i++)
    {
        scanf("%d",&input[i]);
        sum += input[i];
    }

    for(i=0; i<9; i++)
    {
        min = i;
        for(j=i; j<9; j++)
        {
            if(input[j] < input[min])
                min = j;
        }
        temp = input[min];
        input[min] = input[i];
        input[i] = temp;
    }

  

    for(i=0; i<9; i++)
        for(j=i; j<9; j++)
        {
            if(sum - input[i] - input[j] == 100)
            {
                for(k=0; k<9; k++)
                {
                    if(k == i || k == j)
                        continue;
                    else
                    {
                        printf("%d\n",input[k]);
                    }
                    
                }
                return 0;
            }
        }
}