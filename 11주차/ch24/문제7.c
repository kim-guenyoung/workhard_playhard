/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)	
{
	char ch = 0;
	FILE* fp1 = fopen("파일1.txt", "rt");
	FILE* fp2 = fopen("파일2.txt", "rt");
	FILE* fp3 = fopen("파일3.txt", "wt");

	if(fp1 == NULL ||fp2 == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	while ((ch = fgets(fp1, sizeof(fp1), stdin)) != EOF)
	{
		fputs(ch, fp3);
	}
	while ((ch = fgets(fp2, sizeof(fp2), stdin)) != EOF)
	{
		fputs(ch, fp3);
	}
//	fp = fopen("파일2.txt", "at");
//	fgets(str, sizeof(str), fp);
//	fputs(str, fp);
//	fclose(fp);
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}*/