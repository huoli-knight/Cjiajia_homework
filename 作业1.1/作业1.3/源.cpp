#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()          //�����⿴����Ϣһ��
{
	float x=10000,y;
	printf("������һ�����Ϣ��");
	scanf("%f",&y);
	printf("һ�δ�5��Ϊ:%f\n",(1+5*y)*x);
	printf("�ȴ�2���ڣ����ڽ���Ϣ�ٴ�3��Ϊ:%f\n",(1+2*y)*x*(1+3*y));
	printf("�ȴ�3���ڣ����ں��ٴ�2��Ϊ:%f\n",(1+3*y)*x*(1+2*y));
	printf("��1���ڣ����ڽ���Ϣ�ٴ�1�꣬����5��Ϊ:%f\n",x*pow(1+y,5));
	system("pause");
}