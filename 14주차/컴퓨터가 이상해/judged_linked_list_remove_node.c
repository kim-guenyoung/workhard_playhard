/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	struct Node* next;
	int data;
}Node;

void addFirst(Node* target, int data)
{
	if (target == NULL) //���� ��尡 NULL�̸�
		return; //�Լ��� ����

	Node* newNode = malloc(sizeof(Node));
	if (newNode == NULL)
		return;
	newNode->next = target->next; //�� ����� ���� ��忡 ���� ����� ���� ��带 ����
	newNode->data = data; //������ ����
	
	target->next = newNode; //���� ����� ���� ��忡 �� ��带 ����
}

void removeNode(Node* node, int data)
{
	Node* delNode = node;

	if (node == NULL)
		return; 	// ������ ���� ���� ��� �Լ� ����

	else if (node->data == node) // ������ ��尡 ù ����� ��� 
	{
		node = node->next;
		return;
	}
	else
	{
		while (delNode->next != NULL)
		{
			if (delNode->next->data == data)
			{
				delNode->next = delNode->next->next;
				return;
			}
			delNode = delNode->next;
		}
	}
}
int main(void)
{
	int numArr[10] = { 0, };
	int removeNum;

	scanf("%d %d %d %d %d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5], &numArr[6],
		&numArr[7], &numArr[8], &numArr[9]);
	scanf("%d", &removeNum);

	Node* head = malloc(sizeof(Node));
	head->next = NULL;
	int i;
	for (i = 0; i < 10; i++)
		addFirst(head, numArr[i]);

	removeNode(head, removeNum);

	Node* curr = head->next;
	
	while (curr != NULL)
	{
		printf("%d ", curr->data);
		curr = curr->next;
	}
	while (curr != NULL)
	{
		Node* next = curr->next;
		free(curr);
		curr = next;
	}
	
	free(head);
}*/