# include <stdio.h>
# include <stdlib.h>
main()
{
	int m,n,i,j,shang,r=0;
	printf("从小到大输入两个1到1000间不相等的整数\n");
	scanf("%d%d",&m,&n);
	if (m>=1&&n<=1000&&m<n)
		for(i=m;i<=n;i++)
		{
			for(j=1000;j>=1;j/=10)
			{
				shang=i/j;
				r+=shang*shang*shang;
			}
			if (i==r)
				printf("各位数字的立方和等于本身的数为%d\n",i);
			else
				printf("\0");
		}
	else
		printf("必须从小到大输入两个1到1000间不相等的整数\n");
	system("pause");
	return 0;
}