#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[100],b[50];
	int i;
	printf("����������50λ���ַ�����\n");
	gets(b);
	for (i=0;b[i]!='\0';i++)
		a[i]=b[i];
	a[i]='\0';
	puts(a);
	system("pause");
}