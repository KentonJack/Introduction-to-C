# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n,i,j,t;
	int a[10]={0};
	printf("输入1个2到10之间的整数n\n");
	scanf("%d",&n);
	if (n<2||n>10)
		printf("n只能为2到10之间的整数");
	else
	{
		printf("输入n个整数\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n-i;j++)
				if(a[j]>a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		for(i=n;i>0;i--)
			printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}