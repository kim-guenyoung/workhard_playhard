/*
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	struct Node* next;
	int data;
}Node;

void addFirst(Node* target, int data)
{
	Node* newNode = malloc(sizeof(Node));
	newNode->next = target->next;
	newNode->data = data;

	target->next = newNode;
}

Node* findNode(Node* node, int data)
{
	Node* newNode = malloc(sizeof(Node));
	if (node == NULL)
		return NULL;
	Node* curr = node->next;

	while (curr != NULL)
	{
		if (curr->data == data) //���� ����� �����Ϳ� �Ű������� ���� �����͸� ���ؼ� ���ٸ�
			return curr; //���� ��� ��ȯ
		
		curr = curr->next; //���� ���� ���� �ʴٸ� ���� ���� �Ѿ�� ��
	}
	return NULL; //�� �˻��ߴµ�, ���� ���� ���ٸ� NULL ��ȯ
}
int main(void)
{
	Node* head = malloc(sizeof(Node));
	head->next = NULL;

	addFirst(head, 10);
	addFirst(head, 20);
	addFirst(head, 30);

	Node* found = findNode(head, 20);
	printf("I founded %d\n", found->data);

	Node* curr = head->next;
	while (curr != NULL)
	{
		Node* next = curr->next;
		free(curr);
		curr = next;
	}
	free(head);

	return 0;
}*/