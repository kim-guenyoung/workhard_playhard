/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct pointer
{
	int num;
	struct pointer* next;
}Pointer;


void addFirst(Pointer* target, int data) //기준 노드 뒤에 노드를 추가하는 함수
{
	Pointer* new = malloc(sizeof(Pointer)); //새 노드 생성
	new->next = target->next; //새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
	new->num = data; //데이터 저장

	target->next = new; //기준 노드의 다음 노드에 새 노드를 지정
}
int main(void)
{
	Pointer* head = malloc(sizeof(Pointer)); //머리 노드 생성(데이터 저장X)

	head->next = NULL;

	addFirst(head, 10); //머리 노드 뒤에 새 노드 추가
	addFirst(head, 20); //머리 노드 뒤에 새 노드 추가
	addFirst(head, 30); //머리 노드 뒤에 새 노드 추가
	addFirst(head, 40); //머리 노드 뒤에 새 노드 추가


	Pointer* curr = head->next; //순회용 포인터에

	while (curr != NULL) //포인터가 NULL이 아닐 때까지 계속 반복
	{
		printf("%d\n", curr->num); //현재 노드의 데이터 출력
		curr = curr->next; //포인터에 다음 노드와 주소 저장
	}

	curr = head->next; //연결리스트 순회용 포인터에 첫 번째 노드의 주소 저장

	while (curr != NULL)
	{
		Pointer* next = curr->next; //현재 노드의 다음 노드 주소를 임시로 저장
		free(curr); //현재 노드 메모리 해제
		curr = next; //포인터에 다음 노드의 주소 저장
	}
	free(head); //머리 노드 메모리 해제
	return 0;
}*/

