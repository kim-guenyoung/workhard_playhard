/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int maxlen, len, i;
	char* str;
	printf("���ڿ��� �ִ� ���� �Է� : ");
	scanf("%d", &maxlen);
	getchar(); //���� ���� �����ϱ� ����
	str = (char*)malloc(sizeof(char) * maxlen + 1);

	printf("���ڿ��� �Է� : ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; //������ �� ���ڷ� ó���� �ܰ�� ���� ����
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