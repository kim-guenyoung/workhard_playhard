/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct oneword
{
	char word[20];
	char meaning[100];
}OneWord;

void addWord(OneWord* ptr)
{
	printf("�ܾ� : ");
	fgets(ptr->word, sizeof(ptr->word), stdin);
	ptr->word[strlen(ptr->word) - 1] = 0;

	printf("�ǹ� : ");
	fgets(ptr->meaning, sizeof(ptr->meaning), stdin);
	ptr->meaning[strlen(ptr->meaning) - 1] = 0;
}
void printWord(OneWord* ptr)
{
	printf("%s : %s\n", ptr->word, ptr->meaning);
	return 0;
}
int checkWord(OneWord* ptr, char* input_word, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		if (strcmp((ptr + i)->word, input_word) == 0)
		{
			printf("�̹� �ִ� �ܾ��Դϴ�.\n%s : %s\n", (ptr + i)->word, (ptr + i)->meaning);
			return 1;
		}
		else
			return 0;
	}
}
int main(void)
{
	OneWord dict[100];
	char input_word[20];
	int cnt = 0;
	while (1)
	{
		printf("�ܾ �Է��ϼ���\n");
		printf("�ܾ� : ");
		fgets(input_word, sizeof(input_word), stdin);
		input_word[strlen(input_word) - 1] = 0;

		if (checkWord(dict, input_word, cnt) == 1)
			continue;

		strcpy(dict[cnt].word, input_word);
		printf("�ǹ� : ");
		fgets(dict[cnt].meaning, sizeof(dict[cnt].meaning), stdin);
		dict[cnt].meaning[strlen(dict[cnt].meaning) - 1] = 0;

		printf("%d��° �ܾ� : %s : %s\n", cnt + 1, dict[cnt].word, dict[cnt].meaning);
		cnt++;
	}
	addWord(&dict);
	printWord(&dict);
	return 0;
}*/