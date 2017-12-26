# include <stdio.h>
# include <stdlib.h>
main()
{
	int s;
	printf("输入成绩");
	scanf("%d",&s);
	if (s>=60 && s<=100)
		printf("Pass");
	else if (s>=0 && s<60)
		printf("Fail"); 
	else 
		printf("输入非法");
	system("pause");
}