# include<stdio.h>
# include<stdlib.h>
main()
{
	int ip,y;
	printf("������һ������\n");
	scanf("%d",&ip);
	if (ip>0)
		y=1;
	else if (ip<0)
		y=-1;
	else
		y=0;
	printf("y=%d",y);
	system("pause");
}