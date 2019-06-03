#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{void xues(int a[10][5],int b[]);
void kec(int a[10][5],int b[]);
	int a[10][5],b[20];
int i,j;
for(i=0;i<10;i++)
{for(j=0;j<5;j++)
{scanf("%d",&a[i][j]);}
}
xues(a,b);
printf("\n\n");
kec(a,b);
system("pause");
}

void xues(int a[10][5],int b[])
{int i;
for(i=0;i<10;i++)
{*(b+i)=((**(a+i)+*(*(a+i)+1)+*(*(a+i)+2)+*(*(a+i)+3)+*(*(a+i)+4))/5);
printf("学生%d的平均分为%d\n",i,*(b+i));}
}

void kec(int a[10][5],int b[])
{int i;
for(i=0;i<5;i++)
{*(b+i)=(*(*a+i)+*(*(a+1)+i)+*(*(a+2)+i)+*(*(a+3)+i)+*(*(a+4)+i)+*(*(a+5)+i)+*(*(a+6)+i)+*(*(a+7)+i)+*(*(a+8)+i)+*(*(a+9)+i))/10;
printf("课程%d的平均分为%d\n",i,*(b+i));}
}

void zuig(int a[10][5])
{int i,j,n;

}