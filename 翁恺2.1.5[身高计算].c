#include <stdio.h>

int main()
{
	printf("请输入身高英尺英寸(如5 7表示五英尺七英寸)\n");
    double foot;
    double inch;
    
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米。\n",((foot+inch/12)*0.3048)); 
	return 0;
}


