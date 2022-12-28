/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void ShowCircleInfo(Circle* cptr)
{
	printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius : %g\n", cptr->rad);
}

int main(void)
{
	Circle c1 = { {1, 2}, 3.5 };
	Circle c2 = { {2, 4}, 3.9 };
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	return 0;
}*/
/*
#include <stdio.h>
typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
}UBox;
int main(void)
{
	UBox ubx;
	ubx.mem1 = 20;
	//printf("%d\n", ubx.mem2);

	ubx.mem3 = 20;
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

	return 0;
}*/