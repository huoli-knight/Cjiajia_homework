#include<stdio.h>
#include<stdlib.h>
void main()        
{
	char ab[3][3];               //80̫���䣬��Ϊ2��
	int i,j,E=0,e=0,k=0,ch=0,num=0;
	printf("�����������ַ���ÿ��������\n");
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
	printf("����Ĵ�дӢ����ĸΪ%d.\nСдӢ����ĸΪ%d.\n�ո�Ϊ%d.:\n����Ϊ%d.\n�����ַ��ĸ���Ϊ%d.\n",E,e,k,num,ch);
	system("pause");
}