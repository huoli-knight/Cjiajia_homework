#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int num,i,y,t;
	char a[100];
	printf("������һ��С��100λ���ַ�������ò�Ҫ���������ַ���.\n");      //������ĸ����
	gets(a);
	printf("���������Ϊ:\n");
	puts(a);
	num=strlen(a);
	for (i=0;a[i]!='\0';i++)
		for (y=num;y>=i+1;y--)
		{
			if (i%2!=0&&y%2!=0)
			{
				if (a[y]>a[i])
				{
					t=a[y];
					a[y]=a[i];
					a[i]=t;
				}
		     }
		}
     printf("����������Ϊ:\nf");
     puts(a);
	 system("pause");
}