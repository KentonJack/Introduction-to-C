# include <stdio.h>
# include <stdlib.h>
main()
{
	printf("������һ��Ӣ����ĸ\n");
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