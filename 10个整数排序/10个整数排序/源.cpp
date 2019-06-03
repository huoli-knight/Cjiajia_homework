#include"stdio.h"
#include<stdlib.h>
void main()
{
int i,j,a[10],t;
for (i=0;i<10;i++)
	scanf("%d",&a[i]);
for (j=0;j<9;j++)
	for (i=0;i<9-j;i++)
		if (a[i]>a[i+1])
		{
		t=a[i+1];
		a[i+1]=a[i];
		a[i]=t;
		}
for (i=0;i<10;i++)
	printf("%5d",a[i]);
		system("pause");
}