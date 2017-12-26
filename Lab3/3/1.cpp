# include <stdio.h>
# include <stdlib.h>
main()
{
	int n,count;
	float sum=0,a1=1,a2=2,middle;
	printf("输入正整数n\n");
	scanf("%d",&n);
	{
		if (n<1)
		printf("n必须为正整数");
		else
		{
			for (count=1;count<=n;count++)
			sum=sum+a2*1.0/a1;
			middle=a1;
			a1=a2;
			a2=middle+a2;
		}
	}
	printf("sum=%0.2f",sum);
	system("pause");
}