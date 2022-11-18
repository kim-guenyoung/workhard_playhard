#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* buffer;
	int size;
	int cnt;
	int i;

	FILE* fp = fopen("my_story.txt", "w");
	if (fp == NULL)
	{
		puts("���� ���� ����!\n");
		return -1;
	}

	getchar(fp);

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	
	buffer = (int *)malloc(sizeof(size + 1));
	memset(buffer, 0, size + 1); //���� ũ�� +1 ����Ʈ��ŭ �޸� 0���� �ʱ�ȭ

	fseek(fp, 0, SEEK_SET);//���� ������ ó������ �̵���Ŵ
	cnt = fread(buffer, size, 1, fp); //hello.txt���� ���� ũ�⸸ŭ �� 
	
	for (i = size - 1; i >= 0; i--)
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	//printf("%s size : %d, cnt : %d\n", buffer, size, cnt);
	fclose(fp);
	free(buffer);
	return 0;
}