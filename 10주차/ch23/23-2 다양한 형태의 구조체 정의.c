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
	printf("�� ��� ��ǥ �Է� : ");
	scanf("%d %d", &(rec->left_top.xpos), &(rec->left_top.ypos));

	printf("�� �ϴ� ��ǥ �Է� : ");
	scanf("%d %d", &(rec->right_bottom.xpos), &(rec->right_bottom.ypos));
}

int Area(Rectangle *rec)
{
	int area = ((rec->right_bottom.xpos) - (rec->left_top.xpos)) * ((rec->right_bottom.ypos) - (rec->left_top.ypos));
	return area;
}


void Pos(Rectangle* rec)
{
	printf("�� ��� : [%d, %d]\n�� �ϴ� : [%d, %d]", rec->left_top.xpos, rec->left_top.ypos, rec->right_bottom.xpos, rec->right_bottom.ypos);
}

int main(void)
{
	Rectangle rec;
	input(&rec);
	printf("�簢���� ���� : %d\n", Area(&rec));
	Pos(&rec);

	return 0;
}*/