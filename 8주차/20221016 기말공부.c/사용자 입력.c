/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int GetSpaceIdx(char user[])
{
	int len, i;
	len = strlen(user);
	for (i = 0; i < len; i++)
	{
		if (user[i] == ' ') // 문자를 받아서 글자수를 센 다음에 공백이 나오면 index 값을 return한다.
			return i;
	}
	return -1;
}

int CompName(char user1[], char user2[])
{
	int idx1 = GetSpaceIdx(user1); //공백이 있는
	int idx2 = GetSpaceIdx(user2);

	if (idx1 != idx2)
		return 0;
	else
		//문자를 받아서 반환 받은 index 값의 크기를 1차적으로 비교한다.
		return !strncmp(user1, user2, idx1);
}

int CompAge(char user1[], char user2[])
{
	int idx1 = GetSpaceIdx(user1);
	int idx2 = GetSpaceIdx(user2);
	int age1, age2;

	age1 = atoi(&user1[idx1 + 1]); //user[idx + 1] = 나이가 저장된 위치이다.
	age2 = atoi(&user2[idx2 + 1]); //나이는 정수 값이니 atoi 함수를 써서 정수형으로 바꾸어준다.

	if (age1 == age2)
		return 1;
	else
		return 0;
}

int main(void)
{
	char user1[20];
	char user2[20];


	fgets(user1, sizeof(user1), stdin);
	user1[strlen(user1) - 1] = 0;

	fgets(user2, sizeof(user2), stdin);
	user2[strlen(user2) - 1] = 0;

	if (CompName(user1, user2))
		puts("이름이 같습니다.");
	else
		puts("이름이 같지 않습니다.");


	if (CompAge(user1, user2))
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");
	return 0;
	}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Palindrome(char vocabulary[])
{
	int i;
	int len = 0;
	for (i = 0; vocabulary[i] != '\0'; i++)
		len++;
	for (i = 0; i <= len / 2; i++)
	{
		if (vocabulary[i] == vocabulary[len - 1 - i])
			return 1;
		else
		{
			return 0;
		}
	}
}

int main(void)
{
	char voca[100];
	scanf("%s", voca);
	if (Palindrome(voca) == 1)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	return 0;
}*/
/*
#include <stdio.h>
int MaxAndMin(int arr[], int** Mptr, int** mptr)
{
	int i;
	int *max, *min;
	max = min = arr;
	for (i = 0; i < 5; i++)
	{
		if (*max < arr[i])
			max = &arr[i];

		if (*min > arr[i])
			min = &arr[i];
	}
	*Mptr = max;
	*mptr = min;
}
int main(void)
{
	int arr[5];
	int* maxPtr;
	int* minPtr;
	int i;
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minPtr);
}*/
