//���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main�Լ��� �ۼ��� ����.
/*
//(1) call - by - value ����� SquareByValue  �Լ�
#include <stdio.h>
int SquareByValue(int n)
{
	return n * n;
}
int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("���� : %d", SquareByValue(num));

	return 0;
}*/
/*
//(2) call - by - reference ����� SquareByReference �Լ�
#include <stdio.h>
void SquareByReference(int *num)
{
	*num = *num * *num;
}

int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	SquareByReference(&num);
	printf("���� : %d", num);
}*/