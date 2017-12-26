# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n,i,j,judge1,judge2,line=0,column=0,max,min;
	int a[6][6]={0};
	printf("输入一个1到6之间的数");
	scanf("%d",&n);
	if (n<1||n>6)
		printf("n只能是一个1到6之间的数");
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
			printf("下标为[%d][%d]",line,column);
	}
	system("pause");
	return 0;
}