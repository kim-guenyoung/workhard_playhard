/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ch1, ch2;
	scanf("%c", &ch1);

	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char* str = "Simple String";

	printf("1. puts test \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test \n");
	fputs(str, stdout);
	printf("\n");
	//puts�� fputs ���� : ���๮�ڰ� �ְ� ����
	fputs("So Simple String", stdout);
	printf("\n");

	printf("3. end of main\n");
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char str[7]; //���ڿ��� null�� �ֱ� ������ �׻� �˳��ϰ� ����ִ� ������ �⸣��
	int i;
	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d : %s\n", i + 1, str);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char str[7];
	int i;
	for (i = 0; i < 3; i++)
	{//���� 6���ھ� �ڸ��±���
		fgets(str, sizeof(str), stdin);
		printf("Read %d : %s\n", i + 1, str);
	}
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
int main(void)
{
	char str[10];
	printf("���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("���� : %d, ���� : %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("���� : %d, ���� : %s\n", strlen(str), str);

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case1
	strcpy(str2, str1);
	puts(str2);

	//case2
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	//case3
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second~";
	
	char str3[20] = "Simple num : ";
	char str4[20] = "1234567890";

	//case1
	strcat(str1, str2);
	puts(str1);

	//case2
	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "String";
	char str2[] = "String";

	if (str1 == str2)
		puts("[ == ] equal");

	else
		puts("[ == ] not equal");
	
	if (!strcmp(str1, str2))
		puts("[strcmp] equal");
	
	else
		puts("[strcmp] not equal");

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // rand()�Լ��� �����ϴ� ���̺귯��
#include <time.h>   // time()�Լ��� �����ϴ� ���̺귯��
//char* itoa(int val, char* buf, int radix);
int main(void)
{

	srand(time(NULL)); // �Ź� �ٸ� ������ �߻��ϵ��� �ϱ� ���ؼ� ���

	int i;
	char ch[10];

	printf("����? ����? ��? : ");

	gets(ch, sizeof(ch), stdin);

	char rps[3][5] = { "����", "����", "��" };
	int random = rand() % 3;
	printf("����� %s ����, ��ǻ�ʹ� %s ����, ", ch, rps[random]);

	if (!strcmp(ch, rps[random]))
	{
		puts("�����ϴ�.");
	}
	
}*/
/*
#include <stdio.h>
void ShowArr2DStyle(int(*arr)[4], int column)
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
int sum2DArr(int arr[][4], int column)
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	return sum;
}
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };
	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));

	printf("arr1�� �� : %d\n", sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2�� �� : %d\n", sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));

}*/
/*
#include <stdio.h>
void MaxAndMin(int* arr, int** maxp, int** minp)
{
	int* max, *min;
	int i;
	max = min = arr;
	for (i = 0; i < 5; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*maxp = max;
	*minp = min;
}
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("�ִ� : %d, �ּ� : %d\n", *maxPtr, *minPtr);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>  // rand()�Լ��� �����ϴ� ���̺귯��
#include <time.h>   // time()�Լ��� �����ϴ� ���̺귯��

int main(void)
{

	srand(time(NULL)); // �Ź� �ٸ� ������ �߻��ϵ��� �ϱ� ���ؼ� ���

	int i;
	char ch[3];

	printf("����? ����? ��? : ");

	gets(ch, sizeof(ch[i]), stdin);

	char rps[3][5] = { "����", "����", "��" };

	int random = rand() % 3;
	printf("����� %s ����, ��ǻ�ʹ� %s ����, ", ch, rps[random]);

	if (!strcmp(ch, rps[random]))
	{
		puts("�����ϴ�.");
	}

}*/