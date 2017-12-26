// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#define LEN sizeof(struct student)
struct student
{
	int num;
	float mathscore;
	float englishscore;
	float cscore;
	float ave;
	struct student *next;
}x[100];
student	*make()
{
	student *head, *current, *last;
	head = current = (student *)malloc(LEN);
	last = (student *)malloc(LEN);
	int i = 0,n;
	scanf_s("%d", &n);
	if (n < 1)
	{
		printf("Error input.\n");
		system("pause");
		exit(1);
	}
	else
	{
		printf("Please input the number and the score:");
		scanf_s("%d%f%f%f", &last->num, &last->mathscore, &last->englishscore, &last->cscore);
		while (i < n)
		{
			current->next = last;
			current = last;
			last = (student *)malloc(LEN);
			printf("Please input the number and the score:");
			scanf_s("%d%f%f%f", &last->num, &last->mathscore, &last->englishscore, &last->cscore);
			i++;
		}
		current->next = NULL;
		free(last);
		return head;
	}
}
void count(student *head)
{
	student *p;
	int i = 0,j,k,m;
	float temp;
	p = head->next;
	if(p != NULL) 
	{
		while (p != NULL)
		{
			x[i].ave = (p->mathscore + p->englishscore + p->cscore) / 3;
			p = p->next;
			i++;
		}
		m = i;
		for (i = 0; i < m; i++)
		{
			k = i;
			for (j = k + 1; j < m; j++)
			{
				if (x[k].ave < x[j].ave)
					k = j;
			}
			if (k != i)
			{
				temp = x[k].ave;
				x[k].ave = x[i].ave;
				x[i].ave = temp;
				temp = x[k].num;
				x[k].num = x[i].num;
				x[i].num = temp;
				temp = x[k].mathscore;
				x[k].mathscore = x[i].mathscore;
				x[i].mathscore = temp;
				temp = x[k].englishscore;
				x[k].englishscore = x[i].englishscore;
				x[i].englishscore = temp;
				temp = x[k].cscore;
				x[k].cscore = x[i].cscore;
				x[i].cscore = temp;
			}
		}
	}
}
void func(student *head)
{
	student *p;
	p = head->next;
	int i;
	for (i = 0; x[i].ave != 0; i++)
	{
		x[i].num = p->num;
		x[i].mathscore = p->mathscore;
		x[i].englishscore = p->englishscore;
		x[i].cscore = p->cscore;
		printf("%d %.1f %.1f %.1f %.1f\n", x[i].num, x[i].mathscore, x[i].englishscore, x[i].cscore, x[i].ave);
		p = p->next;
	}
}
void main()
{
	student *head = NULL;
	head=make();
	count(head);
	func(head);
	system("pause");
}