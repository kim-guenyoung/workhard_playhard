/*
/8. �� ������ ���� �ٲٴ� �Լ��� �ۼ��Ͽ� ȣ���Ͻÿ�.
#include <stdio.h>
void swap(int* px, int* py) //�ּ� ���� �޾� �޸� ���� ���� ����
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;

	printf("�� : num1 : %d num2 : %d\n", num1, num2); //px -> num1, px -> num2 ���� �ϳ��� �����ؼ� ���� ����
	swap(&num1, &num2);
	printf("�� : num1 : %d num2 : %d", num1, num2);
	return 0;
}*/