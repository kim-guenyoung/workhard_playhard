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
	printf("�ܾ� : %s\n", optr->word);
	printf("�ǹ� : %s\n", optr->meaning);
}

int main(void)
{
	int i = 1;

	OneWord dictionary[100];
	int cnt = 0; //���� ��� �ִ� �ܾ��� ����
	char vocabulary[100];
	//array ����??

	OneWord arr[100];
	printf("�ܾ� : ");
	scanf("%s", arr[0].word);
	printf("�ǹ� : ");
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
			printf("�Է��� �ܾ ������ ���� ������ �����մϴ�.");
		}
		i++;
	} while (cnt > 100);
}*/