#include<stdio.h>
#include<stdlib.h>
void main()        
{
	int x,i,z,num=0,a[5];
	printf("请输入一个不大于5位数的正整数:");
	scanf("%d",&x);
	if (x>0&&x<10000)
		for (num=1;num<=5;num++)
		{
			z=x%10;
			a[num-1]=z;
			x/=10;
			if (x==0)
				break;
		}
	else
		printf("输入有误，请重新输入.\n");
	printf("输入的数为%d位.\n",num);
	for (i=0;i<num;i++)
		printf("第%d位为:%d\n",i+1,a[num-i-1]);
	printf("反序为:");
	for (i=0;i<num;i++)
		printf("%d",a[i]);
	printf("\n");
	system("pause");
}