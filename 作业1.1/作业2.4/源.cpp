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
	s=s-100;                        //��һ�δӿ������¡�
	printf("���ڵ�10�����ʱ��������%f��.\n��10�η���%f��.\n",s,x);
	system("pause");
}