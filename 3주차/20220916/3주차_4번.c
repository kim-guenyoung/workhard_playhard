//4. 1���� 100������ ������ ����ִ� �迭�� �ֽ��ϴ�.

//�� �迭�� �Ű������� �Ѱ� �޾� 2�� ��� ��° ��ġ�� �ִ� ���� ����ϴ� �Լ��� ����� ȣ���ϼ���.
//4. 1���� 100������ ������ ����ִ� �迭�� �ֽ��ϴ�.

#include <stdio.h>

void printArray(int arr[]) // �迭�� �����͸� ����
{
	int i;
	for (i = 0; i < 100; i++)
	{
		arr[0] = 2;

		if (arr[i] < 100)
		{
			arr[i + 1] = arr[i] * 2;
			printf("%d ", arr[i]);
		}
		else
			break;
	}

	printf("\n");
}
int main(void)
{
	int i;
	int arr[100] = { 0, };
	printf("1���� 100���� ����� �迭 : ");
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printf("2�� �������� ��� �迭 : ");
	printArray(arr);
	return 0;
}