//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct oneword
{
	char word[20];
	char meaning[100];
}OneWord;

int main(void)
{
	FILE* fp;
	OneWord word;
	//fp = open("C:/Users/김근영/Desktop/1학년 2학기/컴퓨터 프로그래밍2/10주차/ch23/9주차 과제3.c", "r");
	
	//printf("단어 입력 : ");
	//scanf("%s", word.word);
	//fwrite((void*)&word, sizeof(word), 1, fp);

	fp = open("C:/Users/김근영/Desktop/1학년 2학기/컴퓨터 프로그래밍2/10주차/ch23/9주차 과제3.c", "r");
	fread((void*)&word, sizeof(word), 2, fp);
	printf("%s", word);
	fclose(fp);
	return 0;
}