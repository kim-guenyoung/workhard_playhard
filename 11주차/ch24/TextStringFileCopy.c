/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패");
		return -1; //des랑 src에 담겨있는 게 없으니까
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("파일 복사 완료");
	else
		puts("파일 복사 실패");

	fclose(src);
	fclose(des);

	return 0;
}*/

//fgets함수는 파일의 끝에 도달해서 더 이상 일을 데이터가 존재하지 않거나 오류가 발생하는 경우에 NULL을 반환하기 때문에
//이 예제에서도 파일 복사의 성공을 확인하기 위해 fgets 함수를 호출한 것이다.

