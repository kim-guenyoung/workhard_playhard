//��ø�� ����ü�� ���ǿ� ������ ����
/*�迭�̳� ������ ������ ����ü�� ����� ����� �� �ֵ���, ����ü ������ ����ü�� ����� ����� �� �ִ�.
�׸��� ����ü �ȿ� ����ü ������ ����� �����ϴ� ��츦 ������ '����ü�� ��ø'�̶�� �Ѵ�.*/
/*
#include <stdio.h>
typedef struct point
{
	int xpos;
	int ypos;
}Point;
typedef struct circle
{
	Point cen; //5�࿡�� ���ǵ� ����ü�� ������ ����� ������
	double rad;
}Circle;

void ShowCircle(Circle* cptr)
{
	printf("[%d, %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius : %g\n", cptr->rad);
}

int main(void)
{
	Circle c1 = { {1, 2}, 3.5 }; //����ü ������ ����� ������ ���, �߰�ȣ�� �̿��� ����ü ����� �ʱ�ȭ�� ��������
	Circle c2 = { 2, 4, 3.9 };
	ShowCircle(&c1);
	ShowCircle(&c2);
	
	return 0;
}*/