# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n,i,j,judge1,judge2,line=0,column=0,max,min;
	int a[6][6]={0};
	printf("����һ��1��6֮�����");
	scanf("%d",&n);
	if (n<1||n>6)
		printf("nֻ����һ��1��6֮�����");
	else
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",a[i][j]);
		for(i=0;i<n;i++)
		{
			max=a[i][0];
			for(j=0;j<n;j++)
			{
				if(a[i][j]>max)
				{
					max=a[i][j];
					column=j;
				}
			}
		}
			min=a[0][column];
			for(i=0;i<n;i++)
			{
				if(a[i][column]<min)
				{
					min=a[i][column];
					line=i;
				}
			}
			printf("�±�Ϊ[%d][%d]",line,column);
	}
	system("pause");
	return 0;
}