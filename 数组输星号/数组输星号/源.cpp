#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char a[10]={'*',' ','*',' ','*',' ','*',' ','*'};
	int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<i;j++)
			printf("  ");
		puts(a);
	}
	system("pause");
}