/*
#include <stdio.h>
typedef struct dbshort //2���� unsined short�� ������ ����� ���ϴ� 4����Ʈ ũ���� ����ü ����
{
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf //���ǵ� ����ü�� ��� ����� ũ�Ⱑ 4����Ʈ�̹Ƿ�, �� ����ü�� ������ �����ϸ� 4����Ʈ�� �Ҵ��.
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf; //����ü�� ����� ����ü ������ ������
}RDBuf;

int main(void)
{
	RDBuf buf;
	printf("���� �Է� : ");
	scanf_s("%d", &(buf.iBuf));

	printf("���� 2����Ʈ : %u\n", buf.sBuf.upper);
	printf("���� 2����Ʈ : %u\n", buf.sBuf.lower);

	printf("���� 1����Ʈ �ƽ�Ű �ڵ� : %c\n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ� : %c\n", buf.bBuf[3]);

	return 0;
}*/