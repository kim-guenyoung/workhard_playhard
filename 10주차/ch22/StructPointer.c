/*
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

	(*pptr).xpos += 4; //1 + 4
	(*pptr).ypos += 5; // 2 + 5
	printf("[%d, %d]\n", pptr->xpos, pptr->ypos);
	//pptr->xpos 이거 pptr은 포인터인데 xpos라는 멤버를 내가 참조하겠다.

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d]\n", (*pptr).xpos, (*pptr).ypos);

	return 0;
}*/