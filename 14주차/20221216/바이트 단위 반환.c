/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
long FileSize(FILE* fp)
{
	long fpos;
	long fsize;

	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;

}
int main(void)
{
	char str[100];
	FILE* fp = fopen("ABCD.txt", "rt");

	fgets(str, sizeof(str), fp);
	fputs(str, stdout);

	printf("颇老 农扁 : %ld\n", FileSize(fp));

	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("颇老 农扁 : %ld\n", FileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	fclose(fp);

	return 0;
}*/