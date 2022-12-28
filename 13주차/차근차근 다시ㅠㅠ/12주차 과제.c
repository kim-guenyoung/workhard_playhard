/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct telnode{
	char name[20];
	char phoneNum[20];
	struct number_book* next;
}TelNode;

void print_list(TelNode* head)
{
	for (TelNode* p = head; p != NULL; p = p->next)
		printf("%s->", p->name);
}

int main(void)
{
	TelNode* list = NULL;
	TelNode* prev = NULL, * p, * next;
	char buffer[20];
	int i = 0;

	while (1)
	{
		printf("%d : 이름 입력 : ", i + 1);
		gets(buffer, 20);
		if (buffer[0] == 'q' && i >= 5)
			break;
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5명 이상 입력해야 합니다.\n");
			printf("%d : 이름 입력 : ", i + 1);
			gets(buffer, 20);
		}
		p = (TelNode*)malloc(sizeof(TelNode));
		printf("%d : 전화번호 입력 : ", i + 1);
		gets(buffer, 20);

		p = (TelNode*)malloc(sizeof(TelNode));
		i++;
		print_list(p);
	}
	return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct telnode
{
	char name[20];
	char phoneNum[20];
	struct number_book* next;
} TelNode;

int main(void)
{
	TelNode* list = NULL;
	TelNode* prev = NULL, * p, * next;
	char buffer[20];
	int i = 0;

	while (1)
	{
		printf("%d : 이름 입력 : ", i + 1);
		gets(buffer);
		if (buffer[0] == 'q' && i >= 5)
			break;
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5명 이상 입력해야 합니다.\n");
			printf("%d : 이름 입력 : ", i + 1);
			gets(buffer);
		}
		p = (TelNode*)malloc(sizeof(TelNode));
		printf("%d : 전화번호 입력 : ", i + 1);
		gets(buffer);

		p = (TelNode*)malloc(sizeof(TelNode));
		i++;
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct telnode
{
	char name[20];
	char phoneNum[20];
	struct telnode *next;
}TelNode;

int main(void)
{
	TelNode* list = NULL;
	TelNode* prev = NULL, * p, * next;
	char buffer[20];
	int i = 0;
	
	while (1)
	{
		printf("%d : 이름 입력 : ", i + 1);
		gets(buffer);
		if (buffer[0] == 'q' && i >= 5)
			break;
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5명 이상 입력해야 합니다.\n");
			printf("%d : 이름 입력 : ", i + 1);
			gets(buffer);
		}
		p = (TelNode*)malloc(sizeof(TelNode));
		printf("%d : 전화번호 입력 : ", i + 1);
		gets(buffer);

		p = (TelNode*)malloc(sizeof(TelNode));
		i++;

	}
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct telnode
{
	char name[20];
	char phoneNum[20];
	struct telnode* next;
}TelNode;

int main(void)
{
	TelNode* list = NULL;
	TelNode* prev = NULL, * p, * next;
	char buffer[20];
	int i = 0;

	while (1)
	{
		printf("%d : 이름 입력 : ", i + 1);
		gets(buffer);
		if (buffer[0] == 'q' && i >= 5)
			break;
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5명 이상 입력해야 합니다.\n");
			printf("%d : 이름 입력 : ", i + 1);
			gets(buffer);
		}
		p = (TelNode*)malloc(sizeof(TelNode));
		printf("%d : 전화번호 입력 : ", i + 1);
		gets(buffer);

		p = (TelNode*)malloc(sizeof(TelNode));
		i++;

	}
	return 0;
}*/