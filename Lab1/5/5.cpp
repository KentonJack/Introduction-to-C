#include <stdio.h>
#include <stdlib.h>
main()
{
	char ip,op;
	printf("请输入一个大写字母");
	scanf("%c",&ip);
	op=ip+'a'-'A';
	printf("%c",op);
	system("pause");
}