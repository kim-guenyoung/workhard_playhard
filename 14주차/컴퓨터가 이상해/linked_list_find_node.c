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
		if (curr->data == data) //현재 노드의 데이터와 매개변수로 받은 데이터를 비교해서 같다면
			return curr; //현재 노드 반환
		
		curr = curr->next; //현재 노드와 같지 않다면 다음 노드로 넘어가서 비교
	}
	return NULL; //다 검사했는데, 같은 것이 없다면 NULL 반환
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