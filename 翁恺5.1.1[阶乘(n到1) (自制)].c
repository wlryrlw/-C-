#include<stdio.h>
int main()
{
	int n, p, nn;
	scanf("%d",&n);
	p = n;
	nn = n;
	
	for (; n>=2; n--){
		p *= (n - 1);
	}
	
	printf("%d!=%d",nn,p);
	return 0;
}
