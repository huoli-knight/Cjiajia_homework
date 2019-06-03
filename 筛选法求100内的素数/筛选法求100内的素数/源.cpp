#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int b,i,j,a[98];
	for (i=0;i<99;i++)
		a[i]=i+1;
	for (i=0;i<99;i++)
		printf("%5d",a[i]);
	printf("\nÊäÈëËØÊýÎª£º\n");
	for (i=0;i<99;i++)
		{
		b=0;
		for(j=2;j<a[i];j++)
			if (a[i]%j==0)
	        	b=1;
		if (b==0)
			   printf("%5d",a[i]);
         }
	system("pause");
}