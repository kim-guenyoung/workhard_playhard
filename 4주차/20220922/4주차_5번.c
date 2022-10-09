#include <stdio.h>
int main(void)
{
	int arr[10] = { 0, };
	int i, j;
	int temp;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		for (j = 0; j < sizeof(arr) / sizeof(int) - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		//오름차순
		//printf("%d ", arr[i]);
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		{
		for (j = 0; j < sizeof(arr) / sizeof(int) - 1; j++)
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	return 0;
}