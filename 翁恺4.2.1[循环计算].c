#include<stdio.h>
int main()
{
	int x;
	int ret = 0;
	scanf ("%d",&x);
	
	int t = x;		//小套路：存储输入的值以保证输出的值与输入一致 
	while (x > 1){
		x /= 2;
		ret ++;
	}
	printf("log2 of %d is %d.",t,ret);
}
