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
    printf("단어 입력 : ");
    gets(q->word);
}

void input(ONEWORD* q)
{
    printf("뜻 입력   : ");
    gets(q->meaning);
}

int main(void)
{
    ONEWORD dictionary[100]; ;
    int cnt; // 현재 담겨 있는 단어의 개수
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
                printf("단어: %s\n뜻 : %s\n ", dictionary[i].word, dictionary[i].meaning);
                break;
            }
            else
            {
                printf("단어를 추가합니다.\n");
            }
        }
    }

    return 0;
}*/