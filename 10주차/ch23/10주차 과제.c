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
	printf("�ܾ� : %s\n", optr->word);
	printf("�ǹ� : %s\n", optr->meaning);
}

int main(void)
{
	FILE* fp = fopen("data2.txt", "wt");
	if (fp == NULL)
	{
		printf("���� ���� ����!");
		return -1;
	}
	int i = 1;

	OneWord dictionary[100];
	int cnt = 0; //���� ��� �ִ� �ܾ��� ����
	char vocabulary[100];
	//dictionaryay ����??

	
	printf("�ܾ� : ");
	gets(dictionary[0].word);
	printf("�ǹ� : ");
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
			printf("�Է��� �ܾ ������ ���� ������ �����մϴ�.");
		}
		i++;
	} while (cnt < 100);
	return 0;
}*/