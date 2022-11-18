/*
//메모리에 값 저장하기
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int* numptr; //int형 포인터 선언
	numptr = malloc(sizeof(int)); //int의 크기 4바이트만큼 동적 메모리 할당
	*numptr = 10; //포인터를 역참조한 뒤 값 할당

	printf("%d\n", *numptr); //포인터를 역참조하여 메모리에 저장된 값 출력

	free(numptr); //동적 메모리 해제
	return 0;
}*/