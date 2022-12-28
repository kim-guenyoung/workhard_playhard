/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int idx = 0;
	int len = 5;
	int i;

	int* arr = (int*)malloc(sizeof(int) * len);
	for (i = 0; i < len; i++)
	{
		printf("정수 입력 : ");
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
			break;

		if (len = i + 1)
		{
			len += 3;
			arr = (int*)realloc(arr, sizeof(int) * len);
		}
		idx++;
	}
	for (i = 0; i < idx; i++) //len까지로 안해주는 이유가 만약에 6개를 입력하면 5(원래 길이) + 3(확장해준 길이)가 되므로 2개의 값이 쓰레기값으로 처리된다.
		printf("%d ", arr[i]);

	free(arr);
	return 0;
}*/