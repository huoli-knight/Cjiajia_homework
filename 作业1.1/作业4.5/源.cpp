#include<stdio.h>
#include<stdlib.h>
void main()
{
	int f(int x);
	int x,i,k;
	printf("请输入一个偶数:");
	scanf("%d",&x);
	for(i=0;i<=x/2;i++)
	   for (k=x/2;k<x;k++)
	   {
			if (i%2!=0&&k%2!=0&&i+k==x)
			{
				if (f(i)&&f(k))
				   printf("%d可以由%d+%d.\n",x,i,k);
			}
	   }
	system("pause");
}
int f(int x)
{
	int i,sign=1;
	for (i=2;i<x;i++)
	{
		if (x%i==0)
			sign=0;
	}
	return (sign);
}
