#include<stdio.h>
#include<stdlib.h>
# define IP 3.1415926
void main()        
{
	float h,r;
	printf("�������Ϊ��");
	scanf("%f",&h);
	printf("������װ뾶Ϊ��");
	scanf("%f",&r);
	printf("Բ�ܳ�%.2f��Բ���%.2f��Բ�������%.2f��Բ�����%.2f.\n",2*IP*r,IP*r*r,2*IP*r*r+2*IP*r*h,IP*r*r*h);
	system("pause");
}