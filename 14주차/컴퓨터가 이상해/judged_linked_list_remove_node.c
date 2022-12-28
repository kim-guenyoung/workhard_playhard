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
	if (target == NULL) //기준 노드가 NULL이면
		return; //함수를 끝냄

	Node* newNode = malloc(sizeof(Node));
	if (newNode == NULL)
		return;
	newNode->next = target->next; //새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	newNode->data = data; //데이터 저장
	
	target->next = newNode; //기준 노드의 다음 노드에 새 노드를 지정
}

void removeNode(Node* node, int data)
{
	Node* delNode = node;

	if (node == NULL)
		return; 	// 삭제할 것이 없을 경우 함수 끝냄

	else if (node->data == node) // 삭제할 노드가 첫 노드인 경우 
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