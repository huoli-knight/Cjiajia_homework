#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int i,k,a[50],num,j;
	for (i=2;i<497;i++)
	{
		j=0;
		num=0;
		for (k=1;k<i;k++)
		{
			if (i%k==0)
			{
				a[j]=k;
				num=num+k;
				j++;
			}
		}
		if (num==i)									//保证与题目格式相同				
		{
			printf("%d its factors are 1",i);
			for (k=1;k<j;k++)
				printf(",%d",a[k]);
			printf("\n");
		}
	}
	system("pause");
}