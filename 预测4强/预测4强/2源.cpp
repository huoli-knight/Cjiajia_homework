#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d,b,a,h;
	for (a=1;a<=4;a++)
	{
		for (b=1;b<=4;b++)
		{
			for (d=1;d<=4;d++)
			{
			for (h=1;h<=4;h++)
				if ((d==1||b==3)&&(a==2|h==4)&&(a==1||b==4)&&(d==2||h==3))
					printf("������%d��������%d������͢��%d���¹���%d.\n",b,h,a,d);
			}
		}
	}
  system("pause");
  return 0;
}