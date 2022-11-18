//구조체 변수의 초기화
//int형 변수를 선언과 동시에 초기화할 수 있듯, 구조체 변수도 선언과 동시에 초기화가 가능하다.
//그리고 초기화 바법 또한 배열의 초기화와 비슷하다. 즉 멤버의 순서대로 초기화할 대상을 나열하면 된다.
/*
#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1111-2222", 21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d", man.name, man.phoneNum, man.age);

	return 0;
}*/

//위 예제를 통해 구조체 변수의 초기화 방식을 파악하였다. 그런데 초기화 과정에서는 문자열 저장을 위해 strcpy 함수를 호출하지 않아도 된다.
//telephone.info.c에서는 구조체 변수 선언 이후에 구조체 멤버에 문자열을 저장하기 위해 strcpy 함수를 호출해야만 했는데, 이 예제는
//초기화 과정에서 문자열일지라도 멤버에 데이터에 나열만 하면 된다.
/*
//구조체 배열을 선언과 동시에 초기화할 때에는 다음과 같이 배열의 길이만큼 중괄호를 이용해 초기화해주면 된다.
struct person arr[3] = {
	{"이승기", "010-1111-2222", 21 },
	{"정지영", "010-2222-3333", 22 },
	{"한지수", "010-4444-5555", 19 }
};*/