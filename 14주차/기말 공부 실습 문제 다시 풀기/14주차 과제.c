#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(void)

{

	FILE* fp = fopen("mystory.txt", "rt");

	char* str[3];

	char temp[100];

	int i, size;





	for (i = 0; i < 3; i++)

	{

		printf("%d��° ���ڿ� : ", i + 1);

		gets(temp);



		size = strlen(temp);

		str[i] = (char*)malloc(sizeof(char) * size + 1);

		strcpy(*(str + i), temp);

	}

	printf("�Ųٷ� ���\n");

	for (i = 2; i >= 0; i--)

		printf("%d : %s\n", i + 1, str[i]);





	for (i = 0; i < 3; i++)

		free(str[i]);

}