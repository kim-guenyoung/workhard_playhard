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
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos); //5, 7

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos); //101 202
	return 0;
}*/