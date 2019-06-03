#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a,b;
	int c;
	printf("请输入一个不大于1000的正数：\n");
	scanf("%f",&a);
	if (a>0&&a<1000)
	{
		b=sqrt(a);
		c=(int)b;
		printf("%d",c);
	}
	else
		printf("输入错误，请重新输入。\n");
	system("pause");
	return 0;
}