# include <stdio.h>
# include <stdlib.h>
main()
{
	float a,b,sum,minus;
	printf("a=");
    scanf("%f",&a);
	printf("b=");
    scanf("%f",&b);
	sum=a+b;
	minus=a-b;
	printf("a+b=%f\n",sum);
	printf("a-b=%f",minus);
	system("pause");
}