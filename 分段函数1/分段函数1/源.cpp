#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x,y;
	int a;
	scanf("%f",&x);
	if (x<1)
		a=1;
	else if (x>=1&&x<10)
		a=2;
	else if (x>=10)
		a=3;
	else
		a=4;
	switch (a)
	{
	case 1:
			y=x;
			printf("结果为y=%f",y);
			break;
	case 2:
			y=2*x-1;
			printf("结果为y=%f",y);
			break;
	case 3:
			y=3*x-11;
		printf("结果为y=%f",y);
	default:
				printf("输入有误，请重新输入。\n");
	}
	system("pause");
	return 0;
}