/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct oneword
{
	char word[20];
	char meaning[100];
}OneWord;


void print(OneWord* optr)
{
	printf("단어 : %s\n", optr->word);
	printf("의미 : %s\n", optr->meaning);
}

int main(void)
{
	int i = 1;

	OneWord dictionary[100];
	int cnt = 0; //현재 담겨 있는 단어의 개수
	char vocabulary[100];
	//array 선언??

	OneWord arr[100];
	printf("단어 : ");
	scanf("%s", arr[0].word);
	printf("의미 : ");
	scanf("%s", arr[0].meaning);
	strcpy(vocabulary, arr[0].word);

	do
	{
		if (!strcmp(arr[i].word, arr[i - 1].word == 0))
			print(&arr[i]);
		else
		{
			strcpy(arr[i].word, vocabulary);
			cnt++;
			printf("입력한 단어가 사전에 없어 사전에 저장합니다.");
		}
		i++;
	} while (cnt > 100);
}*/