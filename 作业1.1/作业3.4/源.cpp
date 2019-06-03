#include<stdio.h>
#include<stdlib.h>
void main()        
{
	float tax,x;
	printf("请输入你的工资：\n");
	scanf("%f",&x);
	if (x<=2000)
		tax=0;
	else if (x>2000&&x<=2500)
		tax=(x-2000)*5.0/100;
	else if (x>2500&&x<=4000)
		tax=25+(x-2500)*10.0/100;
	else if (x>4000&&x<=7000)
		tax=175+(x-4000)*15.0/100;
	else if (x>7000&&x<=22000)
		tax=625+(x-7000)*20.0/100;
	else if (x>22000&&x<=42000)
		tax=3625+(x-22000)*25.0/100;
	else if (x>42000&&x<=62000)
		tax=8625+(x-42000)*30.0/100;
	else if (x>62000&&x<=82000)
		tax=14625+(x-62000)*35.0/100;
	else if (x>82000&&x<=102000)
		tax=21625+(x-82000)*40.0/100;
	else 
		tax=29625+(x-102000)*45.0/100;
	printf("交的税为:%f.\n",tax);
	system("pause");
}