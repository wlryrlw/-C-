#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
	srand(time(0));
	int num = rand() % 100;
	int x;
	int n = 0;
	
	do {
		scanf("%d",&x);
		if (x > num){
			n ++;
			printf("�������������\n");
		}
		if (x < num){
			n ++;
			printf("���������С��\n");
		}
	} while (x != num);
	
	printf("��ϲ������%d�ξͲ¶���",n);
	
	return 0;
}
