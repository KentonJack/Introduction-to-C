# include <stdio.h>
# include <stdlib.h>
main()
{
	int s;
	printf("����ɼ�");
	scanf("%d",&s);
	if (s>=60 && s<=100)
		printf("Pass");
	else if (s>=0 && s<60)
		printf("Fail"); 
	else 
		printf("����Ƿ�");
	system("pause");
}