/*
/8. 두 변수의 값을 바꾸는 함수를 작성하여 호출하시오.
#include <stdio.h>
void swap(int* px, int* py) //주소 값을 받아 메모리 값에 직접 접근
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;

	printf("전 : num1 : %d num2 : %d\n", num1, num2); //px -> num1, px -> num2 직접 하나씩 접근해서 값을 변경
	swap(&num1, &num2);
	printf("후 : num1 : %d num2 : %d", num1, num2);
	return 0;
}*/