# include <stdio.h>
# include <stdlib.h>
int jiecheng(int n)
	{
		int i,p;
		p=1;
		for (i=1;i<=n;i++)
			p=p*i;
		return p;
	}	
main()
{
	int n,count;
	float s=0;
	
	printf("输入一个正整数");
	scanf("%d",&n);
	if (n<1)
		printf("只能输入正整数");
	else
		for(count=1;count<=n;count++)
			s+=1.0/jiecheng(count);
		printf("s=%.4f",s);
	system("pause");
	return 0;
}