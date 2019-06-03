#include<stdio.h>
#include<stdlib.h>
void main()
{
	int h,f,x,y,sign=0;
	printf("请输入鸡兔总头数：");
	scanf("%d",&h);
	printf("请输入鸡兔总脚数：");
	scanf("%d",&f);
	for (x=0;x<=h;x++)
		for (y=0;y<=h;y++)
		{
			if ((x+y==h)&&(2*x+4*y==f))
		    {
			    sign=1;
			    goto loop;
			 }
		}
	loop:
	if (sign==1)
	    printf("鸡为%d只，兔子为%d只。\n",x,y);
	else
		printf("输入有误\n");
	system("pause");
}