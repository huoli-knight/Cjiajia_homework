#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,sign=0,k,n=0,m=14,q,a[15]={30,28,26,24,22,20,18,16,14,12,10,8,6,4,2};
	printf("������һ����������\n");
	scanf("%d",&k);
	for (i=0;i<5;i++)
	{
		q=(n+m)/2;
		if (a[q]==k)
		{
			q=q+1;
			printf("�ǵ�%d����\n",q);
			sign=1;
			break;
		}
		else if (a[q]<k)
			m=q-1;
		else
			n=q+1;
	}
	if (sign==0)
		printf("�޴�����\n");
	system("pause");
}