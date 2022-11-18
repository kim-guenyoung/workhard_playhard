/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int) * 7);
	int i;
	
	*ptr1 = 20;
	for (i = 0; i < 7; i++)
		ptr2[i] = i + 1;
	printf("%d\n", *ptr1);
	for (i = 0; i < 7; i++)
		printf("%d ", ptr2[i]);

	free(ptr1);
	free(ptr2);

	return 0;
}*/
//malloc 함수는 메모리 공간의 할당에 실패할 경우 NULL을 반환함.
/*
int* ptr = (int*)malloc(sizeof(int));
if (ptr == NULL)
{
	//메모리 할당 실패에 따른 오류 처리
}*/