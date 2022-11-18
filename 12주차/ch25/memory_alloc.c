/*
//메모리 할당하기
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1 = 20; //int형 변수 선언
	int* numptr1; //int형 포인터 선언
	numptr1 = &num1; //num1의 메모리 주소를 구해 numptr에 할당

	int* numptr2;
	numptr2 = malloc(sizeof(int)); //int형 크기 4바이트만큼 동적메모리 할당

	printf("%p\n", numptr1);
	printf("%p\n", numptr2);

	free(numptr2);

	return 0;
}
*/
//이 예제에서 numptr1에는 일반 변수의 메모리 주소를 할당했고, numptr2에는 malloc함수로 메모리를 할당했다.
//변수는 stack이 생성되고, malloc은 힙 부분의 메모리를 사용한다.
//스택과 힙의 큰 차이점은 메모리 해제에 있다. 스택에 생성된 변수는 사용한 뒤 따로 처리를 해주지 않아도 되지만,
//힙에서 할당한 메모리는 반드시 해제를 해주어야 한다. 따라서 free(포인터)를 사용해 메모리를 해제한다.