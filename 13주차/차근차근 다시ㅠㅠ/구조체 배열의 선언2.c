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
	int i;
	struct employee arr[3];
	for (i = 0; i < 3; i++)
	{
		printf("�̸� �Է� : ");
		scanf("%s", arr[i].name);
		printf("�ֹι�ȣ �Է� : ");
		scanf("%s", arr[i].id);
		printf("���� �Է� : ");
		scanf("%d", &arr[i].salary);
	}
	for(i =0; i<3; i++)
	{
		printf("�̸� �Է� : %s\n", arr[i].name);
		printf("�ֹι�ȣ �Է� : %s\n", arr[i].id);
		printf("���� �Է� : %d\n", &arr[i].salary);
	}
	return 0;
}*/