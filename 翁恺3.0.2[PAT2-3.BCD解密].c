#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	
	int one=num/16;
	int two=num%16;
	printf("%d",one*10+two);
	
	return 0;
}
