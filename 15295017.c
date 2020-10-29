#include <stdio.h>

int main (void)
{
    int t;
    int w,h,cus;
    int floor, number;
    int result;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&h,&w,&cus);

        for(int i = 1; i<=h*w; i++)
        {
            if(h*(i-1) < cus && cus <= h*i)
            {
                number = i;
                break;
            }
        }
        floor = cus - (h*(number-1));
        
        result = (floor*100) + number;

        printf("%d\n",result);
    }
}