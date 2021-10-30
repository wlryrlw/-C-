#include<stdio.h>
int main()
{
	int input;
	scanf("%d",&input);
	
	int one=input/100;
	int two=input%100/10;
	int three=input%100%10;
	printf("%d%d%d",three,two,one);
	
	return 0;
}
