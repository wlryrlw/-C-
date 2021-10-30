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
		printf("%d不是素数",x);
	}else{
		printf("%d是素数",x);
	}
	
	return 0;
}
