# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int n,i,j,t;
	int a[100]={0};
	printf("�����������������ֵ�λ��\n");
	scanf("%d",&n);
	if (n<1||n>100)
		printf("nֻ��Ϊ1��100֮�������");
	else
	{
		printf("����n������\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=n-1;i>=0;i--)
			printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}