/*
//������ �������� �޸� �ּҸ� ��������.
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
	numPtrB = numArr + 1; //�̷� �� ������ ����

	numPtrC = numArr + 2;
	numPtrD = numArr + 3;
	numPtrE = numArr + 4;
	//������ ������ ������ �ڷ����� ũ�⸸ŭ ���ϰų� ����


	//�ּ�
	printf("%p\n", numPtrA);
	printf("%p\n", numPtrB); //+4
	printf("%p\n", numPtrC);
	printf("%p\n", numPtrD);
	printf("%p\n", numPtrE);

	//�� - �������� ���� �������� ������ * �ٿ��־����
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


	//numPtrA���� ���������� ������ ��ŭ �޸� �ּҿ� �����ϴ� ����
	
	printf("%d\n", *(++numPtrA)); //22
	//numPtr ���۰��� 11�̴ϱ� ���� ���� �� �� ����ϸ� 22

	
	return 0;
}*/
/*
//void �����ͷ� ������ �����ϱ�
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void* ptr = malloc(100); //100����Ʈ��ŭ �޸𸮸� �Ҵ��ϰڴ�
	printf("%p\n", ptr);
	//printf("%p\n", ptr + 1); //������ ���� : void �����ʹ� ������ ������ �� �� ����.
	//void �����ͷ� ������ ������ �ϰ� �ʹٸ�, �ٸ� �����ͷ� ��ȯ�� �� ������ �ؾ� �Ѵ�.
	//ex)
	//1. (int *)void ptr + 1 //�̷�������
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
	//void�����ʹ� ������ ������ �ȵǴϱ� �ٸ� �����ͷ� ��ȯ
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
	printf("%p\n", numPtrA + 5); //16������ ǥ���Ǵϱ�

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
