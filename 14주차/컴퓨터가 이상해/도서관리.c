/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	struct Node* next;
	int data;
}Node;
void addFirst(Node* target, int data) //���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	Node* newNode = malloc(sizeof(sizeof(Node))); //�� ��� ����
	newNode->next = target->next; //�� ����� ���� ��忡 ���� ����� ���� ��带 ����
	newNode->data = data; //������ ����

	target->next = newNode; //���� ����� ���� ��忡 �� ��带 ����
}

int main(void)
{
	Node* head = malloc(sizeof(Node));

	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	Node* curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	curr = head->next;
	while (curr != NULL)
	{
		Node* next = curr->next; //���� ����� ���� ��� �ּҸ��� �ӽ÷� ����
		free(curr); //���� ��� �޸� ����
		curr = next;//�����Ϳ� ���� ����� �ּ� ����
	}
	free(head); //�Ӹ� ��� �޸� ����

	return 0;
}*/