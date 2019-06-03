#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int f(int a[],int x);
	int i,x,a[100]={2,4,6,8,10,12,14,16,18,20},b[100],m;
	printf("请输入一个数：");
	scanf("%d",&x);
	m=f(a,x);
	printf("插入排序后的数组为：");
	for (i=0;i<m;i++)
		printf("%3d",a[i]);
	printf("\n请输入继续输的这组数的个数：");
	scanf("%d",&x);
	printf("请输入这组数：\n");
	for (i=0;i<x;i++)
		scanf("%d",&b[i]);
	for (i=0;i<x;i++)
		m=f(a,b[i]);
	printf("插入排序后的数组为：");
	for (i=0;i<m;i++)
		printf("%3d",a[i]);
	printf("\n");
	system("pause");
}
int f(int a[],int x)        //返回新数组的元素个数
{
	int y,num=0;
	for (y=0;a[y]!=NULL;y++)
		num++;
	for (y=num-1;y>=0;y--)
	{	
		if (a[y]>x&&y!=0)
			a[y+1]=a[y];
		else if (y==num-1&&a[y]<=x)
			{
				a[y+1]=x;
				break;
			}
		else
		{
			a[y]=x;
			break;
		}
	}
	return (num+1);
}