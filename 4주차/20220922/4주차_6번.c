/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[50];
	char voca2[50];
	char i;
	int len = 0;

	printf("�Է� : ");
	scanf("%s", voca);

	for (i = 0; voca[i] != '\0'; i++)
		len++;

	for (i = 1; i <= len; i++)
	{
		voca2[len - i] = voca[i - 1];
	}
	for (i = 0; i < len; i++)
	{
		if (voca2[i] == voca[i])
		{
			printf("ȸ���Դϴ�.");
			break;
		}
		else
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
	}
	return 0;
}*/