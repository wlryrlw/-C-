#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("时间差计算器\n");
	printf("请输入两地时间（保证后者较晚）\n");
	printf("如1 30 12 50表示一点三十分、十二点五十分且后者较晚\n");
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("时间差是%d小时%d分",t/60,t%60);
	return 0;
}
