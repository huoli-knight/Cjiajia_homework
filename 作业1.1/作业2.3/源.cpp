#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()        
{
	int i,e=0,k=0,ch=0,num=0;
	char a[100];
	printf("请输入一串字符：");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			e++;
		else if (a[i]>='0'&&a[i]<='9')
			num++;
		else if (a[i]==' ')
		    k++;
		else
			ch++;
	}
	printf("输入的英文字母为%d.\n空格为%d.:\n数字为%d.\n其他字符的个数为%d.\n",e,k,num,ch);
	system("pause");
}