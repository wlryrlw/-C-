#include<stdio.h>
int main()
{
	int num;
	int count = 0;
	int sum = 0;
	
	printf("������\n");	
	do{
		scanf("%d", &num);
		count ++;
		sum = sum + num;
	}
	while (num != -1);
	printf("�����������ƽ������%f", 1.0 *  (sum + 1) / (count - 1));	//do��while�ṹ��ѭ�����ж� 
	                                                                    //sum+1���������-1  count-1���ϴ������һ�� 
	return 0; 
}
