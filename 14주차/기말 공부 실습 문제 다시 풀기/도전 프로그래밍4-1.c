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
	printf("���� ���� �Է�\n");

	for (i = 0; i < 3; i++)
	{
		printf("���� : ");
		scanf("%s", arr[i].writer);
		printf("���� : ");
		scanf("%s", arr[i].title);
		printf("������ �� : ");
		scanf("%d", &arr[i].page); //int ���̴ϱ� &�� ���
	}
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� ���\n");
		printf("book %d\n", i + 1);
		printf("���� : %s\n", arr[i].writer);
		printf("���� : %s\n", arr[i].title);
		printf("������ �� : %d\n", arr[i].page);
	}
	return 0;
}*/