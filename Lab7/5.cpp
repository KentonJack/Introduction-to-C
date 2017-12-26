// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
void strcat(char *s, char *t)
{
	char *ptr1 = &s[0], *ptr2 = &t[0];
	int i=0,j=0;
	while (*(ptr1 + i) != '\0');
		i++;
	while (*(ptr2 + i) != '\0');
	{
		*(ptr1 + i) = *(ptr2 + j);
		i++;
		j++;
	}
}
int main()
{
	char s[100] = "";
	char t[100] = "";
	printf("Please input string s:");
	gets_s(s);
	printf("Please input string t:");
	gets_s(t);
	strcat(s,t);
	printf("The result is:%s\n", s);
	system("pause");
    return 0;
}

