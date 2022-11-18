/*구조체를 통해서 연관 있는 데이터를 하나로 묶을 수 있는 자료형을 정의하면, 데이터의 표현 및 관리가 용이해지고, 합리적인 코드를 작성할 수 있게 된다.*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
}Student;

void ShowStudentInfo(Student* sptr)
{
	printf("학생 이름 : %s\n", sptr->name);
	printf("학생 고유 번호 : %s\n", sptr->stdnum);
	printf("학교 이름 : %s\n", sptr->school);
	printf("선택 전공 : %s\n", sptr->major);
	printf("학년 : %d\n", sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;
	
	for (i = 0; i < 7; i++)
	{
		printf("이름 : ");
		scanf("%s", arr[i].name);
		printf("고유 번호 : ");
		scanf("%s", arr[i].stdnum);
		printf("학교 : ");
		scanf("%s", arr[i].school);
		printf("전공 : ");
		scanf("%s", arr[i].major);
		printf("학년 : ");
		scanf("%d", &arr[i].year);
	}
	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}*/