#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
void yuan(char a[],char *b);
char a[100],b[100],*p;
gets(a);
p=b;
yuan(a,p);
puts(b);
system("pause");
}
void yuan(char a[],char *b)
{int i,j=0;
for(i=0;a[i]!='\0';i++)
{if (a[i]=='a'||a[i]=='A')
{*(b+j)=a[i];j++;}
else if(a[i]=='e'||a[i]=='E')
{*(b+j)=a[i];j++;}
else if(a[i]=='i'||a[i]=='I')
{*(b+j)=a[i];j++;}
else if(a[i]=='o'||a[i]=='O')
{*(b+j)=a[i];j++;}
else if(a[i]=='u'||a[i]=='U')
{*(b+j)=a[i];j++;}
}
*(b+j)='\0';
}