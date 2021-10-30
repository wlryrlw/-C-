#include <stdio.h>

int main()
{
	int price = 0;
	int amount=100;
	
	printf("请输入票面和金额（元）:");
	printf("[示例：20 15]\n");
	scanf("%d %d",&amount,&price);
	
	int change = amount - price;
	printf("应找您%d元。",change);
	
	return 0;
}
