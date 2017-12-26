# include <stdio.h>
# include <stdlib.h>
int main(void)
{
	int a[10];
	int i,min,max,temp,mini=0,maxi=0;
	printf("输入10个整数\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=1;i<10;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
			mini=i;
		}
		if (a[i]>max)
		{
			max=a[i];
			maxi=i;
		}
	}
	temp=a[mini];
	a[mini]=a[0];
	a[0]=temp;
	temp=a[maxi];
	a[maxi]=a[9];
	a[9]=temp;
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	system("pause");
	return 0;
}