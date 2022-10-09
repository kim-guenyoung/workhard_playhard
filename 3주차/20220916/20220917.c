/*
//1번 방법 1(포인터 사용 X)
#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int n1, n2;
	printf("n1 n2를 입력하세요 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(n1, n2);

	return 0;
}

void swap(int x, int y);
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("after : %d %d", x, y);
}
*/
/*
//1번 방법2 (포인터 사용)
#include <stdio.h>
void swap(int* px, int* py);
int main(void)
{
	int n1, n2;
	printf("n1, n2를 입력하세요 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(&n1, &n2);
	//주소 값을 넘겨받을 때는 주소 값이 바뀌는 것이 아니라 거기에 저장되어있는 값이 바뀌는 것
	//cal-by-value와 달리 &를 붙여야 함
	printf("after : %d %d", n1, n2);

	return 0;
}
//call-by-reference
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}*/
/*
//2. 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어서 호출하세요.
#include <stdio.h>

void sumaver(double* num1, double* num2);

int main(void)
{
	double n1, n2;
	printf("두 개의 실수를 입력하세요 : ");
	scanf_s("%lf %lf", &n1, &n2);
	sumaver(&n1, &n2);
	
	return 0;
}

void sumaver(double* num1, double* num2)
{
	printf("합계 : %lf",(*num1 + *num2));
	printf("평균 : %lf", (*num1 + *num2) / 2);
}
*/
/*
//3번
#include <stdio.h>
double sumaver(double* num1, double* num2);

int main(void)
{
	double n1, n2;
	printf("두 개의 실수를 입력하세요 : ");
	scanf_s("%lf %lf", &n1, &n2);
	printf("합계 : %lf", sumaver(&n1, &n2));
	printf("평균 : %lf", sumaver(&n1, &n2) / 2);
	
	return 0;
}

double sumaver(double* num1, double* num2)
{
	return (*num1 + *num2);
}
*/

/*
//4. 1부터 100까지의 정수가 담겨있는 배열이 있습니다.

//이 배열을 매개변수로 넘겨 받아 2의 배수 번째 위치에 있는 값만 출력하는 함수를 만들어 호출하세요.
//4. 1부터 100까지의 정수가 담겨있는 배열이 있습니다.

#include <stdio.h>

void printArray(int arr[]) // 배열의 포인터를 받음
{
	int i;
	for (i = 0; i < 100; i++)
	{
		arr[0] = 2;

		if (arr[i] < 100)
		{
			arr[i + 1] = arr[i] * 2;
			printf("%d ", arr[i]);
		}
		else
			break;
	}

	printf("\n");
}
int main(void)
{
	int i;
	int arr[100] = { 0, };
	printf("1부터 100까지 담겨진 배열 : ");
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printf("2의 제곱수만 담긴 배열 : ");
	printArray(arr);
	return 0;
}*/