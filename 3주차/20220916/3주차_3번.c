/*
//3. 2�� �������� ����� �հ� ��յ� ��ȯ�޾� 2�� �Լ��� ȣ���� �Լ�(���⼭�� main�Լ�)���� ����� ����ϼ���.
#include <stdio.h>
double sumaver(double* num1, double* num2);
int main(void)
{
	double n1, n2;
	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &n1, &n2);
	printf("�հ� : %lf", sumaver(&n1, &n2));
	printf("��� : %lf", sumaver(&n1, &n2) / 2);

	return 0;
}

double sumaver(double* num1, double* num2)
{
	return (*num1 + *num2);
}
*/