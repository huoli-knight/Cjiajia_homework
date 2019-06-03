#include<stdio.h>
#include<stdlib.h>
int main()
{
	float I;
	int c;
	printf("«Î ‰»Î¿˚»Û:\n");
	scanf("%f",&I);
	c=I/100001;
    switch (c)
	{
		case 0:
			printf("%f",I=I*10/100.0);
			break;
		case 1:
			printf("%f",I=10000+(I-100000)*7.5/100);
			break;
		case 2:case 3:
			printf("%f",I=17500+(I-200000)*5/100.0);
			break;
		case 5:case 4:
			printf("%f",I=27500+(I-400000)*3/100.0);
			break;
		case 6:case 7:case 8:case 9:
			printf("%f",I=33500+(I-600000)*1.5/100);
			break;
		default:
			printf("%f",I=39500+(I-1000000)*1/100.0);
	}
			system("pause");
			return 0;
}