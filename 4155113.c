#include <stdio.h>

int main(void)
{
	int N,K;
	int i;
	int sum1=1, sum2=1;

	

	scanf("%d", &N);
	scanf("%d", &K);

	K = (K < N - K) ? K : N - K;

    if(K == 0)
    {
        printf("1");
        return 0;
    }
	for (i = 0; i < K; i++)
	{
		sum1 = sum1*(i+1);
		sum2 = sum2*(N-i);
	}

	printf("%d", sum2 / sum1);

}