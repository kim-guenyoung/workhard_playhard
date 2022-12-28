/*
#include <stdio.h>
#include <stdlib.h>

typedef struct //연결리스트의 노드 구조체
{
	struct Node* next; //다음 노드의 주소를 저장할 포인터
	int data; //데이터를 저장할 멤버
}Node;
int main(void)
{
	Node* head = malloc(sizeof(Node)); //머리 노드 생성(데이터 저장X)
	Node* node1 = malloc(sizeof(Node)); //1번째 노드 생성
	head->next = node1; //머리 노드 다음은 1번째 노드
	node1->data = 10; //1번째 노드에 10 저장

	Node* head = malloc(sizeof(Node)); //머리 노드 생성(데이터 저장X)
	Node* node2 = malloc(sizeof(Node)); //2번째 노드 생성
	node1->next = node2; //1번째 노드 다음은 2번째 노드
	node2->data = 20; //2번째 노드에 20 저장
	
	node2->next = NULL; //2번째 노드 다음은 노드가 없음(NULL)

	Node* curr = head->next;  //순회용 포인터에 1번째 노드의 주소 저장
	while (curr != NULL) //포인터가 NULL이 아닐 때 계속 반복
	{
		printf("%d\n", curr->data); //현재 노드의 데이터 출력
		curr = curr->next; //포인터에 다음 노드와 주소 저장
	}
	free(node2); //2번째 노드 메모리 해제
	free(node1); //1번째 노드 메모리 해제
	free(head); //머리 노드 메모리 해제
}

*/