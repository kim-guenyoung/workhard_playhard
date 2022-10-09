/*#include <stdio.h>
int main(void)
{
    int a; //정수형 변수 a 선언
    int* b; //포인터 변수 b 선언

    b = &a; //a의 주소 값을 b에 저장
    printf("변수 a의 주소 : %d", &a);
    printf("변수 a의 주소 : %d", b);
}*/
/*
//주소로 변수 값 변경하기
//문자형 변수 a를 선언하고, 'A'를 저장하고, 문자형 변수 a를 가리키는 포인터 변수 b를 선언
//포인터 변수 b를 통해 a의 값을 A -> B로 변경하자
//그 다음 제대로 변경되었는지 확인 후 a의 주소 값을 출력해보자.
#include <stdio.h>
int main(void)
{
    char a;
    a = 'A';
    char* b;
    printf("a의 값은 %c\n", a);

    b = &a;
    *b = 'B';
 
    printf("a의 값은 %c\n", *b);
    printf("a의 주소 값은 %d\n", &a);
    printf("a의 주소 값은 %d\n", b);
}*/
/*
#include <stdio.h>
int main(void)
{
    float a;
    double b;
    int* c;
    long* d;
    float* e;
    double* f;

    printf("float 실수형 변수의 크기는 %d\n", sizeof(a));
    printf("double 실수형 변수의 크기는 %d\n", sizeof(b));
    printf("int 포인터 변수의 크기는 %d\n", sizeof(c));
    printf("long 포인터 변수의 크기는 %d\n", sizeof(d));
    printf("float 포인터 변수의 크기는 %d\n", sizeof(e));
    printf("double 포인터 변수의 크기는 %d\n", sizeof(f));
}*/
/*
#include <stdio.h>
void Swap(int x, int y);
int main(void)
{
    int x, y;
    x = 1, y = 2;
    printf("x = %d, y = %d\n", x, y);
    Swap(x, y);
    printf("x = %d, y = %d\n", x, y);
}
void Swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    //안 바뀜
}*/
/*
//배열과 주소의 관계 확인하기
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i;
    for (i = 0; i < 5; i++)
        printf("arr[%d]의 주소 : %p\n", i, &arr[i]);
    printf("배열의 이름은 %p", arr);//배열의 이름은 주소/?
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* b = arr; //arr 첫 번째 항목의 주소 값을 포인터 변수 b에 저장
    int i;

    printf("arr[0]의 주소는 %d\n", &arr[0]);
    printf("포인터 b + 0의 값은 %d\n", b);

    b += 1;
    printf("arr[1]의 주소는 %d\n", &arr[1]);
    printf("포인터 b + 1의 값은 %d\n", b);
    b += 1;
    printf("arr[2]의 주소는 %d\n", &arr[2]);
    printf("포인터 b + 2의 값은 %d\n", b);
    b += 1;
    printf("arr[3]의 주소는 %d\n", &arr[3]);
    printf("포인터 b + 3의 값은 %d\n", b);
    b += 1;
    printf("arr[4]의 주소는 %d\n", &arr[4]);
    printf("포인터 b + 4의 값은 %d\n", b);
    printf("\n");

    b = arr;

    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]의 주소는 %d\n", i, &arr[i]);
        printf("포인터 b + %d = %d\n", i, b);
        b += 1;
    }
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* b = arr; //arr 첫 번째 항목의 주소 값을 포인터 변수 b에 저장
    int i;
    
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("arr의 각 요소에 10을 더하여 변경\n");
    
    for (i = 0; i < 5; i++)
        *(b + i) += 10;
    printf("변경된 배열 arr의 값 출력 : ");

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", *(b + i));
    printf("\n");
}*/
/*
//변수들의 주소를 담고 있는 포인터 배열 만들기
#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 20;
    int c;

    int* x[3];
    x[0] = &a;
    x[1] = &b;
    x[2] = &c;
    *x[2] = *x[0] + *x[1]; //역참조하여 변수 a와 b를 참조

    printf("c의 값 : %d\n", c);
}*/
/*
#include <stdio.h>

int main(void)
{
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };

    printf("배열 a의 첫 번째 주소는 %p\n", a);
    printf("배열 a의 두 번째 주소는 %p\n", a + 1); // a + 1은 a[1]과 같음
    printf("배열 a에 속한 첫 번째 배열의 첫 번째 방 주소는 %p\n", a[0]);

    printf("배열 a에 속한 첫 번째 배열의 두 번째 방 주소는 %p\n", a[0] + 1);
    printf("배열 a에 속한 첫 번째 배열의 세 번째 방 주소는 %p\n", a[0] + 2);
    printf("배열 a에 속한 두 번째 배열의 첫 번째 방 주소는 %p\n", a[1]);
    printf("배열 a에 속한 두 번째 배열의 두 번째 방 주소는 %p\n", a[1] + 1);
    printf("배열 a에 속한 두 번째 배열의 세 번째 방 주소는 %p\n", a[1] + 2);
}*/

//2차원 배열을 이용하는 법
