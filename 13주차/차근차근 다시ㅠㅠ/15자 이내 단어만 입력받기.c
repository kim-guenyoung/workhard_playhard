/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[15];
	char temp[80];
	char* star = "**********";
	printf("�ܾ� �Է� : ");
	scanf("%s", str);
	printf("�Է��� �ܾ� : %s\n", str);

	if (strlen(str) <= 5)
		printf("������ �ܾ� : %s", str);
	else
	{
		strncpy(temp, str, 5);
		temp[5] = 0;
		printf("������ �ܾ� : %s", strncat(temp, star, strlen(str) - 5));
	}
	return 0;
}*/