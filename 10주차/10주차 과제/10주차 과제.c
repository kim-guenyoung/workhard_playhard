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
	//fp = open("C:/Users/��ٿ�/Desktop/1�г� 2�б�/��ǻ�� ���α׷���2/10����/ch23/9���� ����3.c", "r");
	
	//printf("�ܾ� �Է� : ");
	//scanf("%s", word.word);
	//fwrite((void*)&word, sizeof(word), 1, fp);

	fp = open("C:/Users/��ٿ�/Desktop/1�г� 2�б�/��ǻ�� ���α׷���2/10����/ch23/9���� ����3.c", "r");
	fread((void*)&word, sizeof(word), 2, fp);
	printf("%s", word);
	fclose(fp);
	return 0;
}