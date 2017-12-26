// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#define LEN sizeof(struct list1)
struct list1
{
	char name; 
	float wage;  
	struct list1 *next;
};
struct list2
{
	char name;
	float wage;  
	struct list2 *next;
};
int n; 
struct list1 *Create()
{
	struct list1 *hlist1; 
	struct list1 *p1 = NULL;
	struct list1 *p2 = NULL;
	n = 0; 
	p1 = (struct list1 *) malloc(LEN);
	p2 = p1;  
	if (p1 == NULL)
	{
		printf("\nCann't create it, try it again in a moment!\n");
		return NULL;
	}
	else 
	{
		printf("Input 0 as name to quit");
		hlist1 = NULL;
		printf("Please input %d node -- name,wage: ", n + 1);
		scanf("%s %f", &(p1->name), &(p1->wage));
	}
	while (p1->name != '0')
	{
		n += 1; 
		if (n == 1) 
		{
			hlist1 = p1;
			p2->next = NULL;  
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct list1 *) malloc(LEN);
		printf("Please input %d node -- name,wage: ", n + 1);
		scanf("%s %f", &(p1->name), &(p1->wage));
	}
	p2->next = NULL;
	free(p1);
	p1 = NULL;
	return hlist1;
}
struct list2 *Create2()
{
	struct list2 *hlist2;
	struct list2 *p1 = NULL;
	struct list2 *p2 = NULL;
	n = 0;
	p1 = (struct list2 *) malloc(LEN);
	p2 = p1;
	if (p1 == NULL)
	{
		printf("\nCann't create it, try it again in a moment!\n");
		return NULL;
	}
	else
	{
		printf("Input 0 as name to quit");
		hlist2 = NULL; 
		printf("Please input %d node -- name,wage: ", n + 1);
		scanf("%s %f", &(p1->name), &(p1->wage));
	}
	while (p1->name != '0')
	{
		n += 1;
		if (n == 1)
		{
			hlist2 = p1;
			p2->next = NULL; 
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1; 
		p1 = (struct list2 *) malloc(LEN);
		printf("Please input %d node -- name,wage: ", n + 1);
		scanf("%s %f", &(p1->name), &(p1->wage));
	}
	p2->next = NULL;
	free(p1);
	p1 = NULL;
	return hlist2;  
}
list1 Merge(list1 *hlist1, list2 *hlist2)
{
	list1 *ptr = hlist1;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = hlist2;
	return *hlist1;
}
int main()
{
	list1 *hlist1 = NULL;
	list2 *hlist2 = NULL;
	Create();
	Create2();
	Merge(hlist1, hlist2);
	system("pause");
    return 0;
}

