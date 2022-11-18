/*
strcmp를 이용해 구조체 안에 있는 거를 계속해서 비교해주어야 하는데, 두 개씩밖에 할 줄 모르겠습니다..
10권 이상의 책을 찾아보고 구글링하며 학생관리 프로그램, 음악 검색 프로그램, 도서관리 프로그램 등 많은 코드를 분석해보았으나 아직 구조체에 대한 이해가 부족한 것 같습니다.
한 주 동안 구조체를 복습하여 과제를 마무리하도록 하겠습니다.
일단 구현한 부분까지 제출합니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
enum choice {ADD = 1, PRINT, SEARCH};

typedef struct OneWord
{
	char word[20];
	char meaning[20];
}dictionary;

int cnt = 0;
dictionary mlist[100] = { 0, };
void menu();
dictionary add();
void print(dictionary* list, int cnt);
void search(dictionary* list, int cnt);
int main(void)
{
	int choice;
	menu();
	while (1)
	{
		printf("메뉴 입력 : ");
		scanf("%d", &choice);
		if (choice == 5)
			break;
		getchar();

		switch (choice)
		{
			case ADD:
				mlist[cnt] = add();
				cnt++;
				break;
			case PRINT:
				print(mlist, cnt);
				break;
			case SEARCH:
				print(mlist, cnt);
				break;
			default:
				break;
		}
	}
	return 0;
}
void menu()
{
	printf("1. 추가 2. 출력 3. 검색");
}
dictionary add()
{
	dictionary m;
	printf("단어 : ");
	gets(m.word, 20);
	printf("의미 : ");
	gets(m.meaning, 20);

	getchar();

	return m;
}
void print(dictionary* list, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%d번째 단어", i + 1);
		printf("단어 : %s\n", list[i].word);
		printf("의미 : %s\n", list[i].meaning);
		
	}

}
void search(dictionary* list, int cnt)
{
	char word[20];
	printf("검색할 단어 : ");
	gets(word, 20);
	int i;
	for (i = 0; i < cnt; i++)
	{
		if (strcmp(word, list[i].word) == 0)
		{
			printf("%d번째 목록에서 %s를 찾음\n", i + 1, word);
			printf("의미 : %s\n", list[i].meaning);
			return 0;
		}
	}
	printf("목록에서 %s검색 실패\n", word);
}