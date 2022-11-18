/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
	int* numptr1 = malloc(sizeof(int));
	long long* numptr2 = malloc(sizeof(long long));

	*numptr1 = INT_MAX;
	*numptr2 = LLONG_MAX;

	printf("%d %lld\n", *numptr1, *numptr2);

	free(numptr1);
	free(numptr2);

	return 0;
}*/