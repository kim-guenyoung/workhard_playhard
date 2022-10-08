/*
#include <stdio.h>

void SwapNumber(int first, int second)
{
	int temp;
	temp = first;
	first = second;
	second = temp;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;

	SwapNumber(num1, num2);
	printf("%d %d", num1, num2);
	return 0;
}
//���� �غ��� �˰����� �翬�� �ٲ��� �ʴ´�.
//�Ű������� ���� �����ϴ� ���Ҹ� �� ��, �Լ� �� �����ʹ� �����ϴϱ�!
*/
/*
#include <stdio.h>
void SwapNumber(int* first, int* second)
{
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	SwapNumber(&num1, &num2); //�̰� ����Ʈ (num1�� num2�� �޸� �ּҸ� �־��ִ� ���̴�.
	printf("%d %d\n", num1, num2);

	return 0;
}*/
/*
#include <stdio.h>
void helloString(char* s1)//��ȯ�� ����, char ������ �Ű����� �� �� ����
{
	printf("Hello, %s\n", s1);
}
int main(void)
{
	helloString("world!");
	return 0;
}*/
/*
#include <stdio.h>
void helloString(char* s1)
{
	printf("Hello, %s\n", s1);
}
int main(void)
{
	char s1[10] = "world!";
	helloString(s1);
	
	return 0;
	//�Ű������� ���� �迭�� �޴´ٴ� ���� Ȯ���� ���ֱ� ���ؼ��� ������ ���� �Ű����� �ڿ� [�迭�� ũ��]�� �ٿ��־�� �Ѵ�.

}*/
/*
#include <stdio.h>
void helloString(char s1[])
{
	printf("Hello, %s\n", s1);
}
int main(void)
{
	char s1[10] = "world!";
	helloString(s1);
	helloString("world!");
	return 0;
}*/
/*
//�Լ����� �迭 �Ű����� ����ϱ�
#include <stdio.h>
void printArray(int arr[], int count) //�迭�� �����Ϳ� ����� ������ �޴´�.
{
	int i;
	for (i = 0; i < count; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main(void)
{
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printArray(numArr, sizeof(numArr) / sizeof(int));
	return 0;
}*/
/*
#include <stdio.h>
void setElement(int arr[])
{
	arr[12] = 300;
}
int main(void)
{
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	setElement(numArr);
	printf("%d\n", numArr[2]); //����ϸ� setElement���� ������ ���� ��µ�.
	return 0;
}*/
/*
//papameter_pointer.c
#include <stdio.h>
void printArray(int* arr, int count) //�Ű������� �����ͷ� �����Ͽ� �迭�� �޴´�.
{
	int i;
	for (i = 0; i < count; i++)
		printf("%d ", arr[i]);
}
int main(void)
{
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printArray(numArr, sizeof(numArr) / sizeof(int));
	return 0;
}*/
/*
#include <stdio.h>
void SwapElement(int arr[], int first, int second) //�迭�� �����Ϳ� �ε����� �޴´�.
{
	int temp;
	//�迭�� �޸� �ּҸ� ����
	temp = arr[first];
	arr[first] = arr[second];
	arr[second] = temp;
}
int main(void)
{
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	swapElement(numArr, 0, 1); //�迭�� ���� ���� �ٲ� �ε����� ����
	printf("%d %d\n", numArr[0], numArr[1]);

	return 0;
}*/
/*
//2���� �迭 �Ű����� ����ϱ�
#include <stdio.h>
void print2DArray(int arr[][5], int col, int row)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
	printf("\n");
	}
}
int main(void)
{
	int numArr[2][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);
	
	print2DArray(numArr, col, row);
}*/
/*
#include <stdio.h>
void print2DArray(int(*arr)[5], int col, int row)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int numArr[2][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10}
	};

	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);

	print2DArray(numArr, col, row);
}*/
/*
//�迭 �Ű����� ����ϱ�
#include <stdio.h>
void setElements(float arr[], int count)
{
	int i;
	for (i = 0; i < count; i++)
		arr[i] = 1.2f;
}
int main(void)
{
	int i;
	float numArr[5];
	setElements(numArr, sizeof(numArr) / sizeof(float));

	for (i = 0; i < sizeof(numArr) / sizeof(float); i++)
		printf("%f ", numArr[i]);
	printf("\n");
	return 0;
}*/
/*
//�迭 �Ű����� ����ؼ� �������� ���
void printReverse(int arr[], int count)
{
	int i;
	for (i = count; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
}
#include <stdio.h>
int main(void)
{
	int numArr[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &numArr[i]);
	printReverse(numArr, sizeof(numArr) / sizeof(int));

	return 0;
}*/