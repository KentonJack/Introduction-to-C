# include <stdio.h>
# include <stdlib.h>
main()
{
	char ip;
	int zimu=0,shuzi=0,kongge=0,qita=0,i;
	for(i=0;;i++)
	{
		ip=getchar();
		if (ip==32)
			kongge++;
		else if ((ip>='A'&&ip<='Z')||(ip>='a'&&ip<='z'))
			zimu++;
		else if (ip>='0'&&ip<='9')
			shuzi++;
		else if (ip=13)
			break;
		else
			qita++;
	}
	printf("��ĸ��=%d",zimu);
	printf("������=%d",shuzi);
	printf("�ո���=%d",kongge);
	printf("�����ַ���=%d",qita);
	system("pause");
	return 0;
}