/*
//3. 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어서 호출하세요.

#include <stdio.h>

float calculator(float A, float B);

int main(void)
{
	float a, b;
	char oper;
	printf("두 개의 실수 입력 : ");
	scanf("%f %f", &a, &b);

	printf("연산자 입력 ( + / # ) : ");
	scanf("%s", &oper);

	if (oper == '+')
		printf("%f", calculator(a, b));
	else if (oper == '#')
		printf("%f", (calculator(a, b)) / 2);
	else
		return 0;
	return 0;
}
float calculator(float A, float B)
{
	float result;
	result = A + B;
	return result;
}*/