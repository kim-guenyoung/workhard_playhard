/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	void* ptr = &num;
	//*ptr = 20; //참조연산 X
	//ptr++; //포인터연산X
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
	strcpy(str2, str1); //str1을 str2에 복사
	puts(str2);

	strncpy(str3, str1, sizeof(str3)); //str1을 str3에 5만큼 복사
	puts(str3);

	strncpy(str3, str1, sizeof(str3) - 1); //1 2 3 4 + 외계어
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
		printf("1부터 5 중 선택 (0 입력 시 종료)\n");
		printf("(1)합, (2)차, (3)곱, (4)둘 중 큰 값, (5) 둘 중 작은 값 : ");

		scanf_s("%d", &choice);

		if (choice == 0)
		{
			printf("프로그램을 종료합니다.");
			return 0;
		}
		printf("두 개의 수를 입력하세요 : ");
		scanf_s("%d %d", &num1, &num2);

		
		printf("계산한 값 : %d\n", ptr[choice - 1](num1, num2)); //index 값이니 -1을 해야함.
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
		printf("1부터 5 중 선택 (0 입력 시 종료)\n");
		printf("(1)합, (2)차, (3)곱, (4)둘 중 큰 값, (5) 둘 중 작은 값 : ");

		scanf_s("%d", &choice);

		if (choice == 0)
		{
			printf("프로그램을 종료합니다.");
			return 0;
		}
		if (choice > 5 || choice < 1)
		{
			printf("1부터 5까지만 입력할 수 있습니다.");
			return 0;
		}
		printf("두 개의 정수를 입력하세요 : ");
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

		printf("계산한 값 : %d\n", result); //index 값이니 -1을 해야함.
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
	printf("문자 입력 : ");
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
		puts("이름이 동일합니다.");
	else
		puts("이름이 동일하지 않습니다.");

	if (CompAge(str1, str2))
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");

}*/
/*
#include <stdio.h>
void ShowAllString(int argc, char* argv[]) //argv에는 char **형 데이터가 전달될 수 있음.
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
	printf("%p\n", ptr); //20인 num의 주소 값 출력될 것임

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
//값을 변경
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
	(*ptr)(); //pointer 출력
}*/