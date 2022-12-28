/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	FILE* fp = fopen("mystory.txt", "rt");
	if (fp == NULL)
	{
		printf("파일 오픈 실패");
		return -1;
	}
	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);
	fclose(fp);

	return 0;
}*/