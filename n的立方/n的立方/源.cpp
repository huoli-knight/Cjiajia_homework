#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,x=0;
	printf("������һ��������\n");
	scanf("%d",&n);
    printf("��Щ�����ֱ�Ϊ��\n");
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