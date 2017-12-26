// 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
int countdigit(int number,int digit)
{
	int outp=0,i;
	char b[20];
	_itoa_s(number,b,10);
	for (i = 0; i < 20; i++)
	{
		if (b[i] == '2')
			outp++;
	}
	return outp; 
}
int main()
{
	int number,digit,result;
	printf("Please input a integer.\n");
	scanf_s("%d",&number);
	printf("Please input a number you want to scan.\n");
	scanf_s("%d", &digit);
	result=countdigit(number,digit);
	printf("The answer is %d.\n",result);
	system("pause");
    return 0;
}

