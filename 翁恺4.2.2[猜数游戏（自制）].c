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
			printf("您输入的数大了\n");
		}
		if (x < num){
			n ++;
			printf("您输入的数小了\n");
		}
	} while (x != num);
	
	printf("恭喜您用了%d次就猜对了",n);
	
	return 0;
}
