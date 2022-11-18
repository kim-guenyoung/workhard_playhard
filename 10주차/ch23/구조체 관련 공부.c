/*
구조체 변수를 선언할 때에는 무조건 struct 변수를 추가해야 한다.
하지만 이것이 여간 귀찬은 일이 아니다.
int형 변수 num을 선언할 때는 그저 int num; 이라 선언하듯, person형 구조체 변수 man을 선언할 때에도
struct 선언 없이 그저 person man이라 하려면 typedef를 사용하면 된다.

//typedef 선언
typedef 선언은 기존에 존재하는 자료형의 이름에 새 이름을 부여하는 것을 목적으로 하는 선언이다.
typedef int INT; //int의 또 다른 이름 INT를 부여하는 것이다.
이는 자료형의 이름 int에 INT라는 이름을 추가로 붙여준다.를 의미한다.
따라서 선언 이후 INT num; 을 사용하면 int num; 과 동일한 선언이 된다.
INT* ptr == int* ptr;
*/
/*
typedef 선언에 있어 새로운 이름의 부여는 가장 마지막에 등장하는 단어를 중심으로 이루어진다.
typedef name1 name name3;이면 name3이 중심이고, name3이 이름이 된다.
새로 부여된 이름			대상 자료형
INT							int
PTR_INT						int *
UINT					unsigned int
PTR_UINT				unsigned int *
UCHAR					unsigned char 
PTR_UCHAR				unsigned char *
*/
/*
struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point; //struct point에 Point라는 이름을 부여

이것도 되고
typedef struct point
{
	int xpos;
	int ypos;
}Point;

struct point
{
	int xpos;
	int ypos;
};
typedef struct point Point;*/
/*
//구조체의 이름 생략
typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;
*/
//struct perosn man; //불가능한 선언

/*
//함수의 인자로 전달되고 return 문에 의해 반환되는 구조체 변수
void SimpleFunc(int num)
{
}
int main(void)
{
	int age = 24;
	SimpleFunc(age); //age에 저장된 값이 매개변수 num에 전달(복사)됨
}*/
/*
typedef struct sbox //구조체 sbox 정의
{
	int mem1;
	int mem2;
	double mem3;
}Sbox;

typedef union ubox //공용체 ubox 정의
{
	int mem1;
	int mem2;
	double mem3;
}Ubox;
//위의 코드에서 보았듯 정의 방식에서 유일한 차이점은 struct 선언을 하느냐, union 선언을 하는냐다
//하지만 각각의 변수가 메모리 공간에 할당되는 방식과 접근의 결과에서는 차이가 있다.
printf("%d\n", sizeof(Sbox)); //16
printf("%d\n", sizeof(Ubox)); //8
//여기서 16은 모든 멤버의 크기를 합한 결과이고, 8은 멤버 중 가장 크기가 큰 double만 계산된 결과다.
*/

/*
이번에 소개하는 열거형이라는 것도 구조체나 공용체와 마찬가지로 자료형을 정의하는 바업으로 사용이 된다.
따라서 열거형 기반의 자료형 정의방법은 구조체 및 공용체와 유사하고
정의된 열거형 기반의 변수 선언 방법은 구조체 및 공용체와 완전 동일하다.
//열거형의 정의와 변수의 선언
열거형으로 syllable이라는 이름의 자료형을 정의한다는 것은
syllable형 변수에 저장이 가능한 정수 값들을 결정하겠다는 뜻이다.
구조체와 공용체 같은 경우에는 자료형의 선언을 통해서 멤버에 저장할 값의 유형을 결정하였다.
하지만 열거형의 경우에는 저장이 가능한 값 자체를 정수의 형태로 결정한다.

enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
};
언뜻 보면 정의방식이 구조체와 차이가 있어 보이나 기본 구성은 동일하다.
struct 대신에 enum이 왔고, 구조체의 정의방식과 마찬가지로 enum에 이어서 자료형의 이름 syllable이 등장하였다.
	그리고 syllable에 관련된 내용은 중괄호 안에 선언되었다.
	Do = 1 //이는 Do를 정수 1을 의미하는 상수로 정의한다. 그리고 이 값은 syllable 형 변수에 저장이 가능하다는 뜻이다.
*/