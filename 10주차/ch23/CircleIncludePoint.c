//중첩된 구조체의 정의와 변수의 선언
/*배열이나 포인터 변수가 구조체의 멤버로 선언될 수 있듯이, 구조체 변수도 구조체의 멤버로 선언될 수 있다.
그리고 구조체 안에 구조체 변수가 멤버로 존재하는 경우를 가리켜 '구조체의 중첩'이라고 한다.*/
/*
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;
typedef struct circle
{
	Point cen; //5행에서 정의된 구조체의 변수를 멤버로 선언함
	double rad;
}Circle;

void ShowCircle(Circle* cptr)
{
	printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius : %g\n", cptr->rad);
}

int main(void)
{
	Circle c1 = { {1, 2}, 3.5 }; //구조체 변수가 멤버로 존재할 경우, 중괄호를 이용해 구조체 멤버의 초기화를 구분지음
	Circle c2 = { 2, 4, 3.9 };
	ShowCircle(&c1);
	ShowCircle(&c2);
	
	return 0;
}*/