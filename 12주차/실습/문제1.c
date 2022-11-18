
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void func2(int n)
{
	int num3 = n + 1;
}
void func1(int n)
{
	int num2 = n + 1;
	func2(num2);
}
int main(void)
{
	int num1 = 20;
	func1(num1);
	return 0;
}

//먼저 호출된 스택공간일수록 늦게 해제된다 FILO