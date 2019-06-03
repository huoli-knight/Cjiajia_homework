#include<stdio.h>
#include<stdlib.h>
void main()        
{
	char ab[3][3];               //80太难输，设为2个
	int i,j,E=0,e=0,k=0,ch=0,num=0;
	printf("请输入三串字符，每串两个：\n");
	for (i=0;i<3;i++)
	     scanf("%s",ab[i]);
	for (j=0;j<3;j++)
		for (i=0;i<2;i++)
		{
			if (ab[j][i]>='a'&&ab[j][i]<='z')
				e++;
			else if(ab[j][i]>='A'&&ab[j][i]<='Z')
				E++;
			else if (ab[j][i]>='0'&&ab[j][i]<='9')
				num++;
			else if (ab[j][i]==' ')
			    k++;
			else
				ch++;
		}
	printf("输入的大写英文字母为%d.\n小写英文字母为%d.\n空格为%d.:\n数字为%d.\n其他字符的个数为%d.\n",E,e,k,num,ch);
	system("pause");
}