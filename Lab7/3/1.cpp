# include "stdio.h"
# include "stdlib.h"
void delchar(char *s, char c)
{
	char del=c;
	char *a=&s[0];
	int i;
	for(i=0;i<100;i++)
	{
		if(del==*(a+i))
			*(a+i)=' ';
	}
}
int main()
{
	char m;
	char ip[100]="";
	printf("ÊäÈë1ÐÐ×Ö·û´®:");
	gets(ip);
	printf("ÊäÈëÒªÉ¾³ýµÄ×Ö·û:");
	scanf("%c",&m);
	delchar(ip,m);
	printf("ÐÞ¸ÄºóµÄ×Ö·û´®:%s",ip);
	system("pause");
	return 0;
}