#include<stdio.h>
#include<stdlib.h>
void main()
{
	int h,f,x,y,sign=0;
	printf("�����뼦����ͷ����");
	scanf("%d",&h);
	printf("�����뼦���ܽ�����");
	scanf("%d",&f);
	for (x=0;x<=h;x++)
		for (y=0;y<=h;y++)
		{
			if ((x+y==h)&&(2*x+4*y==f))
		    {
			    sign=1;
			    goto loop;
			 }
		}
	loop:
	if (sign==1)
	    printf("��Ϊ%dֻ������Ϊ%dֻ��\n",x,y);
	else
		printf("��������\n");
	system("pause");
}