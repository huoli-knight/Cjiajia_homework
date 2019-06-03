#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()          //由题意看成利息一样
{
	float x=10000,y;
	printf("请输入一年的利息：");
	scanf("%f",&y);
	printf("一次存5年为:%f\n",(1+5*y)*x);
	printf("先存2年期，到期将本息再存3年为:%f\n",(1+2*y)*x*(1+3*y));
	printf("先存3年期，到期后再存2年为:%f\n",(1+3*y)*x*(1+2*y));
	printf("存1年期，到期将本息再存1年，连存5次为:%f\n",x*pow(1+y,5));
	system("pause");
}