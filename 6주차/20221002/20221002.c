/*#include <stdio.h>
int main(void)
{
	int arr2d[3][3];
	printf("%d\n", arr2d);
	printf("%d\n", arr2d[0]);
	printf("%d\n", &arr2d[0][0]);

	printf("%d\n", arr2d[1]);
	printf("%d\n", &arr2d[1][0]);
	
	
	printf("%d\n", arr2d[2]);
	printf("%d\n", &arr2d[2][0]);


	printf("sizeof(arr2d) : %d\n", sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d\n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]) : %d\n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d\n", sizeof(arr2d[2]));

	//�翬�� ����. 2���� �迭�� 1���� �迭�� ���� ������ŭ �ִ� �Ŷ�� �����ϸ� ����

	return 0;
}*/

//�迭 ��� �������� ���� : �迭 �̸��� 1�� ���� �����?
/*
#include <stdio.h>
int main(void)
{
	int arr1[3][2];
	int arr2[2][3];
	
	printf("arr1 : %p\n", arr1);
	printf("arr1 + 1 : %p\n", arr1 + 1);
	printf("arr1 + 2 : %p\n", arr1 + 2);
	//int X ���� ������ŭ


	printf("arr2 : %p\n", arr2);
	printf("arr2 + 1 : %p\n", arr2 + 1);
	//int X ���� ������ŭ
}*/
/*
//2���� �迭�� ������ ���� �������� ����

#include <stdio.h>
int main(void)
{
	int arr1[2][2] = { {1, 2}, {3, 4} };
	int arr2[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int arr3[4][2] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };

	int(*ptr)[2];
	int i;

	ptr = arr1;
	printf("arr1[2][2]\n");
	for (i = 0; i < 2; i++)
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	printf("\n");

	ptr = arr2;
	printf("arr2[3][2]\n");
	for (i = 0; i < 3; i++)
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	printf("\n");

	ptr = arr3;
	for (i = 0; i < 4; i++)
		printf("%d %d\n", ptr[i][0], ptr[i][1]);
	printf("\n");
}*/
/*
//�迭 �����Ϳ� ������ �迭
#include <stdio.h>
int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4;
	int arr2d[2][2] = { 1, 2, 3, 4 };
	int i, j;

	int* ptrArr[4] = { &num1, &num2, &num3, &num4 }; //������ �迭
	int(*arrPtr)[2] = arr2d; //�迭 ������

	printf("%d %d %d %d\n", *ptrArr[0], *ptrArr[1], *ptrArr[2], *ptrArr[3]);

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrPtr[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
void ShowArr2DStyle(int (*arr)[4], int row) //�迭 ��� ��ü ���
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int Sum2DArr(int arr[][4], int row)
{
	int i, j, sum = 0;
	for (i = 0; i < row; i++)
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	return sum;
}
int main(void)
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1�� �� : %d\n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2�� �� : %d\n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
}*/
/*
//2���� �迭������ arr[i]�� *(arr + i)�� ����.
#include <stdio.h>
int main(void)
{
	int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };

	printf("a[0] : %p\n", a[0]);
	printf("*(a+0) : %p\n", *(a + 0));

	printf("a[1] : %p\n", a[1]);
	printf("*(a + 1): %p\n", *(a + 1));

	printf("a[2] : %p\n", a[2]);
	printf("*(a+2): %p\n", *(a + 2));

	printf("%d, %d\n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d\n", a[2][1], (*a[2] + 1));
	printf("%d, %d\n", a[2][1], *(*(a + 2) + 1));
}*/
/*
#include <stdio.h>
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void ShowString(char* str)
{
	printf("%s\n", str);
}

int main(void)
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr1)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;
	
	//�Լ� ������ ������ ���� ȣ��
	fptr1(num1, num2);
	fptr2(str);

	return 0;
}*/

/*
//�Լ� ������ ������ �Ű������� ������ ���� �ִ�.
#include <stdio.h>
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

int main(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;
	printf("������� 1\n");
	first = WhoIsFirst(age1, age2, OlderFirst);

	printf("%d���� %d�� �� %d���� ���� ����!\n", age1, age2, first);

	printf("������� 2\n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d���� %d�� �� %d���� ���� ����!\n", age1, age2, first);

	return 0;
}*/
/*
#include <stdio.h>
void SoSimpleFunc(void)
{
	printf("I'm so simple");
}
int main(void)
{
	int num = 20;
	void* ptr; //�ּ� ������ �ǹ̸� �ΰڴ�
	
	ptr = &num;
	printf("%p\n", ptr);

	ptr = SoSimpleFunc;
	printf("%p\n", ptr);
	return 0;
}*/
/*
#include <stdio.h>
int main(int argc, char* argv[])
{
	int i = 0;
	printf("���޵� ���ڿ��� �� : %d\n", argc);
	for (i = 0; i < argc; i++)
		printf("%d��° ���ڿ� : %s\n", i + 1, argv[i]);
	return 0;
}*/
/*
#include <stdio.h>
void ShowAllString(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}

int main(void)
{
	char* str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};

	ShowAllString(3, str);
	return 0;
}*/