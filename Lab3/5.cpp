# include <stdio.h>
# include <stdlib.h>
main()
{
	int m,i,s=0;
	printf("����һ��������\n");
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
		printf("m����Ϊ������");
	system("pause");
	return 0;
}