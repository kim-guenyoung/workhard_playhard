/*//2. �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ���� ȣ���ϼ���.
#include <stdio.h>
void sumaver(double* num1, double* num2);
int main(void)
{
	double n1, n2;
	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &n1, &n2);
	sumaver(&n1, &n2);

	return 0;
}
void sumaver(double* num1, double* num2)
{
	printf("�հ� : %lf", (*num1 + *num2));
	printf("��� : %lf", (*num1 + *num2) / 2);
}
*/