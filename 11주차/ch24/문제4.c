/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* fp = fopen("ABCD.txt", "wt");
	char lineFeed = '\n';
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	char str[100];
	//char* res;
	
//	res = fgets(str, sizeof(str), fp);
	//str[strlen(str) - 1] = '\0';
	gets(str);
	fputs(str, fp, stdout);
	fputs("\n", fp);
	fclose(fp);
	FILE* fs = fopen("ABCD.txt", "a");
	
	gets(str);
	fputs(str, fs);
	fclose(fs);
}*/