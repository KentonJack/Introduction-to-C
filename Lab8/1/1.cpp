// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	struct timecount
	{
		int hour;
		int minute;
		int second;
	} x,y,z;
	printf("Please input the time(24h):");
	scanf_s("%d%d%d",&x.hour,&x.minute,&x.second);
	printf("Please input the next time(24h):");
	scanf_s("%d%d%d", &y.hour, &y.minute, &y.second);
	if(x.hour>=y.hour)
		z.hour = x.hour - y.hour;
	else
		z.hour = x.hour - y.hour + 24;
	if (x.minute >= y.minute)
		z.minute = x.minute - y.minute;
	else
		z.minute = x.minute - y.minute + 60;
	if (x.second >= y.second)
		z.second = x.second - y.second;
	else
		z.second = x.second - y.second + 60;
	printf("The time difference is:%d:%d:%d", z.hour, z.minute, z.second);
	system("pause");
    return 0;
}

