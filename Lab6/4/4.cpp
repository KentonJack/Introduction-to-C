// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
void prime(int k)
{
	int m, n, i, j, step = 0, sum = 0;
	printf("从小到大输入2个1到500间不相等的整数\n");
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
		printf("素数个数为%d\n", step);
		printf("和为%d\n", sum);
	}
	else
		printf("必须从小到大输入2个1到500间不相等的整数\n");
}
int main()
{
	int k=0;
	prime(k);
	system("pause");
    return 0;
}

