/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* buffer1;
	char* buffer2;
	int i;
	int cnt = 0;
	int size1, size2;

	FILE* fp1 = fopen("src.txt", "r");
	FILE* fp2 = fopen("des.txt", "r");
	
	
	if (fp1 == NULL || fp2 == NULL)
	{
		printf("파일 오픈 실패");
		return -1;
	}

	fseek(fp1, 0, SEEK_END);
	size1 = ftell(fp1);

	buffer1 = malloc(size1 + 1);
	memset(buffer1, 0, size1 + 1);

	fseek(fp1, 0, SEEK_SET);
	cnt = fread(buffer1, size1, 1, fp1);
	size2 = ftell(fp2);

	buffer2 = malloc(size2 + 1);
	memset(buffer2, 0, size2 + 1);

	fseek(fp2, 0, SEEK_SET);
	cnt = fread(buffer2, size2, 1, fp2);


	//fgets(buffer1, sizeof(buffer1), fp1);
	//fgets(buffer2, sizeof(buffer2), fp2);
	
	if (size1 == size2)
		puts("두 개의 파일은 같은 파일입니다.");

	else
	{
		for (i = 0; i < sizeof(buffer1); i++)
		{
			if (buffer1[i] != buffer2[i])
			{
				puts("두 개의 파일은 다른 파일입니다.");
				cnt++;
				break;
			}
		}
		if (cnt == 0)
			puts("두 개의 파일은 같은 파일입니다.");

	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/