/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE* next;
	int data;
};
int main(void)
{
	struct NODE* head = malloc(sizeof(struct NODE));
	struct NODE* node1 = malloc(sizeof(struct NODE)); //ù ��° ��� ����
	head->next = node1; //�Ӹ� ��� ������ ù ��° ���
	node1->data = 10; //ù ��° ��忡 10 ����

	struct NODE* node2 = malloc(sizeof(struct NODE)); //2��° ��� ����
	node1->next = node2; //ù ��° ��� ������ 2��° ���
	node2->data = 20;
	node2->next = NULL; //�ι�° ��� ������ ��尡 ����.

	struct NODE* curr = head->next;
	while (curr != NULL) 
	{
		printf("%d\n", curr->data); //���� ����� ������ ���
		curr = curr->next; //�����Ϳ� ���� ����� �ּҰ� ����
	}
	free(node2);
	free(node1);
	free(head);

	return 0;
}*/