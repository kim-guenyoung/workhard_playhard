/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct OneWord
{
    char word[20];
    char meaning[100];
}ONEWORD;

void wordinput(ONEWORD* q)
{
    printf("�ܾ� �Է� : ");
    gets(q->word);
}

void input(ONEWORD* q)
{
    printf("�� �Է�   : ");
    gets(q->meaning);
}

int main(void)
{
    ONEWORD dictionary[100]; ;
    int cnt; // ���� ��� �ִ� �ܾ��� ����
    int a;
    int i;
    for (cnt = 0; cnt < 100; cnt++)
    {
        wordinput(&dictionary[cnt]);
        input(&dictionary[cnt]);
        for (i = 0; i < cnt; i++)
        {
            if (!strcmp(dictionary[i].word, dictionary[cnt].word) == 0)
            {
                printf("�ܾ�: %s\n�� : %s\n ", dictionary[i].word, dictionary[i].meaning);
                break;
            }
            else
            {
                printf("�ܾ �߰��մϴ�.\n");
            }
        }
    }

    return 0;
}*/