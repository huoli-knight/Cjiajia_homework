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
			printf("���Ϊy=%f",y);
			break;
	case 2:
			y=2*x-1;
			printf("���Ϊy=%f",y);
			break;
	case 3:
			y=3*x-11;
		printf("���Ϊy=%f",y);
	default:
				printf("�����������������롣\n");
	}
	system("pause");
	return 0;
}