// 4.cpp : �������̨Ӧ�ó������ڵ㡣
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
	printf("����Ҫ��ʼ��λ��:");
	scanf_s("%d", &m);
	strmcpy(s1, s2, m);
	printf("���ƺ���ַ���:%s", s1);
	system("pause");
	return 0;
}
