/*
#include <stdio.h>

int main(void)
{
	int arr[3][9];
	int i, j;
	int dan;
	int n;
	printf("단 : ");
	scanf_s("%d", &n);
	for (i = n; i < n + 3; i++)
		for (j = 0; j < 9; j++)
			arr[i][j] = n * (j + 1);
	for (i = n; i < n + 3; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arrA[2][4] = { {1, 2, 3, 4} , {5, 6, 7, 8} };
	int arrB[4][2];
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];

	printf("arrA\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arrA[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("arrB\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
void MaxAndMin(int * arr, int** maxp, int** minp);
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minPtr);
}

void MaxAndMin(int* arr, int** maxp, int** minp)
{
	int* max, * min;
	int i;
	max = min = arr;
	for (i = 0; i < 5; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*maxp = max;
	*minp = min;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5][5];
	int i, j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[i][j]);
			arr[i][5] += arr[i][j];
			arr[5][j] += arr[i][j];
		}
	}
	for (i = 0; i <=4; i++)
	{
		for (j = 0; j <= 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}*/