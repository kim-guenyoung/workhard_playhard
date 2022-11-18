/*
#include <stdio.h>
void print_ddarr(int(*pa)[4]);
int main(void)
{
	int arr[3][4] = { {1, 2}, {3, 4, 5}, {6, 7, 8, 9} };
	
	print_ddarr(arr, sizeof(arr) / sizeof(arr));
}
void print_ddarr(int(*pa)[4])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", pa[i][j]);
		printf("\n");
	}
	printf("\n");
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(char** ptra, char** ptrb)
{
	char* temp = *ptra;
	*ptra = *ptrb;
	*ptrb = temp;
}
int main(void)
{
	char* pa[100];
	char* pb[100];
	gets("%s", pa);
	scanf("%s", pb);
	printf("함수 호출 전\npa : %s, pb : %s\n", pa, pb);
	Swap(&pa, &pb);
	printf("함수 호출 후\npa : %s, pb : %s\n", pa, pb);
}*/
/*
#include <string.h>
#include <stdio.h>
void Swap(char** voca1, char** voca2)
{
	char* temp;
	temp = *voca1;
	*voca1 = *voca2;
	*voca2 = temp;

}
int main(void)
{
	char str1[21];
	char str2[21];
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	str1[strlen(str1) - 1] = 0;
	str2[strlen(str2) - 1] = 0;
	//printf("%s%s", str1, str2); //Swap함수 호출 전
	Swap(str1, str2); //문자열은 그 자체가 주소 값이기 때문에 &를 따로 붙여주지 않아도 된다.
	printf("%s%s", str1, str2);

}*/
/*
#include <string.h>
#include <stdio.h>
void swap(char** a, char** b) {
	char* tmp = *a;

	*a = *b;

	*b = tmp;

}

int main(void) {
	char str1[20];
	char str2[20];

	fputs("첫번째 문자열 입력 : ", stdout);

	fgets(str1, sizeof(str1), stdin);
	getchar();
	str1[strlen(str1) - 1] = 0;

	fputs("두번째 문자열 입력 : ", stdout);

	fgets(str2, sizeof(str2), stdin);
	getchar();
	str2[strlen(str2) - 1] = 0;
	swap(str1, str2);

	printf("%s %s", str1, str2);
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[10] = { 0, };
	int* fptr = &arr;
	int* bptr = &arr[9];
	int i, num;
	for (i = 0; i < 10; i++)
	{
		scanf_s(" %d", &arr[i]);
		if (arr[i] % 2 == 1)
		{
			*fptr = arr[i];
			fptr++;
		}
		else
		{
			*bptr = arr[i];
			bptr--;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}*/