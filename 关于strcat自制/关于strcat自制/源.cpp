#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char b[100],c[50];
	int i,k;
	printf("�����벻����50λ���ַ�����\n");
	gets(b);
	gets(c);
	for (k=0;b[k]!='\0';k++);
	for (i=0;c[i]!='\0';i++)
	{
		b[k]=c[i];
		k++;
	}
	b[k]='\0';
	printf("���Ϊ��");
	puts(b);
	system("pause");
}