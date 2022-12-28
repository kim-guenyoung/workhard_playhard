/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int maxlen, len, i;
	char* str;
	printf("문자열의 최대 길이 입력 : ");
	scanf("%d", &maxlen);
	getchar(); //개행 문자 삭제하기 위함
	str = (char*)malloc(sizeof(char) * maxlen + 1);

	printf("문자열의 입력 : ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; //마지막 널 문자로 처리해 외계어 나옴 방지
	len = strlen(str);

	for (i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", str);
	free(str);

	return 0;
}*/