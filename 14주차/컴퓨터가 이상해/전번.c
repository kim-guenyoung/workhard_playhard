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
	ptr->name[strlen(ptr->name) - 1] = 0;
	
	printf("Input Tel Number : ");
	fgets(ptr->phoneNum, sizeof(ptr->phoneNum), stdin);
	getchar();
	ptr->phoneNum[strlen(ptr->phoneNum) - 1] = 0;

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

void printAll(TelNode* ptr)
{
	
	printf("Name : %s\tTel : %s", ptr->name, ptr->phoneNum);
	ptr->name[strlen(ptr->name) - 1] = 0;
	ptr->phoneNum[strlen(ptr->phoneNum) - 1] = 0;
	return 0;
}
int search(TelNode* ptr, char* input_name, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		if (strcmp(ptr[i].name, input_name) == 0)
		{
			printf("존재합니다.\nName : %s\tTel : %s", ptr[i].name, ptr[i].phoneNum);
			return 1;
		}
		else
			return 0;
	}
}

int main(void)
{
	TelNode T[20];
	TelNode* ptr;
	int choice;
	TelNode input_name[20];
	int cnt = 0;

	puts("***** MENU *****");
	puts("1. Insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Print All");
	puts("5. Exit");
	
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
				if(search(T, input_name, cnt) == 1)
					continue;
				strcpy(T[cnt].name, input_name);
				printf("전번 : ");
				fgets(T[cnt].phoneNum, sizeof(T[cnt].phoneNum), stdin);
				T[cnt].phoneNum[strlen(T[cnt].phoneNum) - 1] = 0;

				break;
			case 4:
				printf("[Print All]\n");
				printAll(ptr);
				break;
			case 5:
				printf("[ Exit ]\n프로그램을 종료합니다.");
				return 0;
		}
	}
}*/