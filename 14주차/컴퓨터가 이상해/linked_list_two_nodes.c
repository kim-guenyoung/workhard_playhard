/*
#include <stdio.h>
#include <stdlib.h>

typedef struct //���Ḯ��Ʈ�� ��� ����ü
{
	struct Node* next; //���� ����� �ּҸ� ������ ������
	int data; //�����͸� ������ ���
}Node;
int main(void)
{
	Node* head = malloc(sizeof(Node)); //�Ӹ� ��� ����(������ ����X)
	Node* node1 = malloc(sizeof(Node)); //1��° ��� ����
	head->next = node1; //�Ӹ� ��� ������ 1��° ���
	node1->data = 10; //1��° ��忡 10 ����

	Node* head = malloc(sizeof(Node)); //�Ӹ� ��� ����(������ ����X)
	Node* node2 = malloc(sizeof(Node)); //2��° ��� ����
	node1->next = node2; //1��° ��� ������ 2��° ���
	node2->data = 20; //2��° ��忡 20 ����
	
	node2->next = NULL; //2��° ��� ������ ��尡 ����(NULL)

	Node* curr = head->next;  //��ȸ�� �����Ϳ� 1��° ����� �ּ� ����
	while (curr != NULL) //�����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
	{
		printf("%d\n", curr->data); //���� ����� ������ ���
		curr = curr->next; //�����Ϳ� ���� ���� �ּ� ����
	}
	free(node2); //2��° ��� �޸� ����
	free(node1); //1��° ��� �޸� ����
	free(head); //�Ӹ� ��� �޸� ����
}

*/