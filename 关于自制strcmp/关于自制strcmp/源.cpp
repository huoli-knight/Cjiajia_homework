#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,sign=0;
	printf("�����벻����50λ���ַ�����\n");
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
	printf("����ֵΪ%d.",sign);
	system("pause");
	return(sign);
}