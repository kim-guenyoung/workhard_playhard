/*
//1. 키를 cm단위로  입력 받아 m단위로 환산해서 출력해주는 프로그램을 작성하세요.

#include <stdio.h>

float cm_to_m(float height_m); //main 함수보다 먼저 출력되게 하려고 함수 호출

int main(void)
{
	float height;
	float result;
	printf("키를 입력하세요(cm) : ");
	scanf_s("%f", &height);

	result = cm_to_m(height);

	printf("%0.2f", result); //소수점 둘째 자리까지만 출력
	return 0;
}
float cm_to_m(float height_m)
{
	return height_m * 0.01;
}*/