#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a,b;
	int c;
	printf("������һ��������1000��������\n");
	scanf("%f",&a);
	if (a>0&&a<1000)
	{
		b=sqrt(a);
		c=(int)b;
		printf("%d",c);
	}
	else
		printf("����������������롣\n");
	system("pause");
	return 0;
}