#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	printf("ʱ��������\n");
	printf("����������ʱ�䣨��֤���߽���\n");
	printf("��1 30 12 50��ʾһ����ʮ�֡�ʮ������ʮ���Һ��߽���\n");
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("ʱ�����%dСʱ%d��",t/60,t%60);
	return 0;
}
