#include <stdio.h>


int main (void)
{
	int arrOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char * arrOfDay[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"  };
	
	
	int i;
	int month, day;
	int temp = 0;
	
	
	scanf("%d",&month);
	scanf("%d",&day);
	
	for(i=0; i<month-1; i++)
		temp = temp+arrOfMonth[i];
	temp+=day;
	
	temp  %= 7;
	
	printf("%s",arrOfDay[temp]);
	
}