# include "stdio.h"
# include "stdlib.h"
int search(int *a,int n,int x)
{
	int *list=&a[0];
	int m=-1,z=x,i;
	for(i=0;i<n;i++)
	{
		if(*(list+i)==z)
			m=i;
	}
	return m;
}
int main()
{
	int a[100];
	int i,x,n,result;
	printf("请输入数组位数n:");
	scanf("%d",&n);
	if(n<1||n>100)
		printf("n为不超过100的正整数");
	else
	{
		printf("请输入数组元素:");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("请输入要查找的元素x:");
		scanf("%d",&x);
		result=search(a,n,x);
		printf("%d",result);
	}
	system("pause");
	return 0;
}
