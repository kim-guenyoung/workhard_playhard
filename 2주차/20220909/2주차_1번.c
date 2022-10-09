/*
//1. 다음 코드의 실행 결과를 예측해 보고, 코드를 직접 실행해본 결과와 일치하는지 확인하세요.
#include <stdio.h>
int main(void)
{
	int arr[3];
	int* pa = arr;

	printf("%d %d", sizeof(arr), sizeof(pa));
	//12, 8
	//sizeof(배열) -> 3 * 4(타입) 따라서 12 출력
	//sizeof(포인터) -> 아스트리크 문자 붙여서 포인터라고 지시하면 비트 수에 비례(현재 64비트 사용 중이라 8 출력)
}*/