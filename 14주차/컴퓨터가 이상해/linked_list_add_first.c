/*
#include <stdio.h>
#include <stdlib.h>

typedef struct //���Ḯ��Ʈ�� ��� ����ü
{
	struct Node* next; //���� ����� �ּҸ� ������ ������
	int data; //�����͸� ������ ���
}Node;

void addFirst(Node* target, int data) //���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
	Node* newNode = malloc(sizeof(Node)); //�� ��� ����
	newNode->next = target->next; //�� ����� ���� ��忡 ���� ����� ���� ��带 ����
	newNode->data = data; //������ ����

	target->next = newNode; //���� ����� ���� ��忡 �� ��带 ����
}

int main(void)
{
	Node* head = malloc(sizeof(Node)); //�Ӹ� ��� ����(������ ����X)

	head->next = NULL;

	addFirst(head, 10); //�Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 20); //�Ӹ� ��� �ڿ� �� ��� �߰�
	addFirst(head, 30); //�Ӹ� ��� �ڿ� �� ��� �߰�

	
	Node* curr = head->next; //��ȸ�� �����Ϳ�
	
	while (curr != NULL) //�����Ͱ� NULL�� �ƴ� ������ ��� �ݺ�
	{
		printf("%d\n", curr->data); //���� ����� ������ ���
		curr = curr->next; //�����Ϳ� ���� ���� �ּ� ����
	}

	curr = head->next; //���Ḯ��Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����

	while (curr != NULL)
	{
		Node* next = curr->next; //���� ����� ���� ��� �ּҸ� �ӽ÷� ����
		free(curr); //���� ��� �޸� ����
		curr = next; //�����Ϳ� ���� ����� �ּ� ����
	}
	free(head); //�Ӹ� ��� �޸� ����
	return 0;
}*/