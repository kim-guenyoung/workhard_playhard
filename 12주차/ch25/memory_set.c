/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long* numptr = malloc(sizeof(long long)); //long long 크기 8바이트만큼 동적 메모리 할당

	memset(numptr, 0x27, 8); //numptr이 가리키는 메모리를 8바이트만큼 0x27로 설정
	printf("0x%llx\n", *numptr);

	free(numptr);
	return 0;
}*/