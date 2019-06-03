#include<stdio.h>
#include<stdlib.h>
void main()
{
	int g=15,m=13,x=10,i,j,k,z;
	for (i=0;i<100;i++)
		for(j=0;j<100;j++)
			for(k=0;k<100;k++)
			{
				z=i*g+j*m+k*x;
				if(z==1000)
					printf("买公鸡%d只，母鸡%d只，小鸡%d只.\n",i,j,3*k);
			}
	system("pause");
}