#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int i,a[10],y,num=0;
	printf("请输入10个整数：\n");
	for (i=0;i<10;i++)
	    scanf("%d",&a[i]);
	y=a[0];
	for (i=0;i<10;i++)
	{
		if (a[i]>y)
			y=a[i];
	}
	for (i=0;i<10;i++)
	{
		if (a[i]==y)
			num++;
	}
	printf("输入的最大数为%d.\n出现次数为:%d.\n",y,num);
	system("pause");
}