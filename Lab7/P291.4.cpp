// P291.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i,m,n=1,k;
	char a[100];
	char *ptr=&a[0];
	char temp;
	printf("Please input integers:");
	gets_s(a);
	for (i = 0; *(ptr + i) != '\0'; i++)
		n++;
	printf("Please input m:");
	scanf_s("%d+1", &k);
	m = k + 1;
	if (m < 1||m > n)
		printf("Error input\n");
	else
	{
		for (i = 0; i < n - m; i++)
			*(ptr + n + i) = *(ptr + i);
		char *ptr2 = &(*(ptr + n - m));
		for (i = 0; i < n; i++)
			printf("%c", *(ptr2 + i));
	}
	system("pause");
    return 0;
}

