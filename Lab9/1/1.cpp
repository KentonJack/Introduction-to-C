#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *fp;
	char a[100];
	int i,num=0,cha=0,etc=0;
	fp=fopen("test.txt","r");
	if(fp==NULL)
	{
		printf("Error open file.\n");
		system("pause");
		exit(1);
	}
	for(i=0;fgetc(fp)!=EOF;i++)
	{
		a[i]=fgetc(fp);
		if(a[i]>='0'&&a[i]<='9')
			num++;
		else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			cha++;
		else
			etc++;
	}
	printf("The number of numbers is:%d\n",num);
	printf("The number of characters is:%d\n",cha);
	printf("The number of others is:%d\n",etc);
	fclose(fp);
	system("pause");
	return 0;
}