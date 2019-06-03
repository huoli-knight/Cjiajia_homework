#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[50];
	int i;
	printf("请输入不大于50位的字符串：\n");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]-('A'-'a');
	}
	printf("转化后的结果为：\n");
	puts(a);
	system("pause");
}