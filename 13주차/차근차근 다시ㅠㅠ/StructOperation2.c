/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

int main(void)
{
	Point pos1 = { 1, 2 };
	Point pos2;
	pos2 = pos1; //멤버 간 복사 진행됨.

	printf("크기 : %d\n", sizeof(pos1));
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("크기 : %d\n", sizeof(pos2));
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}*/
// 구조체 변수간 대입연산의 결과로 멤버 대 메멉의 복사가 이루어짐.