# include <stdio.h>
# include <stdlib.h>
int a[6][6];
int main(void)
{
	int n,sum=0;
	printf("����1����1��6�������n\n");
	scanf("%d",&n);
	if (n<1||n>6)
		printf("nֻ��Ϊ1��6�������");
	else
	{
		printf("����1��n�׷���a\n");
		int i,j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			sum+=a[i][i];
		printf("�Խ��ߺ�Ϊ%d",sum);
	}
	system("pause");
	return 0;
}