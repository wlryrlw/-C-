#include<stdio.h>
int main()
{
	int x;
	int ret = 0;
	scanf ("%d",&x);
	
	int t = x;		//С��·���洢�����ֵ�Ա�֤�����ֵ������һ�� 
	while (x > 1){
		x /= 2;
		ret ++;
	}
	printf("log2 of %d is %d.",t,ret);
}
