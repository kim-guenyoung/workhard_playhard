/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력 : ", stdin);
		scanf("%s %c %d", name, &sex, &age);
		//fscanf(fp, "%s %c %d", name, &sex, &age);// 첫번째 인자에 FILE 구조체의 포인터가 전달된다는 점
		//그래서 첫번째 인자로 전달된 포인터가 지칭하는 파일로부터 데이터를 읽어들이고 파일의 끝에 도달하거나 오류가 발생하면 EOF 반환
		getchar(); //버퍼에 남아있는 \n 소멸을 위해
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}*/