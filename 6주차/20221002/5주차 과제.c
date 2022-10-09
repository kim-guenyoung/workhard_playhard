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

	

	printf("1부터 5 중 선택 (0 입력 시 종료)\n");
	printf(" (1)합, (2)차, (3)곱, (4)둘 중 큰 값, (5) 둘 중 작은 값 : ");
	scanf_s("%d", &choice);
	if (choice == 0)
	{
		printf("프로그램을 종료합니다.");
		return 0;
	}

	printf("두 개의 수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	int (*fp)(int, int); //함수 포인터 선언

	if (choice == 1)
	{
		fp = Sum; //Sum 함수에 함수포인터 저장
		printf("계산한 값 : %d\n", fp(num1, num2));
	}
	else if (choice == 2)
	{
		fp = Minus; //Minus 함수에 함수포인터 저장
		printf("계산한 값 : %d\n", fp(num1, num2));
	}
	else if (choice == 3)
	{
		fp = Multiple; //Multiple 함수에 함수포인터 저장
		printf("계산한 값 : %d\n", fp(num1, num2));
	}
	else if (choice == 4)
	{
		fp = BiggerNum; //BiggerNum 함수에 함수포인터 저장
		printf("계산한 값 : %d\n", fp(num1, num2));
	}
	else if (choice == 5)
	{
		fp = SmallerNum; //SmallerNum 함수에 함수포인터 저장
		printf("계산한 값 : %d\n", fp(num1, num2));
	}
	return 0;
}*/