# include <stdio.h>
# include <stdlib.h>
int a[6][6];
int main(void)
{
	int n,sum=0;
	printf("输入1个在1到6间的整数n\n");
	scanf("%d",&n);
	if (n<1||n>6)
		printf("n只能为1到6间的整数");
	else
	{
		printf("输入1个n阶方阵a\n");
		int i,j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			sum+=a[i][i];
		printf("对角线和为%d",sum);
	}
	system("pause");
	return 0;
}