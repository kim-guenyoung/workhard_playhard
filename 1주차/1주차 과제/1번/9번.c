/*
//9. �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ���� ȣ���ϼ���.
//(1) �� ���� �Ǽ��� �Է� �޽��ϴ�.

//(2) �� �Ǽ��� �հ�� ����� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� ȣ���մϴ�. (������ ���)

//(3) ����� �հ�  ����� ����մϴ�.
#include <stdio.h>

float calculator(float n1, float n2);

int main(void)
{
	float num1, num2;
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%f %f", &num1, &num2);

	printf("�� : %f", calculator(num1, num2));
	printf("��� : %f", (calculator(num1, num2)) / 2);
}
float calculator(float n1, float n2)
{
	float sum;
	sum = n1 + n2;
	return sum;
}*/
/*
#include <stdio.h>


int main(void)
{
	float num1, num2;
	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%f %f", &num1, &num2);

	float* pnum1 = &num1;
	float* pnum2 = &num2;

	printf("�� : %f\n", *pnum1 + *pnum2);
	printf("��� : %f", (*pnum1 + *pnum2) / 2);
	return 0;
}*/
/*
#include <stdio.h>

float calculator(float* ptr1, float* ptr2);

float main(void)
{
	float num1, num2;

	printf("�� ���� �Ǽ� �Է� : ");
	scanf_s("%f %f", &num1, &num2);

	float c = calculator(&num1, &num2);

	printf("�� �Ǽ��� �� : %f\n", c);
	printf("%f\n", c / 2);

	return 0;
}
float calculator(float* ptr1, float* ptr2) //call-by-reference ����ؼ� �ٽ� ����
{
	float num1 = *ptr1;
	float num2 = *ptr2;
	return *ptr1 + *ptr2;
}*/