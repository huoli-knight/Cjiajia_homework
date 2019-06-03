#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int x,i;
	for (i=1;i<100000;i++)
	{
		x=i;
		if ((x%5==1)&&(x%6==5)&&(x%7==4)&&(x%11==10))
			{
				printf("韩信至少有%d个兵。\n",x);
				break;
	         }
	}
	system("pause");
	return 0;
}