int main(){
	int n,i,temp,sum = 0,max = -1001;scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &temp);
		sum = sum + temp;
		if (max < sum)max = sum;
		if (sum < 0)sum = 0;}
	printf("%d", max);}