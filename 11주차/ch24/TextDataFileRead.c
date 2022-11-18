/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	//★문자열이 파일에 저장될 때에는 문자열의 끝을 의미하는 널 문자는 저장되지 않는다. 그렇기 때문에 파일에서는 개행을 기준으로 문자열을 구분한다.
	//★따라서 fgets 함수의 호출을 통해서 읽어들일 문자열의 끝에는 반드시 \n이 존재해야 한다.
	fclose(fp);
	return 0;
}*/