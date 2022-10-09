/*
//과제 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Vowel(char(*pvoca[50]), char(*pvoca2[50]), char* ptr1, char* ptr2)
{
	char voca = *ptr1;
	char voca = *ptr2;
	int cnt = 0;
	int i;
	for (i = 0; i < 50; i++)
	{
		if (*(ptr1 + i) == 'a' || *(ptr1 + i) == 'e' || *(ptr1 + i) == 'i' || *(ptr1 + i) == 'o' || *(ptr1 + i) == 'u')
			cnt++;
	}
	return cnt;
}
int main(void)
{
	char voca[2][10];
	char voca2[50];
	printf("단어 2개 입력 : ");
	scanf("%s %s", voca[0], voca2[1]);
	
	printf("단어 1의 모음 개수 : %d\n단어 2의 모음 개수 : %d\n", voca, voca2);

}*/