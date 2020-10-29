#include <stdio.h>


int cut (int n, int m, int (*data)[301])
{
    int i,j;
    int min = 99999999;
    int temp;
    if(data[n][m] != 0)
        return data[n][m];
    else
    {
        if (n==1 && m == 1)
            return 0;
        else
        {
            for(i=1; i<n; i++)
            {
                temp = cut(n-i, m, data) + cut(i, m, data)+1;
                if(min > temp)
                    min = temp;
            }
            for(i=1; i<m; i++)
            {
                temp = cut(n, m-i, data) + cut(n, i, data)+1;
                if(min > temp)
                    min = temp;
            }
            data[n][m] = min;
            return data[n][m];
        }
    }
}


int main (void)
{
    int data[301][301] = {0,};


    int N,M;
    
    scanf("%d",&N);
    scanf("%d",&M);
    printf("%d",cut(N,M,data));
}
