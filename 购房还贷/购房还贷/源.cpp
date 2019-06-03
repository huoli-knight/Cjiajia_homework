#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float m,d,p,r;
	scanf("%f%f%f",&d,&p,&r);
	m=((log(p/(p-d*r)))/log(1+r));
	m=10*m;
	m=m+0.5;
	m=(long int)m;
	m=m/10;
	printf("%.1f",m);
	system("pause");
	return 0;
}