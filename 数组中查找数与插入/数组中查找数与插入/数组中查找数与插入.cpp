#include<stdio.h>
#include<stdlib.h>
int i,a[10]={2,4,6,8,10,12,14,16};          //由小到大的数组。为了运用后面的知识只有这样了，做这题有点晚，内疚。
void main()
{
	void insertion(int b);
	int compare(int a);
	int sign=0,x;
	printf("请输入一个整数.\n");
	scanf("%d",&x);
	sign=compare(x);
	if (sign==1)
		printf("输入的数为数组中第%d个数.\n",i);
	else
		insertion(x);
	system("pause");
}
int compare(int b)
{
	int sign=0;
	for (i=0;a[i]!='\0';i++)
		if (b==a[i])
		{
			sign=1;
			break;
		}
	return (sign);
}
void insertion(int b)
{
	int y,num=0;
	for (y=0;a[y]!=NULL;y++)
		num++;
	for (y=num-1;y>=0;y--)
	{	if (a[y]>b&&y!=0)
			a[y+1]=a[y];
		else
		{
			a[y]=b;
			break;
		}
	}
	printf("输入的输不在数组中，插入后新数组为:\n");
	for (y=0;a[y]!='\0';y++)
		printf("%5d",a[y]);
}