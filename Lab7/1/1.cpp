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
	printf("����������λ��n:");
	scanf("%d",&n);
	if(n<1||n>100)
		printf("nΪ������100��������");
	else
	{
		printf("����������Ԫ��:");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("������Ҫ���ҵ�Ԫ��x:");
		scanf("%d",&x);
		result=search(a,n,x);
		printf("%d",result);
	}
	system("pause");
	return 0;
}
