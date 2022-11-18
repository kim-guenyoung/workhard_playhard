/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct perosn
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
	printf("name : ");
	scanf("%s", man.name);
	printf("phoneNum : ");
	scanf("%s", man.phoneNum);
	printf("age : ");
	scanf("%d", &man.age);

	return man;
}
int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	return 0;
}
*/
//실행 결과는 인자의 전달 과정에서, 그리고 값의 반환 과정에서 구조체의 멤버로 선언된 배열도 통째로 복사됨을 알 수 있다.