//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
/*int main(void)
{
	FILE* fp = fopen("mystory.txt", "wt");


	fputs("#이름 : 홍길동\n", fp);
	fputs("#주민번호 : 020301 - 4012345\n", fp);
	fputs("#전화번호 : 010-1111-1111\n", fp);
	fputs("#즐겨먹는 음식 : 피자, 파스타\n", fp);
	fputs("#취미 : 축구\n", fp);
	fclose(fp);

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp = fopen("mystory.txt", "a");
	fputs("#즐겨먹는 음식 : 피자, 파스타\n", fp);

	fputs("#취미 : 축구\n", fp);

	fclose(fp);

	return 0;
}*/
/*
int main(void)
{
	char str[100];
	FILE* mystory = fopen("mystory.txt", "rt");

	if (mystory == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	while (fgets(str, sizeof(str), mystory) != NULL) //파일의 끝에 도달해서 더 이상 읽을 데이터가 없거나 오류가 발생하는 경우 NULL 반환
		printf(str);
	fclose(mystory);

	if(feof(fp)!= 0)
		printf("파일이 정상적으로 모두 출력되었습니다.");
	else
		printf("파일이 정상적으로 출력되지 않았습니다.");
	
	return 0;
}
*/