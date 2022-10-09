//4. 1부터 100까지의 정수가 담겨있는 배열이 있습니다.

//이 배열을 매개변수로 넘겨 받아 2의 배수 번째 위치에 있는 값만 출력하는 함수를 만들어 호출하세요.
//4. 1부터 100까지의 정수가 담겨있는 배열이 있습니다.

#include <stdio.h>

void printArray(int arr[]) // 배열의 포인터를 받음
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
	printf("1부터 100까지 담겨진 배열 : ");
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printf("2의 제곱수만 담긴 배열 : ");
	printArray(arr);
	return 0;
}