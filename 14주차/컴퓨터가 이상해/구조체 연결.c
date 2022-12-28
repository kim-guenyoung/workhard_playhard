/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
	int* data;
	unsigned int len;
}intarr_t;

intarr_t* intarr_create(unsigned int len)
{
	intarr_t* arr = (intarr_t*)malloc(sizeof(intarr_t));
	arr->len = len;

	if (arr == NULL)
		return NULL;
	
	else
		return arr;
}
int main(void)
{
	unsigned int len;
	printf("배열의 길이 : ");
	scanf("%d", &len);
	intarr_t* arr = intarr_create(len);
	printf("%d", arr->len);
	free(arr);
}
*/