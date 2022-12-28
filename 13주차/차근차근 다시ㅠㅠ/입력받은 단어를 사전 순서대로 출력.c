/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];
	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);
	if (strcmp(str1, str2) < 0)
	{
		if (strcmp(str2, str3) < 0)
			printf("%s %s %s", str1, str2, str3);
		else
		{
			if (strcmp(str1, str3) < 0)
				printf("%s %s %s", str1, str3, str2);
			else
				printf("%s %s %s", str3, str1, str2);
		}
	}
	else
	{
		if (strcmp(str1, str3) < 0)
			printf("%s %s %s", str2, str1, str3);
		else
		{
			if (strcmp(str2, str3) < 0)
				printf("%s %s %s", str2, str3, str1);
			else
				printf("%s %s %s", str3, str2, str1);
		}
	}
	return 0;
}*/