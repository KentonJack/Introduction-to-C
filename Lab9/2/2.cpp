// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	FILE *fp, *fp1;
	char str[99] = "";
	int i = 0;
	fp = fopen("test.cpp", "r");
	fp1 = fopen("result.cpp", "w");
	if (fp == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (fp1 == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	while (fgets(str, 99, fp) != NULL)
	{
		for (i = 0; i < 99; i++)
		{
			if (str[i] == '/'&&str[i - 1] == '/')
			{
				str[i - 1] = '\n';
				str[i] = '\0';
				break;
			}
			if (str[i] == '*'&&str[i - 1] == '/')
			{
				str[i - 1] = '\n';
				str[i] = '\0';
				break;
			}
		}
		fputs(str, fp1);
	}
	_fcloseall();
	system("pause");
	return 0;
}

