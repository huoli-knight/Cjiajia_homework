#include<stdio.h>
#include<stdlib.h>
int main()
{
	int G;
	scanf("%d",&G);
		if (G>=90)
			printf("A\n");
		else if (G>=80)
			printf("B\n");
		else if (G>=70)
			printf("C\nC");
		else if (G>=60)
			printf("D\n");
		else
			printf("E\n");
    system("pause");
	return 0;
}