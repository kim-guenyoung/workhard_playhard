/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
typedef struct complex
{
	double imagine;
	double real;
}Complex;

Complex sum(Complex n1, Complex n2)
{
	Complex sum;
	sum.real = n1.real + n2.real;
	sum.imagine = n1.imagine + n2.imagine;
	return sum;
}
Complex multiple(Complex n1, Complex n2)
{
	Complex multiple;
	multiple.real = n1.real * n2.real - n1.imagine * n2.imagine;
	multiple.imagine = n1.real * n2.imagine + n1.imagine * n2.real;
	return multiple;
}
void result(Complex r)
{
	printf("�Ǽ��� : %lf, �����: %lf\n", r.real, r.imagine);
}
int main(void)
{
	Complex num1, num2;
	printf("���Ҽ� �Է�1 (�Ǽ�, ���) : ");
	scanf("%lf %lf", &num1.real, &num1.imagine);
	
	printf("���Ҽ� �Է�2 (�Ǽ�, ���) : ");
	scanf("%lf %lf", &num2.real, &num2.imagine);

	printf("���� ��� : ");
	result(sum(num1, num2));
	printf("���� ��� : ");
	result(multiple(num1, num2));
}*/