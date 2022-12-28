
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
	char phoneNum[20];
	int i = 0;
	char sick[20];

	//연결리스트 생성
	while (1)
	{
		printf("%d : 이름 : ", i + 1);
		gets(buffer);
		if ((buffer[0] == 'q' && buffer[1] == '\0') && (i >= 5))
		{

			printf("아픈 사람 입력 : ");
			scanf("%s", sick);
			break;
		}
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5명 이상 입력해야 합니다.\n");
			continue;
		}
		p = (TelNode*)malloc(sizeof(TelNode));

		strcpy(p->name, buffer);

		printf("번호 :");
		gets(buffer);
		strcpy(p->phoneNum, buffer);

		if (list == NULL)
			list = p;
		else {
			prev->next = p;

			p->next = NULL;
		}
		prev = p;
		i++;
	}
	p = list;
	while (1)
	{
		
		if (strcmp(p->next->name, sick) == 0)
		{
			printf("%s는 %s에게 연락을 해야 합니다.\n", p->name, p->next->next->name);
			printf("%s의 전화번호는 %s입니다.\n", p->next->next->name, p->next->next->phoneNum);
		}
		if (p->next != NULL)
		{
			printf("%s는 %s에게 연락을 해야 합니다.\n", p->name, p->next->name);
			printf("%s의 전화번호는 %s입니다.\n", p->next->name, p->next->phoneNum);
			p = p->next;
		}
		
		else
		{
			printf("%s이 연락을 받았습니다. 모든 구성원들에게 연락을 했습니다.\n", p->name);
			break;
		}
	}
	p = list;
	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	return 0;
}