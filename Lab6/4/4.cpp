// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
void prime(int k)
{
	int m, n, i, j, step = 0, sum = 0;
	printf("��С��������2��1��500�䲻��ȵ�����\n");
	scanf_s("%d%d", &m, &n);
	if (m >= 1 && n <= 500 && m<n)
	{
		for (i = m; i <= n; i++)
			for (j = 2; j <= n - 1;)
			{
				if (i%j != 0)
					step = step + 1;
				sum = sum + i;
			}
		printf("��������Ϊ%d\n", step);
		printf("��Ϊ%d\n", sum);
	}
	else
		printf("�����С��������2��1��500�䲻��ȵ�����\n");
}
int main()
{
	int k=0;
	prime(k);
	system("pause");
    return 0;
}

