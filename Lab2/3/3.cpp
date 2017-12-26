# include <stdio.h>
# include <stdlib.h>
# include <math.h>
main()
{
	float a,b,c,m,k,s,p;
	scanf("%f%f%f",&a,&b,&c);
	if (a<=0||b<=0||c<=0)
		printf("输入不能非正\n");
	else if (a+b<=c||a+c<=b||b+c<=a)
		printf("These sides do not correspond to a valid triangle\n");
	else
		{
		p=a+b+c;
		k=(a+b+c)/2;
		s=sqrt(k*(k-a)*(k-b)*(k-c));
		printf("perimeter=%7.2f\n",p);
		printf("size=%7.2f",s);
		}
	system("pause");
	return 0;
}