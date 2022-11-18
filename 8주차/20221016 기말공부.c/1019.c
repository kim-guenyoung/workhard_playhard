/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Max(int arr[], int m)
{
	int max;
	max = &arr[0];
	int i;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
int main(void)
{
	srand(time(NULL));
	int i;
	int r;

	int list[10] = { 0, };
	for (i = 0; i < 10; i++)
	{
		r = rand() % 10 - 5; //이렇게 하면 음수부터 양수가 출력됨.
		list[i] += r;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", list[i]);
	printf("\n");
	printf("최댓값 : %d", Max(list, i));
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char voca[50];
	fgets(voca, sizeof(voca), stdin);
	int i;
	int sum = 0;
	
	for (i = 0; i != 13; i++)
	{

		if (voca[i] >= 'a' && voca[i] <= 'z')
		{
			voca[i] = voca[i] - ('a' - 'A');
			printf("%c", voca[i]);
		}
		else if (voca[i] >= 'A' && voca[i] <= 'Z')
		{
			voca[i] = voca[i] + ('a' - 'A');
			printf("%c", voca[i]);
		}

		else if (voca[i] >= '1' && voca[i] <= '9')
			sum += (voca[i] - '0');

		else
			continue;
	}
	printf("(%d)", sum);
}*/
/*
#include <stdio.h>
int MaxAndMin(int ptrarr[], int** Mptr, int** mptr)
{
	int *max, *min;
	max = ptrarr; 
	min = ptrarr;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (ptrarr[i] > *max)
			max = &ptrarr[i];
		else if (ptrarr[i] < *min)
			min = &ptrarr[i];
	}
	*Mptr = max;
	*mptr = min;
}
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("최댓값 : %d, 최솟값 : %d\n", *maxPtr, *minPtr);
}*/
/*
#include <stdio.h>
#include <string.h>

void string(char a[], char b[], char c[], char d[])
{

	if (strcmp(a, b) == 0)
	{
		if (strcmp(c, d) == 0)
		{
			printf("이름이 같습니다.\n나이가 같습니다.");
		}
		else
		{
			printf("이름이 같습니다.\n나이가 다릅니다.");
		}
	}
	else
	{
		if (strcmp(c, d) == 0)
		{
			printf("이름이 같지 않습니다.\n나이는 같습니다.");
		}
		else printf("이름이 같지 않습니다.\n나이가 같지 않습니다.");
	}
}
int main(void)
{
	char name1[20];
	char name2[20];
	char num1[20] = { 0, }, num2[20] = { 0, };
	char user1[50], user2[50];
	int count1 = 1, count2 = 1;

	gets(user1);
	gets(user2);

	for (int i = 0; user1[i] != ' '; i++)
	{
		name1[i] = user1[i];
		count1++;
	}
	for (int i = 0; user1[count1 + i] != '\0'; i++) num1[i] = user1[count1 + i];
	for (int i = 0; user2[i] != ' '; i++)
	{
		name2[i] = user2[i];
		count2++;
	}
	for (int i = 0; user2[count2 + i] != '\0'; i++) num2[i] = user2[count2 + i];

	string(name1, name2, num1, num2);

	return 0;

}*/
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char user1[20];
	char user2[20];
	int i, j;
	int cnt = 0;
	fgets(user1, sizeof(user1), stdin);
	user1[strlen(user1) - 1] = 0;

	fgets(user2, sizeof(user2), stdin);
	user2[strlen(user2) - 1] = 0;

	for (i = 0; user1[i] != ' '; i++)
	{
		user1[i] == i;
	}
	for (j = 0; user2[j] != ' '; j++)
	{
		user2[i] == j;
	}

	if(i == j)
	{
		for (i = 0; user1[i] != ' '; i++)
			if (strncmp(user1, user2, i) == 0)
				cnt++;
		if (cnt > 0)
			puts("이름이 같습니다.");
	}

	else
		puts("이름이 같지 않습니다.");

	int age1, age2;
	age1 = atoi(&user1[i + 1]);
	age2 = atoi(&user2[j + 1]);

	if (age1 == age2)
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char animal[4][10] = { "dog", "cat", "horse", "elephant" };
	char* animal2[10] = { "dog", "cat", "horse", "elephant" };

	char** ptr = animal2;
	int i;
	for (i = 0; i < 4; i++)
		printf("%s\n", animal[i]);
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *(ptr + i));
	}
}*/
/*
#include <stdio.h>
void Swap(char** dpa, char** dpb)
{
	char *temp; //temp에 * 붙여줘야함.
	temp = *dpa;
	*dpa = *dpb;
	*dpb = temp;
}
int main(void)
{
	char* pa = "dog";
	char* pb = "cat";
	printf("%s %s\n", pa, pb);

	Swap(&pa, &pb);
	printf("%s %s\n", pa, pb);
}*/
/*
#include <stdio.h>
#include <string.h>
int Vowel(char *voca)
{
	int i;
	int cnt = 0;
	for (i = 0; voca[i] != '\0'; i++)
		if (*(voca + i) == 'a' || *(voca + i) == 'e' || *(voca + i) == 'i' || *(voca + i) == 'o' || *(voca + i) == 'u')
			cnt++;
	return cnt;
}
int main(void)
{
	char voca1[20];
	char voca2[20];

	fgets(voca1, sizeof(voca1), stdin);
	voca1[strlen(voca1) - 1] = 0;

	fgets(voca2, sizeof(voca2), stdin);
	voca2[strlen(voca2) - 1] = 0;

	printf("voca1의 모음의 개수 : %d\n", Vowel(&voca1));
	printf("voca2의 모음의 개수 : %d", Vowel(&voca2));
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3][9];
	int i, j;
	for (i = 2; i <= 4; i++)
	{
		for (j = 1; j <= 9; j++)
			printf("%d ", i * j);
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arrA[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arrB[4][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arrA[i][j]);
			arrB[j][i] = arrA[i][j];
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}
}*/
/*
#include <stdio.h>
void Clearline(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 : ", stdout);
	gets(perID, sizeof(perID), stdin);
	Clearline();
	fputs("이름입력 : ", stdout);
	gets(name, sizeof(name), stdin);
	printf("주민번호 : %s\n", perID);
	printf("이름 : %s\n", name);
}*/