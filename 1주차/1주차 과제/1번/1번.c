/*
//1. Ű�� cm������  �Է� �޾� m������ ȯ���ؼ� ������ִ� ���α׷��� �ۼ��ϼ���.

#include <stdio.h>

float cm_to_m(float height_m); //main �Լ����� ���� ��µǰ� �Ϸ��� �Լ� ȣ��

int main(void)
{
	float height;
	float result;
	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf_s("%f", &height);

	result = cm_to_m(height);

	printf("%0.2f", result); //�Ҽ��� ��° �ڸ������� ���
	return 0;
}
float cm_to_m(float height_m)
{
	return height_m * 0.01;
}*/