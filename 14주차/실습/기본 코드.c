/*#define _CRT_SECURE_NO_WARNINGS
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

	//���Ḯ��Ʈ ����
	while (1)
	{
		printf("%d : �̸� : ", i + 1);
		gets(buffer);
		if ((buffer[0] == 'q' && buffer[1] == '\0') && (i >= 5))
			break;
		else if (buffer[0] == 'q' && i < 5)
		{
			printf("5�� �̻� �Է��ؾ� �մϴ�.\n");
			continue;
		}
		p = (TelNode*)malloc(sizeof(TelNode));

		strcpy(p->name, buffer);

		printf("��ȣ :");
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
		if (p->next != NULL)
		{
			printf("%s�� %s���� ������ �ؾ� �մϴ�.\n", p->name, p->next->name);
			printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", p->next->name, p->next->phoneNum);
			p = p->next;
		}
		else
		{
			printf("%s�� ������ �޾ҽ��ϴ�. ��� �������鿡�� ������ �߽��ϴ�.\n", p->name);
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
}*/