/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�� ���� ������ �Է� �޾� ���Ͽ� ������ ��
//�� ������ ���� �������� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��ϼ���.
int main(void)
{
	FILE* fp = fopen("sentence.txt", "wt");
	int i = 0;
	int line = 3;
	char* str = NULL;
	str = (char*)malloc(sizeof(char) * line);
	//���Ͽ� ���ڿ� �Է¹ޱ�

	printf("�Ʒ��� ������ �Է��ϼ��� (�������� ������ �Է��ϼ���.) \n");

	gets(str);
	while (str[0] != '\0')
	{
		if (i == line)
		{
			printf("%d�� ��� �Ϸ� realloc�� �̿��� ���̸� Ȯ���մϴ�.\n���� Ű ������ ����\n", i + 1);
			
			str = (char*)realloc(str, sizeof(char) * line);
			line++;
			fflush(stdin);
		}
		fputs(str, fp);
		fputs("\n", fp);
		gets(str);
		i++;
	}
	fclose(fp);
	return 0;
}*/
