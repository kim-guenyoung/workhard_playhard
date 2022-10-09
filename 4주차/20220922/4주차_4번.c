/*
#include <stdio.h>
void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;
}
//const 써서 함수내 ptr 변수 값 변경을 불허함
//근데 ptr에 저장된 값을 const로 선언되지 않은 포인터 변수에 대입하고 있으므로 ptr이 가리키는 변수에 값 변경 가능하게

*/

/*
#include <stdio.h>

void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;
}

int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}*/
