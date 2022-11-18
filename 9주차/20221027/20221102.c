/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct OneWord
{
	char word[20];
	char meaning[100];
};
int search(void)
{
	struct OneWord dictionary[100];
	int i;
	int cnt = 0;
	char word[20] = "\0";
	gets(word);
	for (i = 0; i < 100; i++)
	{
		if (strcmp(word, dictionary[i].word == 0))
			printf("%s, %s\n", dictionary[i].word, dictionary[i].meaning);
		else
		{
			cnt++;
			strcpy(dictionary[i].word, word);
			printf("%s %s\n", dictionary[i].word, dictionary[i].meaning);
		}
	}
}
int main(void)
{
	struct OneWord dictionary[100];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("단어 %d 입력\n", i + 1);
		fputs("단어 : ", stdout);
		scanf("%s", dictionary[i].word);
		fputs("의미 : ", stdout);
		scanf("%s", dictionary[i].meaning);
	}
	for (i = 0; i < 3; i++)
	{
		printf("단어 %d : %s\n", i + 1, dictionary[i].word);
		printf("의미 %d : %s\n", i + 1, dictionary[i].meaning);
		printf("\n");
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_book(char(*book_name)[30], char(*auth_name)[30], int* num_total_book);
int search_book(char(*book_name)[30], char(*auth_name)[30], int num_total_book);

int compare(char* str1, char* str2);

int main() {
    int user_choice;        // 유저가 선택한 메뉴 
    int num_total_book = 0; // 현재 책의 수 

    //각각 책, 저자, 출판사를 저장할 배열 생성. 책의 최대 개수는 100 권
    char book_name[100][30], auth_name[100][30];
    //빌렸는지 상태를 표시

    while (1) {
        printf("도서 관리 프로그램 \n");
        printf("메뉴를 선택하세요 \n");
        printf("1. 책을 새로 추가하기 \n");
        printf("2. 책을 검색하기 \n");

        printf("당신의 선택은 : ");
        scanf("%d", &user_choice);

        if (user_choice == 1) {
            //책을 새로 추가하는 함수 호출 
            add_book(book_name, auth_name, &num_total_book);
        }
        else if (user_choice == 2) {
            // 책을 검색하는 함수 호출 
            search_book(book_name, auth_name, &num_total_book);
        }
    }

    return 0;
}
// 책을 추가하는 함수
int add_book(char(*book_name)[30], char(*auth_name)[30], int* num_total_book)
{
    printf("추가할 책의 제목 : ");
    scanf("%s", book_name[*num_total_book]);

    printf("추가할 책의 저자 : ");
    scanf("%s", auth_name[*num_total_book]);

    
    printf("추가 완료! \n");
    (*num_total_book)++;

    return 0;
}
// 책을 검색하는 함수
int search_book(char(*book_name)[30], char(*auth_name)[30],
    char(*publ_name)[30], int num_total_book) {
    int user_input; // 사용자의 입력을 받는다. 
    int i;
    char user_search[30];

    printf("어느 것으로 검색 할 것인가요? \n");
    printf("1. 책 제목 검색 \n");
    printf("2. 지은이 검색 \n");
    scanf("%d", &user_input);

    printf("검색할 단어를 입력해주세요 : ");
    scanf("%s", user_search);

    printf("검색 결과 \n");

    if (user_input == 1) {
       

       // i 가 0 부터 num_total_book 까지 가면서 각각의 책 제목을
        //사용자가 입력한 검색어와 비교하고 있다.

        for (i = 0; i < num_total_book; i++) {
            if (compare(book_name[i], user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i, book_name[i], auth_name[i]);
            }
        }

    }
    else if (user_input == 2) {
      
      //  i 가 0 부터 num_total_book 까지 가면서 각각의 지은이 이름을
       // 사용자가 입력한 검색어와 비교하고 있다.

        for (i = 0; i < num_total_book; i++) {
            if (compare(auth_name[i], user_search)) {
                printf("번호 : %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i, book_name[i], auth_name[i]);
            }
        }
    }

    return 0;
}
int compare(char* str1, char* str2)
{
    while (*str1)
    {
        if (*str1 != *str2)
            return 0;

        str1++;
        str2++;
    }

    if (*str2 == '\0')
        return 1;

    return 0;
}*/