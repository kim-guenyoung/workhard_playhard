/*#include <stdio.h>
int main(void)
{
	char str1[] = "HELLO";
	char* str2 = "WORLD"; '�ּ�'�� ����

	printf("%s %s\n", str1, str2);

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2);

	str1[1] = 'A';
	//str2�� ���� �����ͷ� �����߱� ������ ������ �� ������, 
	//str1�� ���� �迭�� �����ؼ� �ٲپ����.
	//str2�� �ּڰ��� ��� �־ line12ó�� �ٲٰ� �Ǹ� ����
	printf("%s %s\n", str1, str2);

	
	//������ �迭 : ������ �׸� �����ϱ� �����ϸ鼭�� ���� ����XX
	int n1 = 100, n2 = 200, n3 = 300;
	int* arr1[3] = { &n1, &n2, &n3 };

	printf("%d %d %d\n", *arr1[0], *arr1[1], *arr1[2]);

	//ragged array : ���� �迭
	char* arr2[4] = { "SPRING,", "SUMMER", "FALL", "WINTER" };
	//char *arr2[]�� ����
	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);
	printf("%s\n", arr2[3]);
	
	
	//�迭 ������
	//int* pa[4]; //�����͸� ���� �迭
	int(*pa)[4]; //�迭�� ����Ű�� ������

	int arr3[4] = { 1, 2, 3, 4 };
	pa = &arr3;
	printf("%d %d %d %d\n", (*pa)[0], (*pa)[1], (*pa)[2], (*pa)[3]);
	
	char arr4[4][8] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	char(*ps)[8]; //8���� ������ �� ���ڴ� -> �Լ��� �μ��� ���޹��� �� ����
	ps = arr4;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *ps++);
		//ps++ : ps���� �����ϰ� ����(������ �����̴ϱ� �������� ũ�⸸ŭ �ּ� �̵���Ŵ)
	}
}*/