/*
//배열이 구조체의 멤버로 선언될 수 있듯이 포인터 변수도 구조체의 멤버가 될 수도 있다.
#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
struct circle
{
	double radius;
	struct point* center;
};
int main(void)
{
	struct point cen = { 2, 7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };
	printf("원의 반지름 : %g\n", ring.radius);
	printf("원의 중심 : [%d, %d]\n", (ring.center)->xpos, (ring.center)->ypos);

	return 0;
}*/
//이처럼 structure 안에 따른 구조체를 가리키는 포인터가 있을 수도 있다.
/*
struct point
{
	int xpos;
	int ypos;
	struct point *ptr; //구조체 point의 포인터 변수 선언
};
*/
