/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name : %s\n", man.name);
	printf("phone : %s\n", man.phoneNum);
	printf("age : %d\n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("�̸� : ");
	scanf("%s", man.name);
	printf("��ȭ��ȣ : ");
	scanf("%s", man.phoneNum);
	printf("���� : ");
	scanf("%d", &man.age);
	return man;
}
int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}*/