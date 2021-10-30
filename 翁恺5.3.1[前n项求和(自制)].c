#include<stdio.h>
int main()
{
	int x, n;
	double f = 0.0;
	scanf("%d",&n);
	
	for(x = 1; x <= n; x++){
		f = f + 1.0 / x;
	}
	printf("f(%d)=%f",n, f);
	
	return 0;
}
