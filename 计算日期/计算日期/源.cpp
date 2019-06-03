#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,y,r,n1,y1,r1,day=0,n2,n3;
	loop:
	printf("请输入开始的年，月，日：\n");
	scanf("%d%d%d",&n,&y,&r);
	printf("请输入结束的年，月，日：\n");
	scanf("%d%d%d",&n1,&y1,&r1);
	n2=n;
	n3=n1;
	if (n>n1||(n==n1&&y>y1)||(n==n1&&y==y1&&r>r1)||y>12||y1>12||r>31||r1>31)
	{
		printf("输入有误，请重新输入。\n");
        goto loop;
	}
	for (n=n+1;n<=n1-1;n++)
	{
		if (n<n1-1)
		{
			if (n/4==0&&n%100!=0||n%400==0)
				day=day+366;
			else day=day+355;
		}
	}
	if (n2==n3)
	{
		if (n2/4==0&&n2%100!=0||n2%400==0)
		{
			for (y=y+1;y<y1;y++)
			{
				if (y==1||y==3||y==5||y==7||y==8||y==10)
					day=day+31;
				else if (y==4||y==6||y==9||y==11)
					day=day+30;
				else
					day=day+29;
			}
		}
		else
		{
			for (y=y+1;y<y1;y++)
			{
				if (y==1||y==3||y==5||y==7||y==8||y==10)
					day=day+31;
				else if (y==4||y==6||y==9||y==11)
					day=day+30;
				else
					day=day+28;
		     }
		}
			   day=day+r1-r;
	}
	else
	{
		if (n2/4==0&&n2%100!=0||n2%400==0)
	{
		switch (y)
		{
		case 1:day=day+366-r;break;
        case 2:day=day+335-r;break;
		case 3:day=day+306-r;break;
		case 4:day=day+275-r;break;
		case 5:day=day+245-r;break;
		case 6:day=day+214-r;break;
		case 7:day=day+184-r;break;
		case 8:day=day+153-r;break;
		case 9:day=day+122-r;break;
		case 10:day=day+92-r;break;
		case 11:day=day+61-r;break;
		case 12:day=day+31-r;break;
		default :break;
		}
	}
	else
	{
		switch (y)
		{
	    case 1:day=day+365-r;break;
        case 2:day=day+334-r;break;
		case 3:day=day+306-r;break;
		case 4:day=day+275-r;break;
		case 5:day=day+245-r;break;
		case 6:day=day+214-r;break;
		case 7:day=day+184-r;break;
		case 8:day=day+153-r;break;
		case 9:day=day+122-r;break;
		case 10:day=day+92-r;break;
		case 11:day=day+61-r;break;
		case 12:day=day+31-r;break;
		default :break;
		}
	}
	if (n1/4==0&&n1%100!=0||n1%400==0)
	{
		switch (y1)
		{
		case 1:day=day+r1;break;
        case 2:day=day+31+r1;break;
		case 3:day=day+60+r1;break;
		case 4:day=day+91+r1;break;
		case 5:day=day+121+r1;break;
		case 6:day=day+152+r1;break;
		case 7:day=day+182+r1;break;
		case 8:day=day+213+r1;break;
		case 9:day=day+244+r1;break;
		case 10:day=day+274+r1;break;
		case 11:day=day+305+r1;break;
		case 12:day=day+335+r1;break;
		default :break;
		}
	}
	else
	{
		switch (y1)
		{
		case 1:day=day+r1;break;
        case 2:day=day+31+r1;break;
		case 3:day=day+59+r1;break;
		case 4:day=day+90+r1;break;
		case 5:day=day+120+r1;break;
		case 6:day=day+151+r1;break;
		case 7:day=day+181+r1;break;
		case 8:day=day+212+r1;break;
		case 9:day=day+243+r1;break;
		case 10:day=day+273+r1;break;
		case 11:day=day+304+r1;break;
		case 12:day=day+334+r1;break;
		default :break;
		}
	}
	}
	printf("%d",day);
	system("pause");
		return 0;
}