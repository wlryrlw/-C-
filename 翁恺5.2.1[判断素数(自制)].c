#include<stdio.h>
int main()
{
	int x, i;
	int pe = 0;
	scanf("%d",&x);
	
	for(i = 2; i < x; i++ ){
		if(x % i == 0){
			pe = 1;
			break;
		}	
	}
	if(pe == 1){
		printf("%d��������",x);
	}else{
		printf("%d������",x);
	}
	
	return 0;
}
