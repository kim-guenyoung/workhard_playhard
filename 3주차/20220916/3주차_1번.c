//1. �� ������ ���� �ٲٴ� �Լ��� �ۼ��Ͽ� ȣ���Ͻÿ�.
//(���1) �����͸� ������� �ʰ� �Լ��� �ۼ��ϱ�
/*#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int n1, n2;
	printf("n1 n2�� �Է��ϼ��� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(n1, n2);

	return 0;
}

void swap(int x, int y);
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("after : %d %d", x, y);
}

*/
/*
//(���2) �����͸� �Ű������� ����Ͽ� �Լ��� �ۼ��ϱ�
#include <stdio.h>
void swap(int* px, int* py);
int main(void)
{
	int n1, n2;
	printf("n1, n2�� �Է��ϼ��� : ");
	scanf_s("%d %d", &n1, &n2);

	printf("before : %d %d\n", n1, n2);
	swap(&n1, &n2);
	//�ּ� ���� �Ѱܹ��� ���� �ּ� ���� �ٲ�� ���� �ƴ϶� �ű⿡ ����Ǿ��ִ� ���� �ٲ�� ��
	//cal-by-value�� �޸� &�� �ٿ��� ��
	printf("after : %d %d", n1, n2);

	return 0;
}
//call-by-reference
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}*/