// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
int factorsum(int number)
{
	int k,sum=0;
	for (k = 1; k <= number; k++)
	{
		if (number%k == 0)
			sum += k;
	}
	number = sum;
	return number;
}
int main()
{
	int m,n,i;
	printf("Please input m");
	scanf_s("%d", &m);
	printf("Please input n");
	scanf_s("%d", &n);
	if (m < 1 || n>500 || m >= n)
		printf("Error input\n");
	else
	{
		for (i = m; i <= n; i++)
		{
			if (i == factorsum(i))
				printf("%d\t", i);
		}
	}
	system("pause");
    return 0;
}

