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
		printf("이름 입력 : ");
		scanf("%s", arr[i].name);
		printf("주민번호 입력 : ");
		scanf("%s", arr[i].id);
		printf("월급 입력 : ");
		scanf("%d", &arr[i].salary);
	}
	for(i =0; i<3; i++)
	{
		printf("이름 입력 : %s\n", arr[i].name);
		printf("주민번호 입력 : %s\n", arr[i].id);
		printf("월급 입력 : %d\n", &arr[i].salary);
	}
	return 0;
}*/