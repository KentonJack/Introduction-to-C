// P291.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i,count=0;
	char s[100];
	char *ptr = &s[0];
	printf("Please input the string:");
	gets_s(s);
	for (i = 0; *(ptr + i) != '\0'; i++)
		count++;
	printf("The length is:%d\n",count);
	system("pause");
    return 0;
}

