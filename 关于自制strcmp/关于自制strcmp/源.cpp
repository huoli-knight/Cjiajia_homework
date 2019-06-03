#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,sign=0;
	printf("请输入不大于50位的字符串：\n");
	gets(a);
	gets(b);
	for (i=0;(a[i]!=0)||(b[i]!=0);i++)
	{
		if (a[i]==b[i])
			continue;
		else if (a[i]>b[i])
		{
			sign=1;
			break;
		}
		else
		{
			sign=-1;
			break;
		}
	}
	printf("返回值为%d.",sign);
	system("pause");
	return(sign);
}