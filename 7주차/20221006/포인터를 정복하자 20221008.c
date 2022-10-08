/*
#include <stdio.h>
void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void ShowString(char* str)
{
	printf("%s\n", str);
}

int main(void)
{
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void(*fptr)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;

	//�Լ� ������ ������ ���� ȣ��
	fptr(num1, num2);
	fptr2(str);

	return 0;
}
*/
/*
//�Ű������� �������� �Լ� ������ ������ �� �� ������ ���̰�
//���޵Ǵ� ���ڿ� ���� �޸� �����ϴ� �Լ��� ���ǵ� �������� �����ش�.
#include <stdio.h>
int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}
int OlderFirst(int age1, int age2)
{
	return (age1 > age2 ? age1 : age2);
}
int YoungerFirst(int age1, int age2)
{
	return (age1 < age2 ? age1 : age2);
}
int main(void)
{
	int age1 = 30;
	int age2 = 20;
	int first;
	printf("������� : \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d���� %d�� �� %d���� ���� ����", age1, age2, first);
}*/