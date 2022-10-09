/*//�Լ� ������ ����
#include <stdio.h>
void AddFunc(int a, int b)
//int a, int b�� �Լ��� ������ ���ÿ� �Ҹ�
{
	printf("a = %d b = %d a + b = %d\n", a, b, a + b);
}

int main(void)
{
	int num1 = 5, num2 = 7;
	AddFunc(num1, num2);

	return 0;
}*/
/*
//���� 2.
#include <stdio.h>
void AddFunc(int a, int b);
int main(void)
{
	int num1 = 5, num2 = 7;
	printf("[before] : num1 = %d num2 = %d\n", num1, num2);
	AddFunc(num1, num2);
	printf("[after] : num1 = %d num2 = %d\n", num1, num2);
}
void AddFunc(int a, int b)
{
	printf("a = %d b = %d a + b = %d\n", a, b, a + b);
}*/
/*
#include <stdio.h>
void ShowArray(int* a)
{//�ּҰ��� ������ ���� �� �ֳ�
	printf("a = %d\n", a);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}
int main(void)
{
	int arr[4] = { 100, 200, 300, 400 };
	printf("arr = %d\n", arr);
	ShowArray(arr);
}*/
/*
#include <stdio.h>
void SumArray(int* a, int len)
{	
	int i, sum = 0;
	printf("sizeof(a) = %zd len = %d\n", sizeof(a), len);
	for (i = 0; i < len; i++)
	{
		prinf("a[%d] = %d ", i, a[i]);
		sum += a[i];

	}
	printf("\n�迭 ����� ���� %d\n", sum);
}
int main(void)
{
	int arr[] = { 100, 200, 300, 400, 500 };
	SumArray(arr, sizeof(arr) / sizeof(int));
	
	int* ptr = arr;
	SumArray(ptr, sizeof(arr) / sizeof(int));
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void SwapValue(int a, int b)
//�Լ��� ����Ǵ� ������ �ٷ� �Ҹ�, ���� ����
{
	int temp;

	printf("a = %d, b = %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n", a, b);
}
void SwapRef(int* a, int* b)
{
	//�ּ� ���� �Ѱܹ��� ���� �ּ� ���� �ٲ�� ���� �ƴ϶� �ű⿡ ����Ǿ��ִ� ���� �ٲ�� ��
	//�׷��� �Լ��� Ż���� �ڿ��� ����ؼ� �ٲ����
	//���� swap�� ���� call by reference���� ���� ����
	int temp;
	printf("a = %d, b = %d\n", a, b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("a = %d, b = %d\n", a, b);
}

void ShowArray(const int* a, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
int main(void)
{
	int num1 = 5, num2 = 7;

	//SwapFunc()�Լ� �ȿ��� ���� ���� �ٲ� ��� > main�Լ����� ���� �׻� �ٲ�� ���� �ƴ�
	//Call-by-Value : ���� ���� ����
	printf("���� 1\n");
	printf("[before] : num1 = %d, num2 = %d\n", num1, num2);
	SwapValue(num1, num2);
	printf("[after] : num1 = %d, num2 = %d\n", num1, num2);

	//�ּҰ��� �Լ��� ���ڷ� �����ϸ� ���� �ٲ� �� ����
	//Call-by-Reference : �ּ� ���� ���� ����
	printf("���� 2\n");
	printf("[before] : num1 = %d, num2 = %d\n", num1, num2);
	SwapRef(&num1, &num2);
	printf("[after] : num1 = %d num2 = %d\n", num1, num2);


	//scanf() �Լ� ȣ�� �� & �����ڸ� ���̴� ����
	printf("���� 3");
	printf("num1, num2�� ���ʷ� �Է��ϼ���.\n");
	printf("[before] num1 = %d, num2 = %d\n", num1, num2);
	
	scanf("%d %d", &num1, &num2);
	printf("[after] num1 = %d, num2 = %d\n", num1, num2);

	
	//���ڿ� �Է�
	printf("���� 4\n");

	char str[10];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	printf("�Է��Ͻ� ���ڿ��� [%s]�Դϴ�.\n", str);

}*/
/*
//���� 1. ���� num�� ����� ���� ������ ����ϴ� �Լ�
//(1) Call-by-value
//(2) Call-by-reference

#include <stdio.h>
int squareValue(int n)
{
	return n * n;
}

void squareRef(int *ptr)
{
	int num = *ptr;
	*ptr = num * num;

}
int main(void)
{
	
	int num = 5;
	printf("num : %d\n", num);
	printf("num��: %d\n", squareValue(num));
	squareRef(&num);
	printf("num��: %d\n", num);
}*/
/*
//���� 2 : �� ������ ����� ���� ���� �ٲٴ� �Լ�
#include <stdio.h>
void swapRef(int *n1, int *n2, int *n3)
{
	int temp;

	temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}
int main(void)
{
	//num1 = 10, num2 = 20, num3 = 30
	//->num1 = 30, num2 = 10, num3  = 20;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("[before] : %d %d %d\n", num1, num2, num3);
	swapRef(&num1, &num2, &num3);
	printf("[after] : num1 = %d num2 = %d num3 = %d\n", num1, num2, num3);
}*/

//5. main�Լ����� const����(���)�ϸ� ����ϱ� ���� �ٲ� �� ����
/*#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("���� 5\n");
	const int cnum = 10;
	//cnum = 20; 
	printf("cnum = %d\n", cnum);
}*/
//6. const�� ����Ǹ� ������ ������ �����ϴ� ����� ������ �� ����.


//������ ����� const ����
//�������� ������ ���ȭ�ϴ� ������ const �����̾��ٸ� �̷� const������ ������ ������ ������ε� �����ϴ�
/*
#include <stdio.h>
int main(void)
{
	
	//������ ���� �ϴ� ���
	double PI = 3.1415;
	double rad;
	PI = 3.07; //�Ǽ��� �߸� ���Ե� ���� but ������ �� �߰ߵ��� ����.
	scanf_s("%lf", &rad);
	printf("circle area %f\n", rad * rad * PI);
	return 0;

	const double PI = 3.1415;
	double rad;
	//PI = 3.07; -> �̰Ŵ� ������ �� ���� �߰ߵ�
	scanf_s("%lf", &rad);
	printf("circle area %f\n", rad * rad * PI);

	return 0;
}*/
/*
#include <stdio.h>
void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
}*/
/*
#include <stdio.h>

void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20; //rptr�� �̿��ؼ� ���� �ٲٷ��� �ϴϱ� �̰� �߸��� ������
}
int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}*/

