/*#include <stdio.h>
void Sum(int x, int y)
{
	printf("%d", x + y);
}
void Minus(int x, int y)
{
	printf("%d", x - y);
}
void Multiple(int x, int y)
{
	printf("%d", x * y);
}
void BiggerNum(int x, int y)
{
	if (x > y)
		printf("%d", x);
	else if (x < y)
		printf("%d", y);
	//else
		//return 0;
}
void SmallerNum(int x, int y)
{
	if (x < y)
		printf("%d", x);
	else if (x > y)
		printf("%d", y);
	//else
		//return 0;
}
int main(void)
{
	int choice;
	
	int num1, num2;

	printf("1���� 5 �� ���� (0 �Է� �� ����\n)");
	printf(" (1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");
	scanf_s("%d", &choice);
	if (choice == 0)
	{
		printf("���α׷��� �����մϴ�.\n");
		return 0;
	}

	void(*fptr1)(int, int) = Sum;
	void(*fptr2)(int, int) = Minus;
	void(*fptr3)(int, int) = Multiple;
	void(*fptr4)(int, int) = BiggerNum;
	void(*fptr5)(int, int) = SmallerNum;

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	switch (choice)
	{
	case 0:
		printf("���α׷��� �����մϴ�.\n");
		break;
	case 1:
		fptr1(num1, num2);
		break;
	case 2:
		fptr2(num1, num2);
		break;
	case 3:
		fptr3(num1, num2);
		break;
	case 4:
		fptr4(num1, num2);
		break;
	case 5:
		fptr5(num1, num2);
		break;
	}
	return 0;
}*/
/*
//���� �ݺ�
#include <stdio.h>
void Sum(int x, int y)
{
	printf("%d\n", x + y);
}

void Minus(int x, int y)
{
	printf("%d\n", x - y);
}
void Multiple(int x, int y)
{
	printf("%d\n", x * y);
}
void BiggerNum(int x, int y)
{
	if (x > y)
		printf("%d\n", x);
	else if (x < y)
		printf("%d\n", y);
	//else
		//return 0;
}
void SmallerNum(int x, int y)
{
	if (x < y)
		printf("%d\n", x);
	else if (x > y)
		printf("%d\n", y);
	//else
		//return 0;
}
int main(void)
{
	int choice;

	int num1, num2;

	printf("1���� 5 �� ���� (0 �Է� �� ����\n)");
	printf("(1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");
	scanf_s("%d", &choice);

	void(*fptr1)(int, int) = Sum;
	void(*fptr2)(int, int) = Minus;
	void(*fptr3)(int, int) = Multiple;
	void(*fptr4)(int, int) = BiggerNum;
	void(*fptr5)(int, int) = SmallerNum;

	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	while (choice == 0)
	{
		
		switch (choice)
		{
		case 0:
			printf("���α׷��� �����մϴ�.\n");
			break;
		case 1:
			fptr1(num1, num2);
			break;
		case 2:
			fptr2(num1, num2);
			break;
		case 3:
			fptr3(num1, num2);
			break;
		case 4:
			fptr4(num1, num2);
			break;
		case 5:
			fptr5(num1, num2);
			break;
		}
		printf("1���� 5 �� ���� (0 �Է� �� ����)\n");
		printf("(1)��, (2)��, (3)��, (4)�� �� ū ��, (5) �� �� ���� �� : ");
		scanf_s("%d", &choice);
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
	if (x > y)
		return x;
	else if (x < y)
		return y;
	//else
		//return 0;
}
int SmallerNum(int x, int y)
{
	if (x < y)
		printf("%d\n", x);
	else if (x > y)
		printf("%d\n", y);
	//else
		//return 0;
}
int main(void)
{
	int x, y;
	int choice;
	do {
		printf("�� ���� �Է��ϼ��� : ");
		scanf_s("%d %d")
	}
}*/