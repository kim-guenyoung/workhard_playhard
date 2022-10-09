/*//함수 인자의 전달
#include <stdio.h>
void AddFunc(int a, int b)
//int a, int b는 함수가 끝나는 동시에 소멸
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
//예제 2.
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
{//주소값이 음수가 나올 수 있나
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
	printf("\n배열 요소의 합은 %d\n", sum);
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
//함수가 종료되는 순간에 바로 소멸, 값만 전달
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
	//주소 값을 넘겨받을 때는 주소 값이 바뀌는 것이 아니라 거기에 저장되어있는 값이 바뀌는 것
	//그래서 함수를 탈출한 뒤에도 계속해서 바뀐거임
	//따라서 swap할 때는 call by reference쓰는 것이 맞음
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

	//SwapFunc()함수 안에서 값을 서로 바꿀 경우 > main함수에서 값이 항상 바뀌는 것은 아님
	//Call-by-Value : 값에 의한 전달
	printf("예제 1\n");
	printf("[before] : num1 = %d, num2 = %d\n", num1, num2);
	SwapValue(num1, num2);
	printf("[after] : num1 = %d, num2 = %d\n", num1, num2);

	//주소값을 함수의 인자로 전달하면 값을 바꿀 수 있음
	//Call-by-Reference : 주소 값에 의한 전달
	printf("예제 2\n");
	printf("[before] : num1 = %d, num2 = %d\n", num1, num2);
	SwapRef(&num1, &num2);
	printf("[after] : num1 = %d num2 = %d\n", num1, num2);


	//scanf() 함수 호출 시 & 연산자를 붙이는 이유
	printf("예제 3");
	printf("num1, num2를 차례로 입력하세요.\n");
	printf("[before] num1 = %d, num2 = %d\n", num1, num2);
	
	scanf("%d %d", &num1, &num2);
	printf("[after] num1 = %d, num2 = %d\n", num1, num2);

	
	//문자열 입력
	printf("예제 4\n");

	char str[10];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	printf("입력하신 문자열은 [%s]입니다.\n", str);

}*/
/*
//문제 1. 변수 num에 저장된 값의 제곱을 계산하는 함수
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
	printf("num²: %d\n", squareValue(num));
	squareRef(&num);
	printf("num²: %d\n", num);
}*/
/*
//문제 2 : 세 변수에 저장된 값을 서로 바꾸는 함수
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

//5. main함수에서 const선언(상수)하면 상수니까 값을 바꿀 수 없음
/*#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("예제 5\n");
	const int cnum = 10;
	//cnum = 20; 
	printf("cnum = %d\n", cnum);
}*/
//6. const로 선언되면 포인터 변수가 참조하는 대상을 변경할 수 없다.


//포인터 대상의 const 선언
//예전에는 변수를 상수화하는 목적의 const 선언이었다면 이런 const선언은 포인터 변수를 대상으로도 가능하다
/*
#include <stdio.h>
int main(void)
{
	
	//기존에 내가 하던 방식
	double PI = 3.1415;
	double rad;
	PI = 3.07; //실수로 잘못 삽입된 문장 but 컴파일 시 발견되지 않음.
	scanf_s("%lf", &rad);
	printf("circle area %f\n", rad * rad * PI);
	return 0;

	const double PI = 3.1415;
	double rad;
	//PI = 3.07; -> 이거는 컴파일 시 오류 발견됨
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
	*rptr = 20; //rptr을 이용해서 값을 바꾸려고 하니까 이건 잘못된 문장임
}
int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}*/

