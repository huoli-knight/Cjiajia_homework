#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,a[10],t;
for (i=0;i<10;i++)
	scanf("%d",&a[i]);
for (i=0;i<9;i++)
	for (j=i+1;j<i;j++)
		{
			if (a[i]>a[i+1])
				j=i;
			if (j!=i)
		{
		t=a[i];
		a[j]=a[i];
		a[i]=t;
		}
	    }
for (i=0;i<10;i++)
	printf("%5d",a[i]);
system("pause");
}