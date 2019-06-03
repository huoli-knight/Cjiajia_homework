#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,a[3][3],b;
for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		scanf("%d",&a[i][j]);
     printf("\n");
     }
for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
    }
b=a[0][0]+a[1][1]+a[2][2]+a[1][2]+a[2][1];
printf("%d",b);
system("pause");
return 0;
}