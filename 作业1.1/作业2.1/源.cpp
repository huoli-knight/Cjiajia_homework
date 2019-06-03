#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int x,y,i;
	printf("请输入两个正整数:");
	scanf("%d%d",&x,&y);
	if (x>0&&y>0)
		{
			for (i=x;i>=1;i--)
			{
				if (x%i==0&&y%i==0)
				{
					printf("最大公约数为:%d\n",i);
					break;
				}
			}
			for (i=x;i<=x*y;i++)
			{
				if (i%x==0&&i%y==0)
				{
					printf("最大公倍数为:%d\n",i);
					break;
				}
			}
		}
	else
		printf("输入有误，请重新输入.\n");
	system("pause");
}