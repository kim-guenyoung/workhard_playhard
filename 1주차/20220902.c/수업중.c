/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1, b = 2;
	int c;
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c);
	c = Calculator(a);
	printf("a = %d, c = %d\n", a, c);
	return 0;
}
int Calculator(int a)
{
	//static int result = 0; //���� ����
	register int result = 0; //register : result�� �����϶�� �ǹ�. 0���� �Լ� �ʱ�ȭ�ż� 1+ 0�� ���Ǿ� c���� 1�� ���

	result += a;

	return result;
}*/
/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;
	int* ptr;
	ptr = &num;

	printf("%d %d %d\n", num, ptr, sizeof(ptr)); //10, �ּ� ��, 
	// 64��Ʈ�� ��ǻ���� ��� 8�� ����� / 32��Ʈ : 32 / 8, 16��Ʈ : 16 / 8
	//%p�� ��� ��簪 ���·� ǥ��
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int num = 10;
	double dnum = 3.14;

	int* ptr;
	ptr = &num;
	
	double* dptr;
	dptr = &dnum;

	char* chptr;
	chptr = &ch;

	printf("%d %lf %c")
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;
	*pnum += 30;

	pnum = &num2;
	*pnum -= 30;
	
	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;
}*/
//�޸𸮿� ���� ������ �� �ִٴ� ���� : �������� �ٽ�
//�������� ������ ���� �� �����͸� ����ϴ� �� �� �� ����.
/*

#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num);

	return 0;
}*/