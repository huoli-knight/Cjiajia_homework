#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int x,i,z,num=0,a[5];
	printf("������һ��������5λ����������:");
	scanf("%d",&x);
	if (x>0&&x<10000)
		for (num=1;num<=5;num++)
		{
			z=x%10;
			a[num-1]=z;
			x/=10;
			if (x==0)
				break;
		}
	else
		printf("������������������.\n");
	printf("�������Ϊ%dλ.\n",num);
	for (i=0;i<num;i++)
		printf("��%dλΪ:%d\n",i+1,a[num-i-1]);
	printf("����Ϊ:");
	for (i=0;i<num;i++)
		printf("%d",a[i]);
	printf("\n");
	system("pause");
}