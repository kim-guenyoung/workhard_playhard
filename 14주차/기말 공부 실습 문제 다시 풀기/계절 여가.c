/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season
{
	SPRING =1, SUMMER, FALL, WINTER
};
int main(void)
{
	enum season ss;
	char* season = NULL;

	printf("계절 선택 : (1 : SPRING, 2: SUMMER, 3: FALL, 4: WINTER");
	scanf("%d", &ss);
	printf("나의 레저 활동 : ");
	
	switch (ss)
	{
	case SPRING:
		puts("inline");
		break;

	case SUMMER:
		puts("swimming");
		break;
	case FALL:
		puts("trip");
		break;
	case WINTER:
		puts("skiing");
	default:
		break;
	}
	return 0;
}*/