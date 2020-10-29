#include <stdio.h>

void main (void)
{
    int i=0;
    int j=0;
    char str[100];
    scanf("%s",str);
    
    while(1)
    {
        if(str[j] != 0)
            printf("%c",str[j]);
        else
            break;
        i++;
        j++;
        if(i == 10)
        {
            printf("\n");
            i=0;
        }
            
    }
    
}