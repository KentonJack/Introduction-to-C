# include <stdio.h>
# include <stdlib.h>
# include <math.h>
float power(float base,float n)
{
	float i,p;
	p=1;
	for(i=1;i<=n;++i)
		p=p*base;
	return p;
}
main()
{
	int n;
	float a,sum=0;
	printf("请输入一个正实数\n"); 
	scanf("%f",&a);
	if (a>0.666667&&a<1)
	{
		for(n=1;;n++)
		{	sum=sum+power(-1,n+1)/(2.0*n-1);
			if (fabs(sum)<a)
				break;
		}
		printf("结果为%.6f\n",sum);
	}
	else if (a<=0)
		printf("只能输入符合条件的正实数\n");
	else
		printf("无\n");
	system("pause");
	return 0;
}