# include <stdio.h>
# include <stdlib.h>
main()
{
	int num=0,i;
	char a[100]={""};
	printf("最大空间为100\n");
	gets(a);
	for(i=0;i<100;i++)
	{
		if((a[i]==32)&&(a[i-1]!=32))
			num++;
	}
	printf("单词数为%d\n",num+1);
	system("pause");
	return 0;
}