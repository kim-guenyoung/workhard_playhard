/*
#include <stdio.h>
typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
}Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
		case Do:
			puts("���� �Ͼ� ������ ��");
			return 0;
		case Re:
			puts("���� �ձ� ���ڵ� ��");
			return 0;
		case Mi:
			puts("�̴� �Ķ� �̳��� ��");
			return 0;
		case Fa:
			puts("�Ĵ� ���� �Ķ��� ��");
			return 0;
		case So:
			puts("���� ���� �ֹ�� ��");
			return 0;
		case La:
			puts("��� �������~ ��");
			return 0;
		case Ti:
			puts("�ô� ���� �ó��� �ܢ�");
			return 0;
	}
	puts("�� �Բ� �θ���~ �������� �ֶ�õ� �� ��~ §~!");
}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone++)
		Sound(tone);
	return 0;
}*/