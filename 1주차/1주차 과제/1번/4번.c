/*
// 4. ������ �Է� �޾� 1���� �Է¹��� ���������� ���� ���ϴ� �Լ��� �ۼ��Ͽ� ȣ���ϰ� ���� ����� ����� ����ϼ���.
// (����1)5�� ����� ���� �����ϰ� ���ϱ�

// (����2) ���� 1000�� �Ѿ�� ���̻� ������ �ʱ�


#include <stdio.h>
int Recursive(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		int sum = 0;
		sum = (n + Recursive(n - 1)); //���丮�� �Լ��� ���� ��ó�� ��� ȣ���� �̿�

		if ((n % 5) == 0)
			sum -= n;

		if (sum > 1000)
			return -1;

		else //1000�� ������ ������� ��� ����
			return sum;
	}
}
int main(void)
{
	int num;
	scanf_s("%d", &num);

	if (Recursive(num) == -1)
		printf("���� 1000���� ���� �������� ���� �� ����\n");
	printf("%d", Recursive(num));

	return 0;
}*/