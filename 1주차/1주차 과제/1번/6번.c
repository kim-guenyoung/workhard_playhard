/*
//6. 다음 코드의 실행 결과를 예측해 보고, 코드를 직접 실행해본 결과와 일치하는지 확인하세요.
#include <stdio.h>
int main(void)
{
	int a = 100;
	int* p = &a;

	*p = 200;

	printf("%d\n", a); //200
	//*p를 a에 접근시켰기 때문에 200으로 바뀜
	printf("%d", (*p) + a); //400
}
*/