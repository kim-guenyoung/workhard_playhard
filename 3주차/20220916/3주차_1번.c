//1. 두 변수의 값을 바꾸는 함수를 작성하여 호출하시오.
//(방법1) 포인터를 사용하지 않고 함수를 작성하기
/*#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int n1, n2;
	printf("n1 n2를 입력하세요 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(n1, n2);

	return 0;
}

void swap(int x, int y);
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("after : %d %d", x, y);
}

*/
/*
//(방법2) 포인터를 매개변수로 사용하여 함수를 작성하기
#include <stdio.h>
void swap(int* px, int* py);
int main(void)
{
	int n1, n2;
	printf("n1, n2를 입력하세요 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(&n1, &n2);
	//주소 값을 넘겨받을 때는 주소 값이 바뀌는 것이 아니라 거기에 저장되어있는 값이 바뀌는 것
	//cal-by-value와 달리 &를 붙여야 함
	printf("after : %d %d", n1, n2);

	return 0;
}
//call-by-reference
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}*/