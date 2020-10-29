#include <stdio.h>
int main()
{
	int month, day;
	int i, sum = 0;
	int month_last_day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char * str[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	scanf("%d", &month);
	scanf("%d", &day);

	for (i = 0; i < month - 1; i++)
	{
		sum = sum + month_last_day[i];
	}
	sum = sum + day;
	printf("%s", str[sum % 7]);
}
