/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	void* ptr = &num;
	//*ptr = 20; //�������� X
	//ptr++; //�����Ϳ���X
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
	strcpy(str2, str1); //str1�� str2�� ����
	puts(str2);

	strncpy(str3, str1, sizeof(str3)); //str1�� str3�� 5��ŭ ����
	puts(str3);

	strncpy(str3, str1, sizeof(str3) - 1); //1 2 3 4 + �ܰ��
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}*/
/*
#include <stdio.h>
int Choose(int x, int y, int(*cmp)(int n1, int n2))
{
	return cmp(x, y);
}
int Sum(int x, int y)
{
	return x + y;
}
int Minus(int x, int y)
{
	return x - y;
}
int Multiple(int x, int y)
{
	return x * y;
}
int BiggerNum(int x, int y)
{
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return 0;
}
int SmallerNum(int x, int y)
{
	if (x > y)
		return y;
	else if (x < y)
		return x;
	else
		return 0;
}
int main(void)
{
	int choice;
	int num1, num2;
	int (*ptr[5])(int, int) = { Sum, Minus, Multiple, BiggerNum, SmallerNum };
	while (1)
	{
		printf("1���� 5 �� ���� (0 �Է� �� ����)\n");
		printf("(1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");

		scanf_s("%d", &choice);

		if (choice == 0)
		{
			printf("���α׷��� �����մϴ�.");
			return 0;
		}
		printf("�� ���� ���� �Է��ϼ��� : ");
		scanf_s("%d %d", &num1, &num2);

		
		printf("����� �� : %d\n", ptr[choice - 1](num1, num2)); //index ���̴� -1�� �ؾ���.
	}
	return 0;
}*/
/*
#include <stdio.h>
int Sum(int x, int y)
{
	return x + y;
}
int Minus(int x, int y)
{
	return x - y;
}
int Multiple(int x, int y)
{
	return x * y;
}
int BiggerNum(int x, int y)
{
	return (x > y ? x : y);
}
int SmallerNum(int x, int y)
{
	return (x < y ? x : y);
}
int main(void)
{
	int choice;
	int num1, num2;
	int (*ptr)(int, int);
	int result;
	while (1)
	{
		printf("1���� 5 �� ���� (0 �Է� �� ����)\n");
		printf("(1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");

		scanf_s("%d", &choice);

		if (choice == 0)
		{
			printf("���α׷��� �����մϴ�.");
			return 0;
		}
		if (choice > 5 || choice < 1)
		{
			printf("1���� 5������ �Է��� �� �ֽ��ϴ�.");
			return 0;
		}
		printf("�� ���� ������ �Է��ϼ��� : ");
		scanf_s("%d %d", &num1, &num2);
		switch (choice)
		{
		case 1:
			ptr = Sum;
			result = ptr(num1, num2);
			break;
		case 2:
			ptr = Minus;
			result = ptr(num1, num2);
			break;
		case 3:
			ptr = Multiple;
			result = ptr(num1, num2);
			break;
		case 4:
			ptr = BiggerNum;
			result = ptr(num1, num2);
			break;
		case 5:
			ptr = SmallerNum;
			result = ptr(num1, num2);
			break;
		}

		printf("����� �� : %d\n", result); //index ���̴� -1�� �ؾ���.
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	int len;
	len = strlen(str1);
	str1[len - 1] = 0;

	strcpy(str3, str1);
	printf("%s\n", str3);
	strcat(str3, str2);

	printf("%s", str3);
	
}*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20];
	fgets(str, sizeof(str), stdin);
	int len;
	len = strlen(str);
	int sum = 0;
	int i;
	for (i = 0; str[i] != '\0'; i++)
		if ('1' <= str[i] && str[i] <= '9')
			sum += str[i] - '0';

	printf("%d", sum);
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char alphabet = 0;
	printf("���� �Է� : ");
	alphabet = getchar();
	if (alphabet > 'A' && alphabet < 'Z')
		putchar(alphabet + ('a' - 'A'));
	else if (alphabet >= 'a' && alphabet <= 'z')
		putchar(alphabet - ('a' - 'A'));
	else
		fputs("ERROR!!!!!", stdout);
}*/
/*
#include <stdio.h>
#include <string.h>
int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2)
		return 0;
	else
		return !strcmp(str1, str2);
}
int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]);
	age2 = atoi(&str1[idx2 + 1]);

	if (age1 == age2)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	int len;

	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
		puts("�̸��� �����մϴ�.");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");

	if (CompAge(str1, str2))
		puts("���̰� �����ϴ�.");
	else
		puts("���̰� ���� �ʽ��ϴ�.");

}*/
/*
#include <stdio.h>
void ShowAllString(int argc, char* argv[]) //argv���� char **�� �����Ͱ� ���޵� �� ����.
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
int main(void)
{
	char* str[3] = {
		"C Programming",
		"C++ Prgoramming",
		"JAVA Programming"
	};
	ShowAllString(3, str);
	return 0;
}*/
/*
#include <stdio.h>
void SimpleFunc(void)
{
	printf("I'm So Simple");
}
int main(void)
{
	int num = 20;
	void* ptr; 

	ptr = &num;
	printf("%p\n", ptr); //20�� num�� �ּ� �� ��µ� ����

	ptr = SimpleFunc;
	printf("%p\n", ptr);
}*/
/*
#include <stdio.h>
int main(void)
{
	char arr[8];
	char* ptr;

	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = 'd';
	arr[4] = 'e';
	arr[5] = 'f';
	arr[6] = 'g';
	arr[7] = '\0';

	ptr = arr; 
	printf("%c\n", *ptr); //a

	ptr += 3;
	printf("%c\n", *ptr); //d
}*/
/*
//���� ����
#include <stdio.h>
int main(void)
{
	char arr[8];
	char* ptr = arr;
	int i;
	
	arr[0] = 'a';
	arr[1] = 'b';
	arr[2] = 'c';
	arr[3] = 'd';
	arr[4] = 'e';
	arr[5] = 'f';
	arr[6] = 'g';
	arr[7] = '\0';

	*ptr = 'Z';
	ptr += 3;
	*ptr = 'W';
	printf("%s\n", arr);
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr = 1;
	int* ptr = &arr;
	*ptr = 128;
	printf("%d\n", arr);
}
*/
/*
#include <stdio.h>
void func()
{
	printf("function\n");
}
int main(void)
{
	void (*ptr)();
	ptr = &func;
	(*ptr)(); //pointer ���
}*/