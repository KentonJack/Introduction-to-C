# include <stdio.h>
# include <stdlib.h>
int power(int base,int n)
{
	int i,p;
	p=1;
	for(i=1;i<=n;++i)
		p=p*base;
	return p;
}
main()
{
	int a,n,sum=0,i,j,m;
	printf("输入正整数a和n\n");
	scanf("%d%d",&a,&n);
	if (a<1||n<1||a>9)
		printf("a和n必须为正整数且a小于9");
	else
	{
		for(j=1;j<=n;j++)
		{
			m=a*(power(10,j)-1)/9;
			sum=sum+m;			
		}
		printf("sum=%d",sum);
	}
	system("pause");
	return 0;
}