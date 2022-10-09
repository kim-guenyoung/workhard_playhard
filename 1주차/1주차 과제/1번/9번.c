/*
//9. 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어서 호출하세요.
//(1) 두 개의 실수를 입력 받습니다.

//(2) 두 실수의 합계와 평균을 반환하는 함수를 작성하고 호출합니다. (포인터 사용)

//(3) 결과인 합과  평균을 출력합니다.
#include <stdio.h>

float calculator(float n1, float n2);

int main(void)
{
	float num1, num2;
	printf("두 개의 실수 입력 : ");
	scanf_s("%f %f", &num1, &num2);

	printf("합 : %f", calculator(num1, num2));
	printf("평균 : %f", (calculator(num1, num2)) / 2);
}
float calculator(float n1, float n2)
{
	float sum;
	sum = n1 + n2;
	return sum;
}*/
/*
#include <stdio.h>


int main(void)
{
	float num1, num2;
	printf("두 개의 실수 입력 : ");
	scanf_s("%f %f", &num1, &num2);

	float* pnum1 = &num1;
	float* pnum2 = &num2;

	printf("합 : %f\n", *pnum1 + *pnum2);
	printf("평균 : %f", (*pnum1 + *pnum2) / 2);
	return 0;
}*/
/*
#include <stdio.h>

float calculator(float* ptr1, float* ptr2);

float main(void)
{
	float num1, num2;

	printf("두 개의 실수 입력 : ");
	scanf_s("%f %f", &num1, &num2);

	float c = calculator(&num1, &num2);

	printf("두 실수의 합 : %f\n", c);
	printf("%f\n", c / 2);

	return 0;
}
float calculator(float* ptr1, float* ptr2) //call-by-reference 계산해서 다시 저장
{
	float num1 = *ptr1;
	float num2 = *ptr2;
	return *ptr1 + *ptr2;
}*/