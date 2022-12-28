/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct pointer
{
	int num;
	struct pointer* next;
}Pointer;


void addFirst(Pointer* target, int data) //���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	Pointer* new = malloc(sizeof(Pointer)); //�� ��� ����
	new->next = target->next; //�� ����� ���� ��忡 ���� ����� ���� ��带 ����
	new->num = data; //������ ����

	target->next = new; //���� ����� ���� ��忡 �� ��带 ����
}
int main(void)
{
	Pointer* head = malloc(sizeof(Pointer)); //�Ӹ� ��� ����(������ ����X)

	head->next = NULL;

	addFirst(head, 10); //�Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 20); //�Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 30); //�Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 40); //�Ӹ� ��� �ڿ� �� ��� �߰�


	Pointer* curr = head->next; //��ȸ�� �����Ϳ�

	while (curr != NULL) //�����Ͱ� NULL�� �ƴ� ������ ��� �ݺ�
	{
		printf("%d\n", curr->num); //���� ����� ������ ���
		curr = curr->next; //�����Ϳ� ���� ���� �ּ� ����
	}

	curr = head->next; //���Ḯ��Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����

	while (curr != NULL)
	{
		Pointer* next = curr->next; //���� ����� ���� ��� �ּҸ� �ӽ÷� ����
		free(curr); //���� ��� �޸� ����
		curr = next; //�����Ϳ� ���� ����� �ּ� ����
	}
	free(head); //�Ӹ� ��� �޸� ����
	return 0;
}*/

