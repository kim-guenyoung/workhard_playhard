/*
#include <stdio.h>
typedef struct dbshort //2개의 unsined short형 변수를 멤버로 지니는 4바이트 크기의 구조체 정의
{
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf //정의된 공용체의 모든 멤버의 크기가 4바이트이므로, 이 공용체의 변수를 선언하면 4바이트가 할당됨.
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf; //공용체의 멤버로 구조체 변수를 선언함
}RDBuf;

int main(void)
{
	RDBuf buf;
	printf("정수 입력 : ");
	scanf_s("%d", &(buf.iBuf));

	printf("상위 2바이트 : %u\n", buf.sBuf.upper);
	printf("하위 2바이트 : %u\n", buf.sBuf.lower);

	printf("상위 1바이트 아스키 코드 : %c\n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드 : %c\n", buf.bBuf[3]);

	return 0;
}*/