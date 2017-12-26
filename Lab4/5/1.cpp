# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n,i,j,t;
	int a[100]={0};
	printf("请输入你想输入数字的位数\n");
	scanf("%d",&n);
	if (n<1||n>100)
		printf("n只能为1到100之间的整数");
	else
	{
		printf("输入n个整数\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=n-1;i>=0;i--)
			printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}