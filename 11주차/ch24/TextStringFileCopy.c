/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1; //des�� src�� ����ִ� �� �����ϱ�
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���� ���� �Ϸ�");
	else
		puts("���� ���� ����");

	fclose(src);
	fclose(des);

	return 0;
}*/

//fgets�Լ��� ������ ���� �����ؼ� �� �̻� ���� �����Ͱ� �������� �ʰų� ������ �߻��ϴ� ��쿡 NULL�� ��ȯ�ϱ� ������
//�� ���������� ���� ������ ������ Ȯ���ϱ� ���� fgets �Լ��� ȣ���� ���̴�.

