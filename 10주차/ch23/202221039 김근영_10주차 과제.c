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
	int overlap;
	OneWord dictionary[100] = { 0, };
	int cnt = 0; //���� ��� �ִ� �ܾ��� ����
	while (cnt < 10)
	{
		printf("�ܾ� : ");
		gets(dictionary[i].word);
		printf("�ǹ� : ");
		gets(dictionary[i].meaning);
		overlap = 0;

		for (i = 0; i < cnt; i++)
		{
			if (strcmp(dictionary[i].word, dictionary[i].meaning) == 0)
			{
				printf("�ܾ� : %s\n, �ǹ� : %s\n", dictionary[i].word, dictionary[i].meaning);
				overlap++;
			}
		}
		if (overlap == 0)
		{
			fprintf(fp, "word : %s\n", dictionary[cnt].word);
			fprintf(fp, "meaning : %s\n", dictionary[cnt].meaning);
		}
		cnt++;
	}
	fclose(fp);
	return 0;
}