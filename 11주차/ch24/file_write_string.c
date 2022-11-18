/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char* s1 = "hello, world!";
	FILE* fp = fopen("hello.txt", "w"); //hello.txt 파일을 쓰기 모드로 열기
	fwrite(s1, strlen(s1), 1, fp); //strlen으로 문자열의 길이를 구하고 문자열의 길이만큼 1번 파일에 저장
	fclose(fp);

	return 0;
}*/
