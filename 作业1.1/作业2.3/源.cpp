#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()        
{
	int i,e=0,k=0,ch=0,num=0;
	char a[100];
	printf("������һ���ַ���");
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
	printf("�����Ӣ����ĸΪ%d.\n�ո�Ϊ%d.:\n����Ϊ%d.\n�����ַ��ĸ���Ϊ%d.\n",e,k,num,ch);
	system("pause");
}