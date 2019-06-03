#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
	int p,r,n,p1;
	p1=1000;
	printf("一次存5年：\n");
	p=p1*(1+5*5.85/100.0);
	printf("p=%d\n",p);
	printf("先存两年，再存3年：\n");
	p=p1*(1+2*4.68/100.0)*(1+3*5.4/100.0);
	printf("p=%d\n",p);
	printf("先存3年，再存2年：\n");
	p=p1*(1+3*5.4/100.0)*(1+2*4.68/100.0);
	printf("连续存5次1年：\n");
	p=p1*pow(1+4.14/100.0,5);
	printf("p=%d\n",p);
	printf("存活期：\n");
	p=p1*pow(1+1/4.0*0.72/100.0,20);
	printf("p=%d\n",p);
	system("pause");
	return 0;
}