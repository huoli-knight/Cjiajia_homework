#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int i;
	float x=100,s=0;
	for (i=1;i<=10;i++)
	{
		s=s+2*x;
		x/=2;
	}
	s=s-100;                        //第一次从空中落下。
	printf("它在第10次落地时，共经过%f米.\n第10次反弹%f米.\n",s,x);
	system("pause");
}