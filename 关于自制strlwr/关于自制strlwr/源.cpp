#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[50];
	int i;
	printf("�����벻����50λ���ַ�����\n");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]-('A'-'a');
	}
	printf("ת����Ľ��Ϊ��\n");
	puts(a);
	system("pause");
}