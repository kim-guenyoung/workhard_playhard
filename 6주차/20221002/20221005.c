/*
//포인터 배열이랑 배열 포인터
#include <stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int i, j;

	int* whoA[4] = { &num1, &num2, &num3, &num4 };
	int(*whoB)[4] = arr2d;

	printf("%d %d %d %d\n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", whoB[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
//Function Pointer
#include <stdio.h>
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void ShowString(char* str)
{
	printf("%s\n", str);
}
int main(void)
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;
	void(*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char*) = ShowString;

	//함수 포인터에 의한 호출
	fptr1(num1, num2);
	fptr2(str);

	return 0;
}*/