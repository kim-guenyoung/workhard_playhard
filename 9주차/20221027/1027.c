/*
#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 1;
	printf("�� : %d, �޸��ּ� : %p\n", i, &i);
	printf("�� : %d, �޸��ּ� : %p\n", j, &j);
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct employee
{
	char name[20];
	char id[20];
	int salary;
};
int main(void)
{
	struct employee emp;
	fputs("������ �̸� : ", stdout);
	scanf("%s", emp.name);
	fputs("�ֹι�ȣ : ", stdout);
	scanf("%s", emp.id);
	fputs("�޿� ���� : ", stdout);
	scanf("%d", &emp.salary); //int ���̴ϱ� &�� ���

	printf("�������̸� : %s\n", emp.name);
	printf("�ֹι�ȣ : %s\n", emp.id);
	printf("�޿� : %d\n", emp.salary);
	
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct employee
{
	char name[20];
	char id[20];
	int salary;
};
int main(void)
{
	struct employee arr[3];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("%d��° ���\n", i + 1);
		fputs("������ �̸� : ", stdout);
		scanf("%s", arr[i].name);
		fputs("�ֹι�ȣ : ", stdout);
		scanf("%s", arr[i].id);
		fputs("�޿� ���� : ", stdout);
		scanf("%d", &arr[i].salary); //int ���̴ϱ� &�� ���
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d��° ���\n", i + 1);
		printf("�������̸� : %s\n", arr[i].name);
		printf("�ֹι�ȣ : %s\n", arr[i].id);
		printf("�޿� : %d\n", arr[i].salary);
	}
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct book
{
	char title[50];
	char writer[20];
	int page;
};
int main(void)
{
	struct book arr[3];
	int i;
	printf("���� ���� �Է�\n");
	for (i = 0; i < 3; i++)
	{
		fputs("���� : ", stdout);
		scanf("%s", arr[i].writer);
		fputs("���� : ", stdout);
		scanf("%s", arr[i].title);
		fputs("������ �� : ", stdout);
		scanf("%d", &arr[i].page); //int ���̴ϱ� &�� ���
	}
	for (i = 0; i < 3; i++)
	{
		printf("���� : %s\n", arr[i].writer);
		printf("���� : %s\n", arr[i].title);
		printf("������ �� : %d\n", arr[i].page);
	}
	return 0;
}*/
/*
#include <stdio.h>
struct complex
{
	double num1_r;
	double num2_i;
	double num1_i;
	double num2_r;
};
complex add(complex a, complex b)
{
	//complex ����X

}

int main(void)
{
	struct complex com;
	
	double num1;
	double num2;
	printf("���Ҽ� �Է�(�Ǽ�, ���) : ");
	scanf_s("%lf %lf", &com.num1_r, &com.num1_i);

//	printf("���Ҽ� �Է�(�Ǽ�, ���) : ");
//	scanf_s("%lf", &com.num2_r, &com.num2_i);

	printf("���� ��� : �Ǽ� %lf, ��� %lf", com.num1_r + com.num2_r, com.num1_i*com.num2_i);
}*/