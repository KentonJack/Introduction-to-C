# include <stdio.h>
# include <stdlib.h>
main()
{
	int m,n,i,j,shang,r=0;
	printf("��С������������1��1000�䲻��ȵ�����\n");
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
				printf("��λ���ֵ������͵��ڱ������Ϊ%d\n",i);
			else
				printf("\0");
		}
	else
		printf("�����С������������1��1000�䲻��ȵ�����\n");
	system("pause");
	return 0;
}