#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[50];
	int i,num=0;
	printf("请输入不大于50位的字符串：\n");
	gets(a);
	for (i=0;a[i]!='\0';i++)
		num=num+1;
	printf("输入的字符为%d位\n",num);
	system("pause");
}