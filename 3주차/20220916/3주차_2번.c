/*//2. 두 개의 실수를 입력 받아 합계와 평균을 구하는 함수 1개를 만들어서 호출하세요.
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
	printf("합계 : %lf", (*num1 + *num2));
	printf("평균 : %lf", (*num1 + *num2) / 2);
}
*/