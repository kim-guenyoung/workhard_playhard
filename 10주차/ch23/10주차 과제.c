/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
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
	FILE* fp = fopen("data2.txt", "wt");
	if (fp == NULL)
	{
		printf("파일 오픈 실패!");
		return -1;
	}
	int i = 1;

	OneWord dictionary[100];
	int cnt = 0; //현재 담겨 있는 단어의 개수
	char vocabulary[100];
	//dictionaryay 선언??

	
	printf("단어 : ");
	gets(dictionary[0].word);
	printf("의미 : ");
	gets(dictionary[0].meaning);
	strcpy(vocabulary, dictionary[0].word);

	do
	{
		if (!strcmp(dictionary[i].word, dictionary[i - 1].word) == 0)
			print(&dictionary[i]);
		else
		{
			strcpy(dictionary[i].word, vocabulary);
			cnt++;
			printf("입력한 단어가 사전에 없어 사전에 저장합니다.");
		}
		i++;
	} while (cnt < 100);
	return 0;
}*/