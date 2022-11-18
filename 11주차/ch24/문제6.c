/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void Reverse(FILE *fp)
//{
//	int i;
//	for (i = 0; i < sizeof(fp); i++)
//	{
//		fseek(fp, i, SEEK_END);
//	}
//}

int main(void)
{
	FILE* fp = fopen("ABCDE.txt", "wt");
	char str[100];
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	int i;
	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), fp);
		fputs(str, fp);
	}
	fclose(fp);
	return 0;
}*/
/*
#include <stdio.h>



int main(void) {

	FILE* fp;

	char buf[100];

	char list[10][100];

	int i = 0;


	fp = fopen("mystory.txt", "rt");

	if (fp == NULL) {

		puts("파일오픈 실패!");

		return -1;

	}


	while (fgets(list[i], sizeof(list[i]), fp) != NULL) {

		printf("%d: %s", i + 1, list[i]);

		i++;

	}


	//puts("");

	while (i > 0) {

		i--;

		printf("%d: %s", i + 1, list[i]);

	}


	fclose(fp);

	return 0;

}*/