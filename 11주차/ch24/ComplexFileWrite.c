/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է� : ", stdin);
		scanf("%s %c %d", name, &sex, &age);
		//fscanf(fp, "%s %c %d", name, &sex, &age);// ù��° ���ڿ� FILE ����ü�� �����Ͱ� ���޵ȴٴ� ��
		//�׷��� ù��° ���ڷ� ���޵� �����Ͱ� ��Ī�ϴ� ���Ϸκ��� �����͸� �о���̰� ������ ���� �����ϰų� ������ �߻��ϸ� EOF ��ȯ
		getchar(); //���ۿ� �����ִ� \n �Ҹ��� ����
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}*/