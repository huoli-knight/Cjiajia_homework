#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{void tongji(char a[],int*b,int*c,int*d,int*e);
char a[100];
int b=0,c=0,d=0,e=0;
int *B,*C,*D,*E;
gets(a);
B=&b;
C=&c;
D=&d;
E=&e;
tongji(a,B,C,D,E);
printf("字母%d个,数字%d个,空格%d个,其他字符%d个",b,c,d,e);
system("pause");
}

void tongji(char a[],int *b,int*c,int*d,int*e)
{int i;
for(i=0;a[i]!='\0';i++)
{if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{(*b)++;}
else if(a[i]>='0'&&a[i]<='9')
{(*c)++;}
else if(a[i]=' ')
{(*d)++;}
else
{(*e)++;}
}
}