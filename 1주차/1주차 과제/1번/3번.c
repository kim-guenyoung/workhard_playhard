/*
//3. �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ���� ȣ���ϼ���.

#include <stdio.h>

float calculator(float A, float B);

int main(void)
{
	float a, b;
	char oper;
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%f %f", &a, &b);

	printf("������ �Է� ( + / # ) : ");
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