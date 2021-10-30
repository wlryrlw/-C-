#include<stdio.h>
int main()
{
	int initial;
	int sum;
	
	scanf("%d %d",&initial,&sum);	
	
	int hour = initial / 100 + sum / 60;
	int min = initial % 100 + sum % 60;
	
	printf("%d",hour * 100 + min);
	
	return 0;
}
