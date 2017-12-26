# include <stdio.h>
# include <stdlib.h>
main()
{
	int m,i,s=0;
	printf("输入一个正整数\n");
	scanf("%d",&m);
	if (m>2)
	{
		for (i=2;i<=m-1;i++)
			if (m%i==0)
				s=s+1;
				if (s==0)
					printf("YES");
				else
					printf("NO");
	}
	else if (m=1)
		printf("NO");
	else if (m=2)
		printf("YES");
	else 
		printf("m必须为正整数");
	system("pause");
	return 0;
}