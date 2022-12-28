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
	
	printf("도서 정보 입력\n");

	for (i = 0; i < 3; i++)
	{
		printf("저자 : ");
		fgets(b[i].author, sizeof(b[i].author), stdin);
		b[i].author[strlen(b[i].author) - 1] = 0;
		printf("제목 : ");
		fgets(b[i].title, sizeof(b[i].title), stdin);
		printf("페이지 수 : ");
		scanf("%d", &b[i].page);
		getchar();
	}
	for (i = 0; i < 3; i++)
	{
		//printf("저자 : %s", b[i]->author);
		//printf("제목 : %s", b[i]->title);
		//printf("페이지 수 : %d", b[i]->page);

		printf("저자 : ");
		fputs(b[i].author, stdout);
		printf("\n");
		printf("제목 : ");
		fputs(b[i].title, stdout);
		printf("페이지 수 : ");
		printf("%d", b[i].page);
		printf("\n");
	}
	return 0;
}

//도서 관리용 프로그램에 도서가 늘어나면 쉽게 realloc
*/