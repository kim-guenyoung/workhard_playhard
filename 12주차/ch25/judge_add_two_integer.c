
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int* numptr1 = malloc(sizeof(int));
	int* numptr2 = malloc(sizeof(int));
	scanf("%d %d", &num1, &num2);

	*numptr1 = num1;
	*numptr2 = num2;

	printf("%d\n", *numptr1 + *numptr2);

	free(numptr1);
	free(numptr2);
}