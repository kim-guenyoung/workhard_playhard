/*
//(1) call-by-value ����� SquareByValue  �Լ�
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

/*
//���� 2
#include <stdio.h>
void Swap3(int* num1, int* num2, int* num3)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}
int main(void)
{
	int num1, num2, num3;
	printf("3���� ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	Swap3(&num1, &num2, &num3);
	printf("�ٲ� �� : %d %d %d", num1, num2, num3);
}*/
/*
//���� 3
#include <stdio.h>
void ShowAllData(const int* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	//�迭 ��� ���� ����ؾ� �ϴµ� const������ ������ �������
	//�迭 ��Ґb ������ ���� ����
}*/
/*
#include <stdio.h>
void ShowData(const int* ptr)
{
	int* rptr = ptr;
	printf("%d\n", *rptr);
	*rptr = 20;
}
//const �Ἥ �Լ��� ptr ���� �� ������ ������
//�ٵ� ptr�� ����� ���� const�� ������� ���� ������ ������ �����ϰ� �����Ƿ� ptr�� ����Ű�� ������ �� ���� �����ϰ�
*/

/*
#include <stdio.h>
int main(void)
{
	int arr[10] = { 0, };
	int i, j;
	int arr_size = sizeof(arr) / sizeof(int);
	int temp;
	printf("10���� ���� �Է�");
	for(i =0; i<arr_size; i++)
		scanf_s("%d", &arr[i]);

	for (i = 0; i < arr_size; i++)
		for (j = 0; j < arr_size - 1; j++)
		{

			//���� ����
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	for(i = 0; i< arr_size; i++)
		for(j = 5; j<arr_size-1; j++)
			if(arr[i]% 2 == 1

	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[50];
	char voca2[50];
	char i;
	int len = 0;

	printf("�Է� : ");
	scanf("%s", voca);

	for (i = 0; voca[i] != '\0'; i++)
		len++;

	for (i = 1; i <= len; i++)
	{
		voca2[len - i] = voca[i - 1];
	}
	for (i = 0; i < len; i++)
	{
		if (voca2[i] == voca[i])
		{
			printf("ȸ���Դϴ�.");
			break;
		}
		else
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
	}
	return 0;
}*/