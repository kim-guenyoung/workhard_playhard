/*
strcmp�� �̿��� ����ü �ȿ� �ִ� �Ÿ� ����ؼ� �����־�� �ϴµ�, �� �����ۿ� �� �� �𸣰ڽ��ϴ�..
10�� �̻��� å�� ã�ƺ��� ���۸��ϸ� �л����� ���α׷�, ���� �˻� ���α׷�, �������� ���α׷� �� ���� �ڵ带 �м��غ������� ���� ����ü�� ���� ���ذ� ������ �� �����ϴ�.
�� �� ���� ����ü�� �����Ͽ� ������ �������ϵ��� �ϰڽ��ϴ�.
�ϴ� ������ �κб��� �����մϴ�.
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
		printf("�޴� �Է� : ");
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
	printf("1. �߰� 2. ��� 3. �˻�");
}
dictionary add()
{
	dictionary m;
	printf("�ܾ� : ");
	gets(m.word, 20);
	printf("�ǹ� : ");
	gets(m.meaning, 20);

	getchar();

	return m;
}
void print(dictionary* list, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%d��° �ܾ�", i + 1);
		printf("�ܾ� : %s\n", list[i].word);
		printf("�ǹ� : %s\n", list[i].meaning);
		
	}

}
void search(dictionary* list, int cnt)
{
	char word[20];
	printf("�˻��� �ܾ� : ");
	gets(word, 20);
	int i;
	for (i = 0; i < cnt; i++)
	{
		if (strcmp(word, list[i].word) == 0)
		{
			printf("%d��° ��Ͽ��� %s�� ã��\n", i + 1, word);
			printf("�ǹ� : %s\n", list[i].meaning);
			return 0;
		}
	}
	printf("��Ͽ��� %s�˻� ����\n", word);
}