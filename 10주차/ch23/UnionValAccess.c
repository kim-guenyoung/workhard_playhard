#/*
include <stdio.h>
typedef union ubox //����ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void)
{
	UBox ubx;
	ubx.mem2 = 20;
	printf("%d\n", ubx.mem2); //20
	printf("%d\n", ubx.mem1); //20
	printf("%d\n", ubx.mem3); //20
	//12�࿡�� ubx.mem1�� 20�̶�� ���� �����Ͽ����Ƿ�, 20�� ���
	ubx.mem3 = 7.15; //�Ǽ��� �����ϸ鼭 �տ� �ִ� ���� ��� ������ȱ� ������
	
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

	return 0;
}*/