/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Address
{
	char name[20];
	char phoneNum[20];
	struct Address* next;
}Address;
void Insert(Address* start)
{
	Address* current = NULL;
	Address* end = NULL;
	

	current = (Address*)malloc(sizeof(Address));
	current->next = NULL;

	printf("이름 : ");
	scanf("%s", current->name);
	printf("전화번호 : ");
	scanf("%s", current->phoneNum);

	if (start->next == NULL)
	{
		start->next = current;
		return 0;
	}
	else
	{
		end = start;
		while (1)
		{
			if (end->next == NULL)
			{
				end->next = current;
				return 0;
			}
			else
			{
				end = end->next;
			}
		}
	}
}
void PrintAll(Address* start)
{
	Address* current;
	current = start->next;
	while (current != NULL)
	{
		printf("name : %s\n", current->name);
		printf("tel : %s\n", current->phoneNum);
		current = current->next;
	}
	return 0;
}
int main(void)
{
	Address* head = NULL;
	head = (Address*)malloc(sizeof(Address));
	head->next = NULL;
	int num = 0;
	char choice = 'q';
	while (1)
	{
		Address* current = head;
		printf("q 입력 시 종료\n");
		scanf("%c", &choice);

		if (choice != 'q')
		{
			num += 1;
			insert(head);
		}
		else
		{
			if (num > 5)
				break;
			else
				printf("5명 이상 입력해주세요\n");
		}
	}
}
*/ 