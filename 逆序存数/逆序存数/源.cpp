#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,t,a[20],b;
printf("请输入数的的位数，小于20位。\n");
scanf("%d",&b);
for (i=0;i<b;i++)
	scanf("%d",&a[i]);
for (i=0;i<b/2+1;i++)
	{
		t=a[i];
		a[i]=a[b-i-1];
		a[b-i-1]=t;
	}
for (i=0;i<b;i++)
	printf("%5d",a[i]);
system("pause");
}