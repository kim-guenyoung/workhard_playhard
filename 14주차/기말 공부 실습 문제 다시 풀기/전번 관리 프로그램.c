/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct telnode
{
	char name[20];
	char phoneNum[20];
	struct telnode* next;
}TelNode;
void insert(TelNode* ptr)
{
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = (TelNode*)malloc(sizeof(TelNode));
	ptr = ptr->next;

	printf("Input Name : ");
	fgets(ptr->name,sizeof(ptr->name), stdin);
	getchar();
	printf("Input Tel Number : ");
	fgets(ptr->phoneNum, sizeof(ptr->phoneNum), stdin);
	getchar();

	ptr->next = NULL;
	puts("Data Inserted");
}
void delete(TelNode* ptr)
{
	TelNode* prev;
	char phoneNum[20];
	printf("삭제할 전화번호를 선택하세요 : ");
	fgets(phoneNum, sizeof(phoneNum), stdin);
	while (ptr->next != NULL)
	{
		prev = ptr;
		ptr = ptr->next;

		if (strcmp(phoneNum, phoneNum) == 0)
		{
			printf("삭제되었습니다");
			prev->next = ptr->next;
			free(ptr);
			break;
		}
		else
		{
			printf("전화번호부에 존재하지 않는 전화번호입니다. 다시 입력해주세요.");
		//	delete(ptr);
		}
	}
}
int main(void)
{
	TelNode* ptr;
	int choice;

	
	puts("***** MENU *****");
	puts("1. Insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Exit");
	printf("Choose the item : ");
	
	while (1)
	{
		scanf("%d", &choice);
		ptr = (TelNode*)malloc(sizeof(TelNode));
		ptr->next = NULL;
		switch (choice)
		{
			case 1:
				printf("[ INSERT ]\n");
				insert(ptr);
				break;
			case 2:
				printf("[ Delete ]\n");
				delete(ptr);
				break;
			case 3:
				printf("[ Search ]\n");
				break;
			case 4:
				printf("[ Exit ]\n프로그램을 종료합니다.");
				return 0;
		}
	}
}*/