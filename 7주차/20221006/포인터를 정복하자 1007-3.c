/*#include <stdio.h>
void hello()
{
	printf("Hello, world!\n");
	hello(); //hello �Լ� �ȿ��� hello �Լ��� ȣ���ϴϱ� ���� �ݺ�?
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
//�Լ� ������ ����ϱ�
#include <stdio.h>
void hello()
{
	printf("Hello, world!\n");
}
int main(void)
{
	hello(); //�Լ� �̸����� �Լ��� ���� ȣ��
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
			printf("���� ��� : %d\n", cmp(num1, num2));
			break;
		case 2:
			cmp = sub;
			printf("���� ��� : %d\n", cmp(num1, num2));
			break;
		case 3:
			cmp = mul;
			printf("���� ��� : %d\n", cmp(num1, num2));
			break;
		case 4:
			cmp = Biggernum;
			printf("�� ū �� : %d\n", cmp(num1, num2));
			break;
		case 5:
			cmp = Smallernum;
			printf("�� ���� �� : %d\n", cmp(num1, num2));
			break;
		default:
			printf("�ٽ� �Է��ϼ��� : ");
		}
		
		scanf_s("%d", &choice);
		scanf_s("%d %d", &num1, &num2);
	} while (choice != 0);
	printf("���α׷��� �����մϴ�.");
	return 0;
}*/


