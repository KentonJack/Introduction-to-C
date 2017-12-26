# include <stdio.h>
# include <stdlib.h>
main()
{
	float f,c;
	printf("f=");
	scanf("%f",&f);
	c=(f-32)*5.00/9;
	printf("c=%7.2f",c);
	system("pause");
}