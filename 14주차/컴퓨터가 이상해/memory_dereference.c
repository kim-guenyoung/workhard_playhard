/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* numPtr;
	numPtr = malloc(sizeof(int));
	*numPtr = 10; //포인터를 역참조한 뒤 값 할당
	printf("%d\n", *numPtr); //포인터를 역참조하여 메모리에 저장된 값 출력
	free(numPtr);

	return 0;
}*/