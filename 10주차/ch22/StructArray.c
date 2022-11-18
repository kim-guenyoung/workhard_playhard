/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
int main(void)
{
	struct point arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력 : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos); //구조체 배열을 이루는 구조체 변수의 멤버를 대상으로 scanf함수 호출
	}
	for (i = 0; i < 3; i++)
		printf("[%d, %d]\n", arr[i].xpos, arr[i].ypos);

	return 0;

	
}*/

