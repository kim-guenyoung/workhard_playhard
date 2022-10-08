/*
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

	void(*fptr)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;

	//함수 포인터 변수에 의한 호출
	fptr(num1, num2);
	fptr2(str);

	return 0;
}
*/
/*
//매개변수의 선언으로 함수 포인터 변수가 올 수 있음을 보이고
//전달되는 인자에 따라서 달리 동작하는 함수의 정의도 가능함을 보여준다.
#include <stdio.h>
int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}
int OlderFirst(int age1, int age2)
{
	return (age1 > age2 ? age1 : age2);
}
int YoungerFirst(int age1, int age2)
{
	return (age1 < age2 ? age1 : age2);
}
int main(void)
{
	int age1 = 30;
	int age2 = 20;
	int first;
	printf("입장순서 : \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장", age1, age2, first);
}*/