#include<stdio.h>
#include<stdlib.h>
int i,a[10]={2,4,6,8,10,12,14,16};          //��С��������顣Ϊ�����ú����֪ʶֻ�������ˣ��������е����ھΡ�
void main()
{
	void insertion(int b);
	int compare(int a);
	int sign=0,x;
	printf("������һ������.\n");
	scanf("%d",&x);
	sign=compare(x);
	if (sign==1)
		printf("�������Ϊ�����е�%d����.\n",i);
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
	printf("������䲻�������У������������Ϊ:\n");
	for (y=0;a[y]!='\0';y++)
		printf("%5d",a[y]);
}