#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[50];
	int i,num=0;
	printf("�����벻����50λ���ַ�����\n");
	gets(a);
	for (i=0;a[i]!='\0';i++)
		num=num+1;
	printf("������ַ�Ϊ%dλ\n",num);
	system("pause");
}