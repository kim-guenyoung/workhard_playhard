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
	intarr_t* arr = malloc(sizeof(intarr_t));

	if (arr->data == NULL)
	{
		puts("����");
		return NULL;
	}
	else
	{
		arr->len = len;
		puts("����");
		return len;
	}
	
}
int main(void)
{
	int len = 10;
	int fct = intarr_create(len);
	printf("%d\n", fct);
	return 0;
}*/