#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int x,y,i;
	printf("����������������:");
	scanf("%d%d",&x,&y);
	if (x>0&&y>0)
		{
			for (i=x;i>=1;i--)
			{
				if (x%i==0&&y%i==0)
				{
					printf("���Լ��Ϊ:%d\n",i);
					break;
				}
			}
			for (i=x;i<=x*y;i++)
			{
				if (i%x==0&&i%y==0)
				{
					printf("��󹫱���Ϊ:%d\n",i);
					break;
				}
			}
		}
	else
		printf("������������������.\n");
	system("pause");
}