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
	struct NODE* node1 = malloc(sizeof(struct NODE)); //첫 번째 노드 생성
	head->next = node1; //머리 노드 다음은 첫 번째 노드
	node1->data = 10; //첫 번째 노드에 10 저장

	struct NODE* node2 = malloc(sizeof(struct NODE)); //2번째 노드 생성
	node1->next = node2; //첫 번째 노드 다음은 2번째 노드
	node2->data = 20;
	node2->next = NULL; //두번째 노드 다음은 노드가 없음.

	struct NODE* curr = head->next;
	while (curr != NULL) 
	{
		printf("%d\n", curr->data); //현재 노드의 데이터 출력
		curr = curr->next; //포인터에 다음 노드의 주소값 저장
	}
	free(node2);
	free(node1);
	free(head);

	return 0;
}*/