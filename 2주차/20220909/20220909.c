/*#include <stdio.h>
int main(void)
{
	char str1[] = "HELLO";
	char* str2 = "WORLD"; '주소'만 저장

	printf("%s %s\n", str1, str2);

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2);

	str1[1] = 'A';
	//str2의 경우는 포인터로 접근했기 때문에 변경할 수 있지만, 
	//str1의 경우는 배열로 접근해서 바꾸어야함.
	//str2는 주솟값을 담고 있어서 line12처럼 바꾸게 되면 오류
	printf("%s %s\n", str1, str2);

	
	//포인터 배열 : 각각의 항목에 접근하기 용이하면서도 공간 낭비XX
	int n1 = 100, n2 = 200, n3 = 300;
	int* arr1[3] = { &n1, &n2, &n3 };

	printf("%d %d %d\n", *arr1[0], *arr1[1], *arr1[2]);

	//ragged array : 가변 배열
	char* arr2[4] = { "SPRING,", "SUMMER", "FALL", "WINTER" };
	//char *arr2[]도 가능
	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);
	printf("%s\n", arr2[3]);
	
	
	//배열 포인터
	//int* pa[4]; //포인터를 가진 배열
	int(*pa)[4]; //배열을 가리키는 포인터

	int arr3[4] = { 1, 2, 3, 4 };
	pa = &arr3;
	printf("%d %d %d %d\n", (*pa)[0], (*pa)[1], (*pa)[2], (*pa)[3]);
	
	char arr4[4][8] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	char(*ps)[8]; //8개를 무조건 다 쓰겠다 -> 함수의 인수로 전달받을 때 유용
	ps = arr4;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *ps++);
		//ps++ : ps먼저 실행하고 증가(포인터 연산이니까 데이터의 크기만큼 주소 이동시킴)
	}
}*/