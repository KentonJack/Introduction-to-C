# include <stdio.h>
# include <stdlib.h>
main()
{
	int a,b,c,d,min1,min2,min;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b)
		min1=b;
	else
		min1=a;
	if (c>d)
		min2=d;
	else
		min2=c;
	if (min1>min2)
		min=min2;
	else
		min=min1;
	printf("×îĞ¡Öµ=%d",min);
	system("pause");
}