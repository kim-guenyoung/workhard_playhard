/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1, b = 2;
	int c;
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c);
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c);
	return 0;
}
int Calculator(int a)
{
	//static int result = 0; //정적 변수
	register int result = 0; //register : result를 보관하라는 의미. 0으로 게속 초기화돼서 1+ 0이 계산되어 c값은 1로 출력

	result += a;

	return result;
}*/
/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;
	int* ptr;
	ptr = &num;

	printf("%d %d %d\n", num, ptr, sizeof(ptr)); //10, 주소 값, 
	// 64비트의 컴퓨터의 경우 8이 저장됨 / 32비트 : 32 / 8, 16비트 : 16 / 8
	//%p의 경우 헥사값 형태로 표현
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;

	int* ptr;
	ptr = &num;
	
	double* dptr;
	dptr = &dnum;

	char* chptr;
	chptr = &ch;

	printf("%d %lf %c")
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;
	*pnum += 30;

	pnum = &num2;
	*pnum -= 30;
	
	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;
}*/
//메모리에 직접 접근할 수 있다는 장점 : 포인터의 핵심
//포인터의 연산을 보면 왜 포인터를 사용하는 지 알 수 있음.
/*

#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);

	return 0;
}*/