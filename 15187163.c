#include <stdio.h>

int queue[1000000];

int main (void)
{
    int n,cnt = 1,tail,head = 0;
    
    scanf("%d",&n);
    
    tail = n-1;
    
    for(int i = 0; i<n; i++)
        queue[i] = i+1;
    
    while(head != tail)
    {
        if(cnt) 
        { 
            head++;
            cnt = 0; 
        }
        else
        {
            queue[++tail] = queue[head++];
            cnt = 1;
        }
    }
    printf("%d",queue[tail]);
}