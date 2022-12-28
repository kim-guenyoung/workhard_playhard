
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
	TelNode* list = NULL; //list�� �ʱ갪�� �ݵ�� NULL������ ����
	TelNode* prev = NULL, * p, * next; //p, prev �ʱ갪 NULL�� ����
	char buffer[20];
	char phoneNum[20];
	int i = 0;

	char sick[20];
	

	//���Ḯ��Ʈ ����
	while (1)
	{
		
		printf("%d : �̸� : ", i + 1);
		gets(buffer); //�� �ٲ� ���ڸ� NULL�� ��ȯ�Ͽ� ��ȯ
		if ((buffer[0] == 'q' && buffer[1] == '\0') && (i >= 5))
			break;
		else if (buffer[0] == 'q' && i < 5) 
		{
			printf("5�� �̻� �Է��ؾ� �մϴ�.\n");
			continue;
		}
		p = (TelNode*)malloc(sizeof(TelNode)); //�������� ������ ����ü �ּҸ� ��ȯ�ϰ� �� �ּҸ� ��ȯ�ϰ� �� �ּҸ� ������ p�� ����

		strcpy(p->name, buffer);

		printf("��ȣ :");
		gets(buffer);
		strcpy(p->phoneNum, buffer);

		if (list == NULL) //����Ʈ�� ����ִ� ���
			list = p; //���ο� ��带 ù ��° ���� �����Ѵ�.
		else //����Ʈ�� ������� ���� ���
		{
			prev->next = p; //���ο� ��带 ���� ����� next �ʵ忡 ����
			p->next = NULL; //���ο� ����� ��ũ �ʵ带 NULL�� ����
		}
		prev = p; //���� ��带 ���� ���� ����
		i++;
	}

	//���� ����Ʈ�� ����ִ� ������ ���
	p = list;
	printf("���� ��� �Է� : ");
	scanf("%s", sick);
	while (1)
	{
		
		if (p->next != NULL)
		{	
			if (strcmp(p->next->name, sick) == 0 )
			{
				printf("%s�� %s���� ������ �ؾ� �մϴ�.\n", p->name, p->next->next->name);
				printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", p->next->next->name, p->next->next->phoneNum);
			}
			else
			{
				printf("%s�� %s���� ������ �ؾ� �մϴ�.\n", p->name, p->next->name);
				printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", p->next->name, p->next->phoneNum);
			}
			p = p->next;
		}
		else
		{
			printf("%s�� ������ �޾ҽ��ϴ�. ��� �������鿡�� ������ �߽��ϴ�.\n", p->name);
			break;
		}
	}
	//�Ҵ�� ���� �޸� �ݳ�
	p = list;
	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	return 0;
}