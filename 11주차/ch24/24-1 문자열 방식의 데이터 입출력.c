//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
/*int main(void)
{
	FILE* fp = fopen("mystory.txt", "wt");


	fputs("#�̸� : ȫ�浿\n", fp);
	fputs("#�ֹι�ȣ : 020301 - 4012345\n", fp);
	fputs("#��ȭ��ȣ : 010-1111-1111\n", fp);
	fputs("#��ܸԴ� ���� : ����, �Ľ�Ÿ\n", fp);
	fputs("#��� : �౸\n", fp);
	fclose(fp);

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp = fopen("mystory.txt", "a");
	fputs("#��ܸԴ� ���� : ����, �Ľ�Ÿ\n", fp);

	fputs("#��� : �౸\n", fp);

	fclose(fp);

	return 0;
}*/
/*
int main(void)
{
	char str[100];
	FILE* mystory = fopen("mystory.txt", "rt");

	if (mystory == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	while (fgets(str, sizeof(str), mystory) != NULL) //������ ���� �����ؼ� �� �̻� ���� �����Ͱ� ���ų� ������ �߻��ϴ� ��� NULL ��ȯ
		printf(str);
	fclose(mystory);

	if(feof(fp)!= 0)
		printf("������ ���������� ��� ��µǾ����ϴ�.");
	else
		printf("������ ���������� ��µ��� �ʾҽ��ϴ�.");
	
	return 0;
}
*/