#include <stdio.h>
int main()
{
	int arr[3];
	int i,j,temp;
    
	for (i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	for(i=0; i<3; i++)
		for(j=i; j<3; j++)
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

	printf("%d", arr[1]);


}
