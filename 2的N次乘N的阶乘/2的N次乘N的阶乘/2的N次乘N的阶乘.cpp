#include<stdio.h>
#include<stdlib.h>
void main()
{
	double power1(int x);
	double factorial(int x);
	int n;
	double a;
	printf("请输入n:\n");
	scanf("%d",&n);
	a=power1(n)*factorial(n);
	printf("计算的结果为%f.\n",a);
	system("pause");
}
double power1(int x)   //求次方
{
	int i;
	float a=1;
	for (i=0;i<x;i++)
		a=a*2;
	return(a);
}
double factorial(int x)   //求阶乘
{
	int i;
	double a=1;
	for(i=1;i<=x;i++)
		a=a*i;
	return(a);
}