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
		printf("���� �Է� : ");
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
	for (i = 0; i < idx; i++) //len������ �����ִ� ������ ���࿡ 6���� �Է��ϸ� 5(���� ����) + 3(Ȯ������ ����)�� �ǹǷ� 2���� ���� �����Ⱚ���� ó���ȴ�.
		printf("%d ", arr[i]);

	free(arr);
	return 0;
}*/