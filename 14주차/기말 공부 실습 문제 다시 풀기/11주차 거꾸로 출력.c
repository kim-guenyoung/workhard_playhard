/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

void clearline(char str[])

{

	int len = strlen(str);

	str[len - 1] = 0;

}

int main(void)
{
	int maxlen;
	char* str;

	int i;

	printf("문자열의 최대 길이 입력 : ");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	printf("문자열 입력 : ");
	fgets(str, maxlen + 1, stdin);
	clearline(str);
	for (i = strlen(str); i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}*/