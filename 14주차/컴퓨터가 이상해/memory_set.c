/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //memset

int main(void)
{
	long long* numPtr = malloc(sizeof(long long)); //long long 크기인 8바이트만큼 동적 메모리 할당

	memset(numPtr, 0x27, 8); //numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

	printf("0x%llx\n", *numPtr); //0x2727272727272727 : 27이 8개 들어있음

	free(numPtr);
	return 0;
}*/