/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct book
{
	char author[20];
	char title[50];
	int page;
}book;
int main(void)
{
	int i = 3;
	book* b = (struct book*)malloc(sizeof(struct book) * 3);
	
	printf("���� ���� �Է�\n");

	for (i = 0; i < 3; i++)
	{
		printf("���� : ");
		fgets(b[i].author, sizeof(b[i].author), stdin);
		b[i].author[strlen(b[i].author) - 1] = 0;
		printf("���� : ");
		fgets(b[i].title, sizeof(b[i].title), stdin);
		printf("������ �� : ");
		scanf("%d", &b[i].page);
		getchar();
	}
	for (i = 0; i < 3; i++)
	{
		//printf("���� : %s", b[i]->author);
		//printf("���� : %s", b[i]->title);
		//printf("������ �� : %d", b[i]->page);

		printf("���� : ");
		fputs(b[i].author, stdout);
		printf("\n");
		printf("���� : ");
		fputs(b[i].title, stdout);
		printf("������ �� : ");
		printf("%d", b[i].page);
		printf("\n");
	}
	return 0;
}

//���� ������ ���α׷��� ������ �þ�� ���� realloc
*/