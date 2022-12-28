/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}
Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos : ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}
int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
	Point* ptr;
}Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}
Point GetCurrentPosition(void)
{
	Point pos1;
	printf("Input current pos : ");
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	pos1.ptr = &pos1;
	return pos1;
}
int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}*/