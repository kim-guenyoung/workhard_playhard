/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char* buffer;
	int size;
	FILE* fp = fopen("words.txt", "rt");
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);
	fread(buffer, size, 1, fp);

	int i;
	for (i = size - 1; i >= 0; i--)
		fwrite(&buffer[i], sizeof(char), 1, stdout);
	free(buffer);

	return 0;
}*/