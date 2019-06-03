#include<stdio.h>
#include<stdlib.h>
# define IP 3.1415926
void main()        
{
	float h,r;
	printf("请输入高为：");
	scanf("%f",&h);
	printf("请输入底半径为：");
	scanf("%f",&r);
	printf("圆周长%.2f，圆面积%.2f，圆柱表面积%.2f，圆柱体积%.2f.\n",2*IP*r,IP*r*r,2*IP*r*r+2*IP*r*h,IP*r*r*h);
	system("pause");
}