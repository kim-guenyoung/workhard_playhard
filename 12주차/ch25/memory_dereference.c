/*
//�޸𸮿� �� �����ϱ�
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int* numptr; //int�� ������ ����
	numptr = malloc(sizeof(int)); //int�� ũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�
	*numptr = 10; //�����͸� �������� �� �� �Ҵ�

	printf("%d\n", *numptr); //�����͸� �������Ͽ� �޸𸮿� ����� �� ���

	free(numptr); //���� �޸� ����
	return 0;
}*/