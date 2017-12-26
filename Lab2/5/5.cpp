# include <stdio.h>
# include <stdlib.h>
main()
{
	printf("请输入一个英文字母\n");
	char ip;
	scanf("%c",&ip);
	if (ip>='a'&&ip<='z')
	{
		ip=ip+'A'-'a';
		printf("%c",ip);
	}
	else if (ip>='A'&&ip<='Z')
	{
		ip=ip+'a'-'A';
		printf("%c",ip);
	}
	else
		printf("%c",ip);
	system("pause");
}