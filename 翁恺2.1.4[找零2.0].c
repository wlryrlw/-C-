#include <stdio.h>

int main()
{
	int price = 0;
	int amount=100;
	
	printf("������Ʊ��ͽ�Ԫ��:");
	printf("[ʾ����20 15]\n");
	scanf("%d %d",&amount,&price);
	
	int change = amount - price;
	printf("Ӧ����%dԪ��",change);
	
	return 0;
}
