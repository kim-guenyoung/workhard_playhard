/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
struct point
{
	int xpos;
	int ypos;
};
int main(void)
{
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	//두 점과 점 사이 거리 공식
	distance = sqrt((double)(pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos));

	printf("두 점과 점 사이의 거리는 %g입니다.", distance);
	return 0;
}*/