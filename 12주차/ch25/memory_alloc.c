/*
//�޸� �Ҵ��ϱ�
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1 = 20; //int�� ���� ����
	int* numptr1; //int�� ������ ����
	numptr1 = &num1; //num1�� �޸� �ּҸ� ���� numptr�� �Ҵ�

	int* numptr2;
	numptr2 = malloc(sizeof(int)); //int�� ũ�� 4����Ʈ��ŭ �����޸� �Ҵ�

	printf("%p\n", numptr1);
	printf("%p\n", numptr2);

	free(numptr2);

	return 0;
}
*/
//�� �������� numptr1���� �Ϲ� ������ �޸� �ּҸ� �Ҵ��߰�, numptr2���� malloc�Լ��� �޸𸮸� �Ҵ��ߴ�.
//������ stack�� �����ǰ�, malloc�� �� �κ��� �޸𸮸� ����Ѵ�.
//���ð� ���� ū �������� �޸� ������ �ִ�. ���ÿ� ������ ������ ����� �� ���� ó���� ������ �ʾƵ� ������,
//������ �Ҵ��� �޸𸮴� �ݵ�� ������ ���־�� �Ѵ�. ���� free(������)�� ����� �޸𸮸� �����Ѵ�.