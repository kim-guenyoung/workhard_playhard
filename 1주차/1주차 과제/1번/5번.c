
//5. ������ �Է� �޾� 1���� �Է¹��� ���������� ���� ���ϴ� �Լ��� �ۼ��Ͽ� ȣ���ϼ���

#include <stdio.h>
int recursive(int n)
{
	if(n > 1)
		return (n + recursive(n - 1));
}
int main(void)
{
	int num;
	scanf_s("%d", &num);
	printf("%d", recursive(num));

	return 0;
}