#include <stdio.h>
#include <stdlib.h>  // rand()�Լ��� �����ϴ� ���̺귯��
#include <time.h>   // time()�Լ��� �����ϴ� ���̺귯��

int main(void)
{

	srand(time(NULL)); // �Ź� �ٸ� ������ �߻��ϵ��� �ϱ� ���ؼ� ���
	char choice[10];
	int win = 0, draw = 0;
	printf("����? ����? �� : ");

	char rps[3][5] = { "����", "����", "��" };
	
	while (1)
	{
		int random = rand() % 3;
		gets(choice, sizeof(choice), stdin);
		printf("����� %s ����, ��ǻ�ʹ� %s ����, ", choice, rps[random]);
		if (!strcmp(choice, rps[random]))
		{
			puts("�����ϴ�.");
			draw++;
		}
		//strcmp (�̿��ؼ� �Է��� ���� ������ ������, ������ '��'�� ������ ����� �̰���ϴ� ���
		else if (strcmp(choice, "����") == 0 && strcmp(rps[random], "��") == 0 || strcmp(choice, "����") == 0 && strcmp(rps[random], "����") == 0 || strcmp(choice, "��") == 0 && strcmp(rps[random], "����") == 0)
		{
			puts("����� �̰���ϴ�.\n");
			win++;
		}
		else if (strcmp(choice, "����") == 0 && strcmp(rps[random], "����") == 0 || strcmp(choice, "����") == 0 && strcmp(rps[random], "��") == 0 || strcmp(choice, "��") == 0 && strcmp(rps[random], "����") == 0)
		{
			puts("����� �����ϴ�.\n\n");

			break;
		}
		else
			puts("���� ���� ���� �Է��� �� �ֽ��ϴ�.\n");
	}
	printf("������ ��� : %d��, %d��", win, draw);
	return 0;
}