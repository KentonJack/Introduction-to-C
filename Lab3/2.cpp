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
	printf("������һ����ʵ��\n"); 
	scanf("%f",&a);
	if (a>0.666667&&a<1)
	{
		for(n=1;;n++)
		{	sum=sum+power(-1,n+1)/(2.0*n-1);
			if (fabs(sum)<a)
				break;
		}
		printf("���Ϊ%.6f\n",sum);
	}
	else if (a<=0)
		printf("ֻ�����������������ʵ��\n");
	else
		printf("��\n");
	system("pause");
	return 0;
}