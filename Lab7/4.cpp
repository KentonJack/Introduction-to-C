// 4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
void strmcpy(char *s, char *t, int m)
{
	int i,step=m;
	char *ptr1 = &s[0];
	char *ptr2 = &t[0];
	for (i = 0; i < 100;i++)
	{
		if(i>=step)
			*(ptr1 + i) = *(ptr2 + i);
	}
}
int main()
{
	int m;
	char s1[100] = "";
	char s2[100] = "";
	printf("Please input the 1st string:");
	gets_s(s1);
	printf("Please input the 2nd string:");
	gets_s(s2);
	printf("输入要开始的位置:");
	scanf_s("%d", &m);
	strmcpy(s1, s2, m);
	printf("复制后的字符串:%s", s1);
	system("pause");
	return 0;
}
