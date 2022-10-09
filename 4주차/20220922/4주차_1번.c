//변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main함수를 작성해 보자.
/*
//(1) call - by - value 기반의 SquareByValue  함수
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