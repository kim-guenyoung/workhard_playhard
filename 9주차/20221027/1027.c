/*
#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 1;
	printf("값 : %d, 메모리주소 : %p\n", i, &i);
	printf("값 : %d, 메모리주소 : %p\n", j, &j);
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
	fputs("종업원 이름 : ", stdout);
	scanf("%s", emp.name);
	fputs("주민번호 : ", stdout);
	scanf("%s", emp.id);
	fputs("급여 정보 : ", stdout);
	scanf("%d", &emp.salary); //int 값이니까 &를 사용

	printf("종업원이름 : %s\n", emp.name);
	printf("주민번호 : %s\n", emp.id);
	printf("급여 : %d\n", emp.salary);
	
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
		printf("%d번째 사람\n", i + 1);
		fputs("종업원 이름 : ", stdout);
		scanf("%s", arr[i].name);
		fputs("주민번호 : ", stdout);
		scanf("%s", arr[i].id);
		fputs("급여 정보 : ", stdout);
		scanf("%d", &arr[i].salary); //int 값이니까 &를 사용
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 사람\n", i + 1);
		printf("종업원이름 : %s\n", arr[i].name);
		printf("주민번호 : %s\n", arr[i].id);
		printf("급여 : %d\n", arr[i].salary);
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
	printf("도서 정보 입력\n");
	for (i = 0; i < 3; i++)
	{
		fputs("저자 : ", stdout);
		scanf("%s", arr[i].writer);
		fputs("제목 : ", stdout);
		scanf("%s", arr[i].title);
		fputs("페이지 수 : ", stdout);
		scanf("%d", &arr[i].page); //int 값이니까 &를 사용
	}
	for (i = 0; i < 3; i++)
	{
		printf("저자 : %s\n", arr[i].writer);
		printf("제목 : %s\n", arr[i].title);
		printf("페이지 수 : %d\n", arr[i].page);
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
	//complex 정의X

}

int main(void)
{
	struct complex com;
	
	double num1;
	double num2;
	printf("복소수 입력(실수, 허수) : ");
	scanf_s("%lf %lf", &com.num1_r, &com.num1_i);

//	printf("복소수 입력(실수, 허수) : ");
//	scanf_s("%lf", &com.num2_r, &com.num2_i);

	printf("합의 결과 : 실수 %lf, 허수 %lf", com.num1_r + com.num2_r, com.num1_i*com.num2_i);
}*/