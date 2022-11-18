/*#include <stdio.h>
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
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen; //사라지기 전에 복제를 해놓겠다 이 뜻
}

int main(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}*/