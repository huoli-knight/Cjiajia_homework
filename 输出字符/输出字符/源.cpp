#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c1,c2,c3,c4,c5;
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
	system("pause");
	return 0;
}