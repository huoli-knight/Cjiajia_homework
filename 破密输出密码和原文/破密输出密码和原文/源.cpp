#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[20];
	int i;
	printf("请输入少于20位的字母：\n");
	gets(a);
	printf("密码为：");
	puts(a);
	for (i=0;a[i]!='\0';i++)
	{
		if ((a[i]>='A')&&(a[i]<='Z'))
			a[i]='A'+'Z'-a[i];
		else
			a[i]='a'+'z'-a[i];
	}
	printf("原文为：");
	puts(a);
	system("pause");
}