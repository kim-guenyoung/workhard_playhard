/*
//1�� ��� 1(������ ��� X)
#include <stdio.h>
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
//1�� ���2 (������ ���)
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
/*
//2. �� ���� �Ǽ��� �Է� �޾� �հ�� ����� ���ϴ� �Լ� 1���� ���� ȣ���ϼ���.
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
	printf("�հ� : %lf",(*num1 + *num2));
	printf("��� : %lf", (*num1 + *num2) / 2);
}
*/
/*
//3��
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

/*
//4. 1���� 100������ ������ ����ִ� �迭�� �ֽ��ϴ�.

//�� �迭�� �Ű������� �Ѱ� �޾� 2�� ��� ��° ��ġ�� �ִ� ���� ����ϴ� �Լ��� ����� ȣ���ϼ���.
//4. 1���� 100������ ������ ����ִ� �迭�� �ֽ��ϴ�.

#include <stdio.h>

void printArray(int arr[]) // �迭�� �����͸� ����
{
	int i;
	for (i = 0; i < 100; i++)
	{
		arr[0] = 2;

		if (arr[i] < 100)
		{
			arr[i + 1] = arr[i] * 2;
			printf("%d ", arr[i]);
		}
		else
			break;
	}

	printf("\n");
}
int main(void)
{
	int i;
	int arr[100] = { 0, };
	printf("1���� 100���� ����� �迭 : ");
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	printf("2�� �������� ��� �迭 : ");
	printArray(arr);
	return 0;
}*/