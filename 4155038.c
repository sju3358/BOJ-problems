#include <stdio.h>

int f_data[45] = { 1, 1 }; // N은 정의하기 나름
int last_pos = 1; // 마지막으로 계산한 지점
int f(int n)
{
	int i;
	if (f_data[n - 1] == 0)
		// 아직 구한 적이 없으면 구한다
	{
		for (i = last_pos + 1; i<n; ++i)
		{
			f_data[i] = f_data[i - 1] + f_data[i - 2];
		}
		last_pos = n - 1;
	}
	return f_data[n - 1];
}

int main()
{
	int i;

	scanf("%d", &i);
	printf("%d", f(i));

}