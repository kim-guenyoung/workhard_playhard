/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	struct Node* next;
	int data;
}Node;
void addFirst(Node* target, int data) //기준 노드 뒤에 노드를 추가하는 함수
{
	Node* newNode = malloc(sizeof(sizeof(Node))); //새 노드 생성
	newNode->next = target->next; //새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	newNode->data = data; //데이터 저장

	target->next = newNode; //기준 노드의 다음 노드에 새 노드를 지정
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
		Node* next = curr->next; //현재 노드의 다음 노드 주소르르 임시로 저장
		free(curr); //현재 노드 메모리 해제
		curr = next;//포인터에 다음 노드의 주소 저장
	}
	free(head); //머리 노드 메모리 해제

	return 0;
}*/