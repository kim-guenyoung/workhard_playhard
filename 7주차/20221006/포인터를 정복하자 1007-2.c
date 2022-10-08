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
//많이 해봐서 알겠지만 당연히 바뀌지 않는다.
//매개변수는 값을 전달하는 역할만 할 뿐, 함수 밖 변수와는 무관하니까!
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
	SwapNumber(&num1, &num2); //이게 포인트 (num1과 num2의 메모리 주소를 넣어주는 것이다.
	printf("%d %d\n", num1, num2);

	return 0;
}*/
/*
#include <stdio.h>
void helloString(char* s1)//반환값 ㄴㄴ, char 포인터 매개변수 한 개 지정
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
	//매개변수로 문자 배열을 받는다는 것을 확실히 해주기 위해서는 다음과 같이 매개변수 뒤에 [배열의 크기]를 붙여주어야 한다.

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
//함수에서 배열 매개변수 사용하기
#include <stdio.h>
void printArray(int arr[], int count) //배열의 포인터와 요소의 개수를 받는다.
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
	printf("%d\n", numArr[2]); //출력하면 setElement에서 변경한 값이 출력됨.
	return 0;
}*/
/*
//papameter_pointer.c
#include <stdio.h>
void printArray(int* arr, int count) //매개변수를 포인터로 지정하여 배열을 받는다.
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
void SwapElement(int arr[], int first, int second) //배열의 포인터와 인덱스를 받는다.
{
	int temp;
	//배열의 메모리 주소를 전달
	temp = arr[first];
	arr[first] = arr[second];
	arr[second] = temp;
}
int main(void)
{
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	swapElement(numArr, 0, 1); //배열의 값을 서로 바꿀 인덱스를 넣음
	printf("%d %d\n", numArr[0], numArr[1]);

	return 0;
}*/
/*
//2차원 배열 매개변수 사용하기
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
//배열 매개변수 사용하기
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
//배열 매개변수 사용해서 역순으로 출력
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