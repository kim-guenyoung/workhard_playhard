/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//���̳ʸ� ���� ���� ����
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src); //�� ��° �������ڰ� 1, �� ��° �������ڰ� sizeof(buf)�̴� �о���̴� �������� ũ��� 1 x sizeof(buf)����Ʈ�� �ȴ�.
		if (readCnt < sizeof(buf)) //fread �Լ��� sizeof(buf)�� ��ȯ ������ ���� ���� ��ȯ���� �� ���� ��. �׷��� �̴� ������ �߻��߰ų� ������ ���� ������ ��Ȳ�̴�
		//feof �Լ��� ȣ���� ���� �Ǵ�
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des); //������ ���� �����ϸ� ���������� ���� �����͸� ���Ͽ� �����ϰ� ���α׷� ����
				puts("���� ���� �Ϸ�");
				break;
			}
			else
				puts("���� ���� ����");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}*/