/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	char buf[100];
	char list[10][100];
	int i = 0;
	fp = fopen("sentence.txt", "rt");

	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while (fgets(list[i], sizeof(list[i]), fp) != NULL) {

		printf("%d: %s", i + 1, list[i]);
		i++;
	}
	while (i > 0)
	{
		i--;
		printf("%d: %s", i + 1, list[i]);
	}
	fclose(fp);
	return 0;
}*/