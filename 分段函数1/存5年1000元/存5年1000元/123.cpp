#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
	int p,r,n,p1;
	p1=1000;
	printf("һ�δ�5�꣺\n");
	p=p1*(1+5*5.85/100.0);
	printf("p=%d\n",p);
	printf("�ȴ����꣬�ٴ�3�꣺\n");
	p=p1*(1+2*4.68/100.0)*(1+3*5.4/100.0);
	printf("p=%d\n",p);
	printf("�ȴ�3�꣬�ٴ�2�꣺\n");
	p=p1*(1+3*5.4/100.0)*(1+2*4.68/100.0);
	printf("������5��1�꣺\n");
	p=p1*pow(1+4.14/100.0,5);
	printf("p=%d\n",p);
	printf("����ڣ�\n");
	p=p1*pow(1+1/4.0*0.72/100.0,20);
	printf("p=%d\n",p);
	system("pause");
	return 0;
}