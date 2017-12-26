// 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
void is(int number)
{
	int sum = 0,temp=number,a,b;
	for (a = 2; a > +0; a--)
	{
		b = temp / (pow(10, a));
		sum += b*b*b;
		temp -= pow(10, a)*b;
	}
	if (sum == number)
		printf("%d\t", number);
}
int main()
{
	int i,m,n;
	printf("Please input m:");
	scanf_s("%d", &m);
	printf("Please input n:");
	scanf_s("%d", &n);
	if (m < 1 || n>500||m >= n)
		printf("Error input");
	else
	{
		for (i = m; i <= n; i++)
		{
			is(i);
		}
	}
	system("pause");
    return 0;
}

