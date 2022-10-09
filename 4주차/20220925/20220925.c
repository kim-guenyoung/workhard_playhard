/*#include <stdio.h>
int main(void)
{
	int i;
	char animal[4][10] = {
		{"dog"},
		{"cat"},
		{"horse"},
		{"elephant"}
	};
	for(i =0; i<4; i++)
		printf("%s\n", animal[i]);
}*/
/*
//과제2
#include <stdio.h>
void Swap(char** ptra, char** ptrb)
{
	char* temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
}
int main(void)
{
	char* pa = "dog";
	char* pb = "cat";

	printf("함수 호출 전 : pa : %s, pb : %s\n", pa, pb);
	Swap(&pa, &pb);

	printf("함수 호출 후 : pa : %s, pb : %s\n", pa, pb);

	return 0;
	
}*/
/*
#include <stdio.h>
void Swap(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}
int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("%d %d\n", *ptr1, *ptr2);

	Swap(&ptr1, &ptr2);
	printf("%d %d\n", *ptr1, *ptr2);
	return 0;
}*/
/*
#include <stdio.h>
void Swap(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}
int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("%d %d\n", num1, num2);

	Swap(&num1, &num2);
	printf("%d %d\n", num1, num2);
	return 0;
}
/*
//과제 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Vowel(char* ptr)
{
	char voca = *ptr;
	int cnt = 0;
	int i;
	for (i = 0; i < 50; i++)
	{
		if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u')
			cnt++;
	}
	printf("모음 개수 : %d \n", cnt);
}
int main(void)
{
	char voca[50];
	printf("단어 1 입력 : ");
	scanf("%s", voca);
	Vowel(&voca);

	char voca2[50];
	printf("단어 2 입력 : ");
	scanf("%s", voca);
	Vowel(&voca);
}*/