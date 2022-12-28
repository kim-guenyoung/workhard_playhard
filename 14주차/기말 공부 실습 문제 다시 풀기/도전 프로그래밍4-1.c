/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct book
{
	char title[50];
	char writer[20];
	int page;
};
int main(void)
{
	struct book arr[3];
	int i;
	printf("도서 정보 입력\n");

	for (i = 0; i < 3; i++)
	{
		printf("저자 : ");
		scanf("%s", arr[i].writer);
		printf("제목 : ");
		scanf("%s", arr[i].title);
		printf("페이지 수 : ");
		scanf("%d", &arr[i].page); //int 값이니까 &를 사용
	}
	for (i = 0; i < 3; i++)
	{
		printf("도서 정보 출력\n");
		printf("book %d\n", i + 1);
		printf("저자 : %s\n", arr[i].writer);
		printf("제목 : %s\n", arr[i].title);
		printf("페이지 수 : %d\n", arr[i].page);
	}
	return 0;
}*/