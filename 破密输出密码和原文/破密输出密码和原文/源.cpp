#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[20];
	int i;
	printf("����������20λ����ĸ��\n");
	gets(a);
	printf("����Ϊ��");
	puts(a);
	for (i=0;a[i]!='\0';i++)
	{
		if ((a[i]>='A')&&(a[i]<='Z'))
			a[i]='A'+'Z'-a[i];
		else
			a[i]='a'+'z'-a[i];
	}
	printf("ԭ��Ϊ��");
	puts(a);
	system("pause");
}