/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[15];
	char temp[80];
	char* star = "**********";
	printf("단어 입력 : ");
	scanf("%s", str);
	printf("입력한 단어 : %s\n", str);

	if (strlen(str) <= 5)
		printf("생략한 단어 : %s", str);
	else
	{
		strncpy(temp, str, 5);
		temp[5] = 0;
		printf("생략한 단어 : %s", strncat(temp, star, strlen(str) - 5));
	}
	return 0;
}*/