/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct employee
{
	char name[20];
	char id[20];
	int salary;
}employee;

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		employee emp[3];
		printf("이름 : ");
		scanf("%s", emp[i].name);
		printf("주민번호 : ");
		scanf("%s", emp[i].id);
		printf("급여 정보 : ");
		scanf("%d", &emp[i].salary);

		printf("이름 : %s\n", emp[i].name);
		printf("주민번호 : %s\n", emp[i].id);
		printf("급여 정보 : %d\n", emp[i].salary);
	}
	return 0;
}*/