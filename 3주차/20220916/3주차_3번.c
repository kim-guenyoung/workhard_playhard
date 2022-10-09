/*
//3. 2번 문제에서 결과인 합과 평균도 반환받아 2번 함수를 호출한 함수(여기서는 main함수)에서 결과를 출력하세요.
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