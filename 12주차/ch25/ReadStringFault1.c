/*
#include <stdio.h>
char name[30];
char* ReadUserName(void)
{
	
	printf("What's your name?");
	gets(name);
	return name;
}
int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	//종료하고 나온 순간 name이라는 메모리 공간이 해제됨
	printf("name1: %s\n", name1);
	name2 = ReadUserName();
	printf("name2: %s\n", name2);
	//같이 할당받아서 이름이 바뀌게 되면 오버라이딩됨.
	printf("name1: %s\n", name1);
	printf("name2: %s\n", name2);

	return 0;
}*/