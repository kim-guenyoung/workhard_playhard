
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct telnode
{
	char name[20];
	char phoneNum[20];
	struct telnode* next;
}TelNode;

int main(void)
{
	TelNode* list = NULL; //list의 초깃값은 반드시 NULL값으로 설정
	TelNode* prev = NULL, * p, * next; //p, prev 초깃값 NULL로 설정
	char buffer[20];
	char phoneNum[20];
	int i = 0;

	char sick[20];
	

	//연결리스트 생성
	while (1)
	{
		
		printf("%d : 이름 : ", i + 1);
		gets(buffer); //줄 바꿈 문자를 NULL로 변환하여 반환
		if ((buffer[0] == 'q' && buffer[1] == '\0') && (i >= 5))
			break;
		else if (buffer[0] == 'q' && i < 5) 
		{
			printf("5명 이상 입력해야 합니다.\n");
			continue;
		}
		p = (TelNode*)malloc(sizeof(TelNode)); //동적으로 생성된 구조체 주소를 반환하고 이 주소를 반환하고 이 주소를 포인터 p에 저장

		strcpy(p->name, buffer);

		printf("번호 :");
		gets(buffer);
		strcpy(p->phoneNum, buffer);

		if (list == NULL) //리스트가 비어있는 경우
			list = p; //새로운 노드를 첫 번째 노드로 생성한다.
		else //리스트가 비어있지 않은 경우
		{
			prev->next = p; //새로운 노드를 이전 노드의 next 필드에 연결
			p->next = NULL; //새로운 노드의 링크 필드를 NULL로 설정
		}
		prev = p; //현재 노드를 이전 노드로 대입
		i++;
	}

	//연결 리스트에 들어있는 데이터 출력
	p = list;
	printf("아픈 사람 입력 : ");
	scanf("%s", sick);
	while (1)
	{
		
		if (p->next != NULL)
		{	
			if (strcmp(p->next->name, sick) == 0 )
			{
				printf("%s는 %s에게 연락을 해야 합니다.\n", p->name, p->next->next->name);
				printf("%s의 전화번호는 %s입니다.\n", p->next->next->name, p->next->next->phoneNum);
			}
			else
			{
				printf("%s은 %s에게 연락을 해야 합니다.\n", p->name, p->next->name);
				printf("%s의 전화번호는 %s입니다.\n", p->next->name, p->next->phoneNum);
			}
			p = p->next;
		}
		else
		{
			printf("%s이 연락을 받았습니다. 모든 구성원들에게 연락을 했습니다.\n", p->name);
			break;
		}
	}
	//할당된 동적 메모리 반납
	p = list;
	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
	return 0;
}