/*#include <stdio.h>
void hello()
{
	printf("Hello, world!\n");
	hello(); //hello 함수 안에서 hello 함수를 호출하니까 무한 반복?
}
int main(void)
{
	hello();
	return 0;
}*/
/*
#include <stdio.h>
void hello(int count)
{
	if (count == 0)
		return 0;
	else
		printf("Hello world! %d\n", count);

	hello(--count);
}
int main(void)
{
	hello(5);
	return 0;
}*/
/*
//함수 포인터 사용하기
#include <stdio.h>
void hello()
{
	printf("Hello, world!\n");
}
int main(void)
{
	hello(); //함수 이름으로 함수를 직접 호출
	return 0;
}*/
/*
#include <stdio.h>
void hello()
{
	printf("Hello, world!\n");
}
void bonjour()
{
	printf("bonjour le monde!\n");
}
int main(void)
{
	void (*fp)();

	fp = hello;
	fp();

	fp = bonjour;
	fp();

	return 0;
}*/
/*
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int sub(int a, int b)
{
	return a - b;
}
int Biggernum(int a, int b)
{
	return (a > b) ? a : b;
}
int Smallernum(int a, int b)
{
	return (a < b) ? a : b;
}
int main(void)
{
	int (*cmp)(int, int);
	int num1, num2;
	int choice;
	scanf_s("%d", &choice);
	scanf_s("%d %d", &num1, &num2);
	do
	{
		switch (choice)
		{
		case 1:
			cmp = add;
			printf("덧셈 결과 : %d\n", cmp(num1, num2));
			break;
		case 2:
			cmp = sub;
			printf("뺄셈 결과 : %d\n", cmp(num1, num2));
			break;
		case 3:
			cmp = mul;
			printf("곱셈 결과 : %d\n", cmp(num1, num2));
			break;
		case 4:
			cmp = Biggernum;
			printf("더 큰 값 : %d\n", cmp(num1, num2));
			break;
		case 5:
			cmp = Smallernum;
			printf("더 작은 값 : %d\n", cmp(num1, num2));
			break;
		default:
			printf("다시 입력하세요 : ");
		}
		
		scanf_s("%d", &choice);
		scanf_s("%d %d", &num1, &num2);
	} while (choice != 0);
	printf("프로그램을 종료합니다.");
	return 0;
}*/


