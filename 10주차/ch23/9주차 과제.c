/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct OneWord
{
	char word[20];
	char meaning[100];
}ONEWORD;

typedef struct dictionary
{
	ONEWORD dictionary[100];
	int cnt; //���� ��� �ִ� �ܾ��� ����
}Dictionary;

void print(ONEWORD* optr)
{
	printf("�ܾ� : %s\n", optr->word);
	printf("�ǹ� : %s\n", optr->meaning);
}

int main(void)
{
	int i = 0;
	int cnt = 0;
	char vocabulary[100];
	//array ����??

	ONEWORD arr[100];
	printf("�ܾ� : ");
	scanf("%s", arr[0].word);
	printf("�ǹ� : ");
	scanf("%s", arr[0].meaning);
	strcpy(vocabulary, arr[0].word);
	
	do
	{	
		i++;
		if (strcmp(arr[i].word, vocabulary == 0))
			print(&arr[i]);
		else
		{
			strcpy(arr[i].word, vocabulary);
			cnt++;
			printf("�Է��� �ܾ ������ ���� ������ �����մϴ�.");
		}
	} while (cnt > 100);
}*/

//����ü�� �̿��Ͽ� ���� �����
//�ܾ �Է¹޾�, �� �ܾ ������ �̹� ������ �ܾ�� ���� ����Ѵ�.
//�Է� ���� �ܾ ������ ������ �� �ܾ�� ���� ������ ����Ѵ�.
/*
void list()

{
    if (cnt == 0)
        printf("��ϵ� �ܾ �����ϴ�.\n\n");
    else
    {
        printf("\n1.�ܾ�----2.��\n");

        for (int i = 0; i < cnt; i++)

        {

            printf("%s\n", dictionarry[i].word);

            printf("%s\n", dictionarry[i].meaning);

        }

    }

}?

void add()

{
    cnt++;
    printf("�ܾ�:");

    scanf("%s", dictionarry[cnt - 1].word);

    printf("��:");
    scanf("%s", dictionarry[cnt - 1].meaning);

}?

void find()
{

    char search[20];

    printf("�˻��� �ܾ�:");

    scanf("%s", search);

        for (int i = 0; i < cnt; i++)

        {

            if (strcmp(search, dictionarry[i].word) == 0)

            {

                printf("�ܾ�:%s\n", dictionarry[i].word);

                printf("��:%s\n", dictionarry[i].meaning);

                return;

            }

            else

                continue;

        }

    printf("\n�ܾ� Ȯ���� �Ұ��մϴ�.\n\n");

}

?

int main(void)

{

    int board = 0;

    do
    {
        printf("\n�ܾ��� �޴� �ɼ��� �����ϼ���\n");
        printf("1.��� 2.�ܾ� �߰� 3.�ܾ� �˻�\n");
        printf("����� �ܾ�� : %d\n", cnt);

            scanf("%d", &board);
        getchar();

            switch (board)
            {
            case 1: list();

                break;

            case 2: add();

                getchar();

                break;

            case 3: find();

                getchar();

                break;
            default:
                printf("�ɼ� ��ȣ�� �ٽ� �������ּ���\n");
            }
    } while (board != 4 || cnt <= 100);
}*/