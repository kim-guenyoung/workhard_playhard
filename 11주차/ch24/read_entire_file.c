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
		puts("파일 오픈 실패!\n");
		return -1;
	}

	getchar(fp);

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	
	buffer = (int *)malloc(sizeof(size + 1));
	memset(buffer, 0, size + 1); //파일 크기 +1 바이트만큼 메모리 0으로 초기화

	fseek(fp, 0, SEEK_SET);//파일 포인터 처음으로 이동시킴
	cnt = fread(buffer, size, 1, fp); //hello.txt에서 파일 크기만큼 값 
	
	for (i = size - 1; i >= 0; i--)
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	//printf("%s size : %d, cnt : %d\n", buffer, size, cnt);
	fclose(fp);
	free(buffer);
	return 0;
}