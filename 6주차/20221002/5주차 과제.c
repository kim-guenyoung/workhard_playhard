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

	

	printf("1���� 5 �� ���� (0 �Է� �� ����)\n");
	printf(" (1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");
	scanf_s("%d", &choice);
	if (choice == 0)
	{
		printf("���α׷��� �����մϴ�.");
		return 0;
	}

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	int (*fp)(int, int); //�Լ� ������ ����

	if (choice == 1)
	{
		fp = Sum; //Sum �Լ��� �Լ������� ����
		printf("����� �� : %d\n", fp(num1, num2));
	}
	else if (choice == 2)
	{
		fp = Minus; //Minus �Լ��� �Լ������� ����
		printf("����� �� : %d\n", fp(num1, num2));
	}
	else if (choice == 3)
	{
		fp = Multiple; //Multiple �Լ��� �Լ������� ����
		printf("����� �� : %d\n", fp(num1, num2));
	}
	else if (choice == 4)
	{
		fp = BiggerNum; //BiggerNum �Լ��� �Լ������� ����
		printf("����� �� : %d\n", fp(num1, num2));
	}
	else if (choice == 5)
	{
		fp = SmallerNum; //SmallerNum �Լ��� �Լ������� ����
		printf("����� �� : %d\n", fp(num1, num2));
	}
	return 0;
}*/