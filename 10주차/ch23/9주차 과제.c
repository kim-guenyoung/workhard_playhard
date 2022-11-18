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
	int cnt; //현재 담겨 있는 단어의 개수
}Dictionary;

void print(ONEWORD* optr)
{
	printf("단어 : %s\n", optr->word);
	printf("의미 : %s\n", optr->meaning);
}

int main(void)
{
	int i = 0;
	int cnt = 0;
	char vocabulary[100];
	//array 선언??

	ONEWORD arr[100];
	printf("단어 : ");
	scanf("%s", arr[0].word);
	printf("의미 : ");
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
			printf("입력한 단어가 사전에 없어 사전에 저장합니다.");
		}
	} while (cnt > 100);
}*/

//구조체를 이용하여 사전 만들기
//단어를 입력받아, 이 단어가 사전에 이미 있으면 단어와 뜻을 출력한다.
//입력 받은 단어가 사전에 없으면 이 단어와 뜻을 사전에 등록한다.
/*
void list()

{
    if (cnt == 0)
        printf("등록된 단어가 없습니다.\n\n");
    else
    {
        printf("\n1.단어----2.뜻\n");

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
    printf("단어:");

    scanf("%s", dictionarry[cnt - 1].word);

    printf("뜻:");
    scanf("%s", dictionarry[cnt - 1].meaning);

}?

void find()
{

    char search[20];

    printf("검색할 단어:");

    scanf("%s", search);

        for (int i = 0; i < cnt; i++)

        {

            if (strcmp(search, dictionarry[i].word) == 0)

            {

                printf("단어:%s\n", dictionarry[i].word);

                printf("뜻:%s\n", dictionarry[i].meaning);

                return;

            }

            else

                continue;

        }

    printf("\n단어 확인이 불가합니다.\n\n");

}

?

int main(void)

{

    int board = 0;

    do
    {
        printf("\n단어장 메뉴 옵션을 선택하세요\n");
        printf("1.목록 2.단어 추가 3.단어 검색\n");
        printf("저장된 단어개수 : %d\n", cnt);

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
                printf("옵션 번호를 다시 선택해주세요\n");
            }
    } while (board != 4 || cnt <= 100);
}*/