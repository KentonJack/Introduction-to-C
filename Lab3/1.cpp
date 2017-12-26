# include <stdio.h>
# include <stdlib.h>
main()
{
	int n,r=1,count=0;
	printf("输入一个正整数\n");
	scanf("%d",&n);
	if (n>=1 && n<=50)
	{
		while (count<=n-1)
		{
			r*=count+1;
			count++;
		}
		printf("n!=%d",r);
	}
	else
		printf("只能输入不大于50的正整数\n");
	system("pause");
}