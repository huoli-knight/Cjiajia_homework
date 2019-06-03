#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,x=0;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
    printf("这些奇数分别为：\n");
	if (n>=0)
	{
				for (i=0;i<n;i++)
				{
					x=n*n-n+1+2*i;
					printf("%d\t",x);
				}
      }
	else
	{
		       for (i=0;i<-n;i++)
				{
					x=-n*n-n-1-2*i;
					printf("%d\t",x);
				}
	}
	system("pause");
	return 0;
}