#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year=2018,day=1,num=0;
	for(year=2018;day!=7;year++)							//ֻҪ����һ�µ�һ��Ϊ���վ�������������
	{
		if ((year%4==0&&year%100!=0)||year%400==0)
			num=366;
		else
			num=365;
		day=(num%7+day)%7;
		if (day==0)
			day=7;
	}
	printf("%d\n",year);
	system("pause");
}