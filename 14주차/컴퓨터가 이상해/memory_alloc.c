/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = 20;
	int* numPtr1; //int�� ������ ����
	
	numPtr1 = &num1; //num1�� �޸� �ּҸ� ���� numPtr�� �Ҵ�

	int* numPtr2;
	numPtr2 = malloc(sizeof(int)); //int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2); //�������� �Ҵ��� �޸� ����

	return 0;
}*/