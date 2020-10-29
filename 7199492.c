#include <stdio.h>
#include <stdlib.h>


float isAboveTheAverage (int * tempArr, int numOfStudent)
{
	float avr;
	float result;
	int sum = 0;
	int cnt = 0;
	int i;
	
	for(i=0; i<numOfStudent; i++)
		sum += tempArr[i];
	
	avr = sum / numOfStudent;
	
	for(i=0; i<numOfStudent; i++)
		if(tempArr[i] > avr)
			cnt ++;
		   
	if(cnt != 0)
		result = ((float)cnt/(float)numOfStudent)*100;
	else
		result = 0;
	
	return result;
	
}


int main (void)
{
	
	int i,j;
	int TESTCASE;
	int numOfStudent;
	int * tempArr;
	
	float * result;
	
	scanf("%d",&TESTCASE);
	result = (float*)malloc(sizeof(float)*TESTCASE);
	
	for(i = 0; i< TESTCASE; i++)
	{
		scanf("%d",&numOfStudent);
		tempArr = (int*)malloc(sizeof(int)*numOfStudent);
		for(j=0; j<numOfStudent; j++)
			scanf("%d",&tempArr[j]);
		result[i] = isAboveTheAverage(tempArr, numOfStudent);
		free(tempArr);
	}
	
	for(i=0; i<TESTCASE; i++)
		printf("%0.3f%\n",result[i]);
	free(result);
	
}
