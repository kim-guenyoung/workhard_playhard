//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct OneWord {
//	char word[20];
//	char meaning[100];
//} Word;
//
//typedef struct dictionary {
//	Word dictionary[100];
//	int cnt;
//} Dictionary;
//
//Dictionary input()
//{
//	Dictionary input;
//	char voca[20];
//	char mean[100];
//
//	printf("�ܾ� ��� :");
//	scanf("%s", voca);
//	strcpy(input.dictionary->word, voca);
//
//	printf("�� ��� :");
//	scanf("%s", mean);
//	strcpy(input.dictionary->meaning, mean);
//
//	input.cnt++;
//}
//
//Dictionary search()
//{
//	Dictionary search;
//	char unit[20];
//	printf("�ܾ� �Է� :");
//	scanf("%s", unit);
//
//	if (strcmp(search.dictionary->word, unit) == 0) {
//		printf("���� &s ", search.dictionary->meaning);
//	}
//	else {
//		printf("�Է��� �ܾ ������ �����ϴ�.\n");
//		input();
//	}
//}
//
//int main() {
//
//	search();
//	search();
//	search();
//	//�̿ϼ�... �����ҿ���
//}