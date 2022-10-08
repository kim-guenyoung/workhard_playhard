/*
//포인터 연산으로 메모리 주소를 조작하자.
#include <stdio.h>
int main(void)
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	int* numPtrB;
	int* numPtrC;
	int* numPtrD;
	int* numPtrE;

	numPtrA = numArr;
	numPtrB = numArr + 1; //이런 걸 포인터 연산

	numPtrC = numArr + 2;
	numPtrD = numArr + 3;
	numPtrE = numArr + 4;
	//포인터 연산은 포인터 자료형의 크기만큼 더하거나 뺀다


	//주소
	printf("%p\n", numPtrA);
	printf("%p\n", numPtrB); //+4
	printf("%p\n", numPtrC);
	printf("%p\n", numPtrD);
	printf("%p\n", numPtrE);

	//값 - 역참조로 값을 가져오기 때문에 * 붙여주어야함
	printf("%d\n", *numPtrA);
	printf("%d\n", *numPtrB); //+4
	printf("%d\n", *numPtrC);
	printf("%d\n", *numPtrD);
	printf("%d\n", *numPtrE);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	
	numPtrA = numArr;
	
	printf("%d\n", *(numPtrA)); //11
	printf("%d\n", *(numPtrA + 1)); //22
	printf("%d\n", *(numPtrA + 2)); //33
	printf("%d\n", *(numPtrA + 3)); //44
	printf("%d\n", *(numPtrA + 4)); //55


	//numPtrA에서 순방향으로 떨어진 만큼 메모리 주소에 접근하는 거임
	
	printf("%d\n", *(++numPtrA)); //22
	//numPtr 시작값은 11이니까 전위 연산 후 값 출력하면 22

	
	return 0;
}*/
/*
//void 포인터로 포인터 연산하기
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void* ptr = malloc(100); //100바이트만큼 메모리를 할당하겠다
	printf("%p\n", ptr);
	//printf("%p\n", ptr + 1); //컴파일 에러 : void 포인터는 포인터 연산을 할 수 없다.
	//void 포인터로 포인터 연산을 하고 싶다면, 다른 포인터로 변환한 뒤 연산을 해야 한다.
	//ex)
	//1. (int *)void ptr + 1 //이런식으로
	//2. ++(int *)void ptr
	//3. ((int *)void ptr)++

	free(ptr);
	return 0;

}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void* ptr = malloc(100);
	//void포인터는 포인터 연산이 안되니까 다른 포인터로 변환
	printf("%p\n", ptr);
	printf("%p\n", (int*)ptr + 1); //+4
	printf("%p\n", (int*)ptr - 1); //-4

	void* ptr2 = ptr;
	printf("p\n", ++(int*)ptr2); //+4
	printf("p\n", --(int*)ptr2); //-4

	printf("%p\n", ((int*)ptr2)++);
	printf("%p\n", ((int*)ptr2)--);

	free(ptr);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	void* ptr = &numArr[2]; //33

	printf("%d\n", *(int*)ptr); //33

	printf("%d\n", *((int*)ptr + 1)); //44
	printf("%d\n", *((int*)ptr - 1)); //22

	printf("d\n", *(++(int*)ptr)); //44
	printf("d\n", *(--(int*)ptr)); //22

	printf("%d\n", *(((int*)ptr)--));
	printf("%d\n", *(((int*)ptr)++));
	printf("%d\n", *(((int*)ptr)--));
}*/
/*
#include <stdio.h>
int main(void)
{
	int* numPtrA = NULL;
	printf("%p\n", numPtrA + 2);
	printf("%p\n", numPtrA + 5); //16진수로 표현되니까

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[5] = { 11, 22, 33, 44, 55 };
	int* numPtrA;
	void* ptr;
	numPtrA = numArr[2];
	ptr = numArr;

	printf("%d", *(numPtrA + 2));
	printf("%d", *(++(int *)ptr));

	return 0;
}*/
