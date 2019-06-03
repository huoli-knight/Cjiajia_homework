#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,i=1,d,e;
	printf("请输入不多于5位的正整数:\n");
	scanf("%d",&a);
	if (a/10==0)
		printf("1位数\n");
	else if (a/100==0)
		printf("2位数\n");
	else if (a/1000==0)
		printf("3位数\n");
	else if ("a/10000==0")
	    printf("4位数\n");
	else
		printf("5位数\n");
	d=a;
	while (a!=0)
	{
		b=a%10;
		a=a/10;
		printf("%d\n",b);
	}
	while (d>0)
	{
		e=d%10;
		printf("%d",e);
		d=d/10;
	}
	system("pause");
	return 0;
}