
//7. 다음 코드의 실행 결과를 예측해 보고, 코드를 직접 실행해본 결과와 일치하는지 확인하세요.
#include <stdio.h>
int main(void)
{
	int a = 100;
	int b = 200;
	int* p = &a;

	b = a;
	double* pd;
	pd = p;

	printf("%lf", *pd); //100인 줄 알았는데 포인터 형이 일치하지 않아서 나온 듯
}