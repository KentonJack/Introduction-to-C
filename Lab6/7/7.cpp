// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
int reverse(int number)
{
	int sum = 0;
	while (number)
	{
		sum = sum * 10 + number % 10;
		number /= 10;
	}
	number = sum;
	return number;
}
int main()
{   
	int number, op;
	printf("Please input the number:");
	scanf_s("%d", &number);
	op = reverse(number);
	printf("%d\n", op);
	system("pause");
    return 0;
}

