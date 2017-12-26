// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int a, b;
	FILE *fp1, *fp2, *fp3;
	fp1 = fopen("a1.txt", "r");
	fp2 = fopen("a2.txt", "r");
	fp3 = fopen("a3.txt", "w");
	if (fp1 == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (fp2 == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (fp3 == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	while (!feof(fp1)&&!feof(fp2))
	{
		fscanf_s(fp1, "%d", &a);
		fscanf_s(fp2, "%d", &b);
		if (a >= b)
			fprintf(fp3, "%d%d", b, a);
		else
			fprintf(fp3, "%d%d", a, b);
	}
	if (feof(fp1) && !feof(fp2))
	{
		fscanf_s(fp2, "%d", &b);
		fprintf(fp3, "%d", b);
	}
	if (!feof(fp1) && feof(fp2))
	{
		fscanf_s(fp1, "%d", &a);
		fprintf(fp3, "%d", a);
	}
	_fcloseall();
	system("pause");
    return 0;
}

