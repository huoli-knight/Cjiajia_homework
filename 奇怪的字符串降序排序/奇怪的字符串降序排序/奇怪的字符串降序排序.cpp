#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int num,i,y,t;
	char a[100];
	printf("请输入一串小于100位的字符串（最好不要输入特殊字符）.\n");      //输入字母数字
	gets(a);
	printf("输入的数组为:\n");
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
     printf("排序后的数组为:\nf");
     puts(a);
	 system("pause");
}