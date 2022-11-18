/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point left_top;
	Point right_bottom;
}Rectangle;

void input(Rectangle* rec)
{
	printf("좌 상단 좌표 입력 : ");
	scanf("%d %d", &(rec->left_top.xpos), &(rec->left_top.ypos));

	printf("우 하단 좌표 입력 : ");
	scanf("%d %d", &(rec->right_bottom.xpos), &(rec->right_bottom.ypos));
}

int Area(Rectangle *rec)
{
	int area = ((rec->right_bottom.xpos) - (rec->left_top.xpos)) * ((rec->right_bottom.ypos) - (rec->left_top.ypos));
	return area;
}


void Pos(Rectangle* rec)
{
	printf("좌 상단 : [%d, %d]\n우 하단 : [%d, %d]", rec->left_top.xpos, rec->left_top.ypos, rec->right_bottom.xpos, rec->right_bottom.ypos);
}

int main(void)
{
	Rectangle rec;
	input(&rec);
	printf("사각형의 넓이 : %d\n", Area(&rec));
	Pos(&rec);

	return 0;
}*/