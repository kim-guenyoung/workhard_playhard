/*
//(1) call-by-value 기반의 SquareByValue  함수
#include <stdio.h>
int SquareByValue(int n)
{
	return n * n;
}
int main(void)
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	printf("제곱 : %d", SquareByValue(num));
	
	return 0;
}*/
/*
//(2) call - by - reference 기반의 SquareByReference 함수
#include <stdio.h>
void SquareByReference(int *num)
{
	*num = *num * *num;
}

int main(void)
{
	int num;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	SquareByReference(&num);
	printf("제곱 : %d", num);
}*/

/*
//문제 2
#include <stdio.h>
void Swap3(int* num1, int* num2, int* num3)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}
int main(void)
{
	int num1, num2, num3;
	printf("3개의 숫자 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	printf("바꾼 후 : %d %d %d", num1, num2, num3);
}*/
/*
//문제 3
#include <stdio.h>
void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	//배열 요소 전부 출력해야 하는데 const선언이 없으면 마음대로
	//배열 요소륿 변경할 수도 있음
}*/
/*
#include <stdio.h>
void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;
}
//const 써서 함수내 ptr 변수 값 변경을 불허함
//근데 ptr에 저장된 값을 const로 선언되지 않은 포인터 변수에 대입하고 있으므로 ptr이 가리키는 변수에 값 변경 가능하게
*/

/*
#include <stdio.h>
int main(void)
{
	int arr[10] = { 0, };
	int i, j;
	int arr_size = sizeof(arr) / sizeof(int);
	int temp;
	printf("10개의 정수 입력");
	for(i =0; i<arr_size; i++)
		scanf_s("%d", &arr[i]);

	for (i = 0; i < arr_size; i++)
		for (j = 0; j < arr_size - 1; j++)
		{

			//정렬 먼저
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	for(i = 0; i< arr_size; i++)
		for(j = 5; j<arr_size-1; j++)
			if(arr[i]% 2 == 1

	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[50];
	char voca2[50];
	char i;
	int len = 0;

	printf("입력 : ");
	scanf("%s", voca);

	for (i = 0; voca[i] != '\0'; i++)
		len++;

	for (i = 1; i <= len; i++)
	{
		voca2[len - i] = voca[i - 1];
	}
	for (i = 0; i < len; i++)
	{
		if (voca2[i] == voca[i])
		{
			printf("회문입니다.");
			break;
		}
		else
		{
			printf("회문이 아닙니다.");
			break;
		}
	}
	return 0;
}*/