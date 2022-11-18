/*#define _CRT_SECURE_NO_WARNINGS
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
		scanf("%s %s %d", arr[i].name, arr[i].id, &arr[i].salary);
	for(i =0; i<3; i++)
		printf("이름 : %s, 주민번호 : %s, 급여 : %d\n", arr[i].name, arr[i].id, arr[i].salary);
}*/