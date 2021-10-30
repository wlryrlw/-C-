#include<stdio.h>
int main()
{
	int num;
	int count = 0;
	int sum = 0;
	
	printf("请输入\n");	
	do{
		scanf("%d", &num);
		count ++;
		sum = sum + num;
	}
	while (num != -1);
	printf("您输入的数据平均数是%f", 1.0 *  (sum + 1) / (count - 1));	//do—while结构先循环后判断 
	                                                                    //sum+1补上输入的-1  count-1补上次数多的一次 
	return 0; 
}
