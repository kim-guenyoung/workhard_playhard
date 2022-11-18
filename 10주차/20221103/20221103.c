/*
struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;
*/
/*
struct score
{
	int number;
	int exam;
};
typedef struct score SCORE;
*/
/*
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

void Swap(Point* ptr1, Point* ptr2)
{
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);

	Swap(&pos1, &pos2);
	printf("%d %d\n", pos1.xpos, pos1.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);
}*/
/*
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point lu; //좌 상단
	Point rd; //우 하단
}Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("넓이 %d\n", (rec.rd.xpos - rec.lu.xpos)* (rec.rd.ypos - rec.lu.ypos));
}

void ShowRecpos(Rectangle rec)
{
	printf("좌 상단 : %d %d\n", rec.lu.xpos, rec.lu.ypos);
	printf("좌 하단 : %d %d\n", rec.lu.xpos, rec.rd.ypos);
	printf("우 상단 : %d %d\n", rec.rd.xpos, rec.lu.ypos);
	printf("우 하단 : %d %d\n", rec.rd.xpos, rec.rd.ypos);
}
int main(void)
{
	Rectangle rec1 = { (3, 3), (4, 10) };
	Rectangle rec2 = { (1, 9), (7, 5)};
	ShowRecArea(rec1);
	ShowRecpos(rec1);
	ShowRecArea(rec2);
	ShowRecpos(rec2);

	return 0;
}*/
/*
#include <stdio.h>
union grade
{
	int score;
	double gpa;
};
int main(void)
{
	union grade g1 = { 95 };
	printf("score : %d\n", g1.score);
	g1.gpa = 4.3;

	printf("gpa : %.1lf\n", g1.gpa);
}*/
/*
#include <stdio.h>
typedef union ubox{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	UBox ubx;
	ubx.mem1 = 20;
	printf("%d\n", ubx.mem2);  // (1)
	ubx.mem3 = 7.15;
	printf("%d\n", ubx.mem1);  // (2)
	printf("%d\n", ubx.mem2);  // (3)
	printf("%g\n", ubx.mem3);  // (4)
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef enum season
{
	SPRING, SUMMER, FALL, WINTER
}ss;
void leisure(ss SS)
{
	switch (SS)
	{
	case SPRING:
		puts("나의 레저 활동 : inline");
		break;
	case SUMMER:
		puts("나의 레저 활동 : swimming");
		break;
	case FALL:
		puts("나의 레저 활동 : trip");
		break;
	case WINTER:
		puts("나의 레저 활동 : skiing");
		break;
	default:
		break;
	}
}
int main(void)
{
	char choice = NULL;
	printf("SPRING, SUMMER, FALL, WINTER 중 하나 입력 : ");
	scanf("%d", choice);
	leisure(choice);
	return 0;
}*/
//공용체를 할 때 가장 큰 자료형을 읽는데,
//마지막으로 저장한 값의 타입이 맞게끔 type 변수를 가지고 있다가 
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef union memory
{
	char mem1;
	int mem2;
	double mem3;
}Memory;

enum type{ CHAR = 1, INT, DOUBLE };

int main(void)
{
	enum type TYPE;
	Memory m;
	printf("1 : CHAR, 2: INT, 3 : DOUBLE ");
	scanf("%d", &TYPE);
	switch (TYPE)
	{
		case CHAR:
			scanf("%s", &m.mem1);
			printf("char 값 : %c", m.mem1);
			break;

		case INT:
			scanf("%d", &m.mem2);
			printf("int 값 : %d", m.mem2);
			break;
			                                                                                                                                                                                               
		case DOUBLE:
			scanf("%lf", &m.mem3);
			printf("double 값 : %lf", m.mem3);
			break;
		default:
			break;
	}
	return 0;
}*/