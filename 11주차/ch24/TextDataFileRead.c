/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	//�ڹ��ڿ��� ���Ͽ� ����� ������ ���ڿ��� ���� �ǹ��ϴ� �� ���ڴ� ������� �ʴ´�. �׷��� ������ ���Ͽ����� ������ �������� ���ڿ��� �����Ѵ�.
	//�ڵ��� fgets �Լ��� ȣ���� ���ؼ� �о���� ���ڿ��� ������ �ݵ�� \n�� �����ؾ� �Ѵ�.
	fclose(fp);
	return 0;
}*/