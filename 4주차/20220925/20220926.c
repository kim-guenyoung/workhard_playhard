/*
#include <stdio.h>
int main(void)
{
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p\n", ptr, *dptr);
	printf("%9g %9g\n", num, **dptr);
}
*/
/*
#include <stdio.h>
int main(void)
{
	int arr1[3][4];
	int arr2[7][9];

	printf("���� 3, ���� 4 : %d\n", sizeof(arr1));
	printf("���� 7, ���� 9 : %d\n", sizeof(arr2));
	printf("���� 9 : %d\n", sizeof(arr2[0]));
}
*/

/*
#include <stdio.h>
int main(void)
{
	int villa[4][2];
	int popu, i, j;

	//������ ���� �ο�
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α� �� : ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d�� �α� �� : %d ", i + 1, popu);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int m[3][4];
	printf("%d\n", m);
	printf("%d", m + 1);
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3][2];

	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int i, j;
	//2���� �迭 �ʱ�ȭ1
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	//2���� �迭 �ʱ�ȭ2
	int arr2[3][3] = {
		{1},
		{4, 5},
		{7, 8, 9}
	};

	//2���� �迭 �ʱ�ȭ3
	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	printf("%d ", sizeof(arr));
	//[3][4]�� ����� ��
}*/

/*
#include <stdio.h>
int main(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("int�� �迭 : %d\n", sizeof(arr1));
	printf("double�� �迭 : %d\n", sizeof(arr2));
}*/
/*
#include <stdio.h>
int main(void)
{
	int mean = 0, i, j;

	int record[3][3][2] = {
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		}
	};
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A�б� ��ü ��� : %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B�б� ��ü ��� : %g\n", (double)mean / 6);


	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C�б� ��ü ��� : %g\n", (double)mean / 6);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr = &num;
	int** dptr = &ptr;

	printf("num : %d\n", num);
	printf("ptr : %d\n", *ptr);
	printf("dptr : %d\n", **dptr);
//��� 10�� ���
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int** dptr = &ptr1;
	int* ptr2;
	int* ptr3;

	printf("%d %d %d\n", num, **dptr, *ptr1);

	ptr2 = *dptr;
	*ptr2 = 20;
	printf("%d %d %d %d\n", num, **dptr, *ptr1, *ptr2);

	ptr3 = ptr1;
	*ptr3 = 30;
	printf("%d %d %d %d\n", num, **dptr, *ptr1, *ptr2, *ptr3);

	printf("%p %p %p %p\n", &num, *dptr, ptr1, ptr2, ptr3);

	return 0;
}*/
/*
#include <stdio.h>
void Swap(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
	//�� �ٲ� �� ������
	printf("*p1 : %d, *p2 : %d\n", *p1, *p2);
}
int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;
	printf("*ptr1 : %d, *ptr2 : %d\n", *ptr1, *ptr2);

	Swap(ptr1, ptr2);
	printf("*ptr1 : %d, *ptr2 : %d\n", *ptr1, *ptr2);
	return 0;

	//�Լ� ȣ���ϰ� �Լ��� ������ �װ� �� ����������ϱ� swap�� �� �� ��
	//�Լ� ������ printf ����ؼ� ����ϸ� swap �Ǳ� �ϰ�
	//return �� �޾Ƽ� �ٲ��ֱ� ����

}*/
/*
#include <stdio.h>
void Swap(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;

	printf("*ptr1 : %d, *ptr2 : %d\n", *ptr1, *ptr2);

	Swap(&ptr1, &ptr2);
	printf("*ptr1 : %d, *ptr2 ; %d\n", *ptr1, *ptr2);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1, ptr2, ptr3 };
	int** dptr = ptrArr;

	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
}*/