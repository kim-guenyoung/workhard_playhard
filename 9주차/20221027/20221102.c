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
		printf("�ܾ� %d �Է�\n", i + 1);
		fputs("�ܾ� : ", stdout);
		scanf("%s", dictionary[i].word);
		fputs("�ǹ� : ", stdout);
		scanf("%s", dictionary[i].meaning);
	}
	for (i = 0; i < 3; i++)
	{
		printf("�ܾ� %d : %s\n", i + 1, dictionary[i].word);
		printf("�ǹ� %d : %s\n", i + 1, dictionary[i].meaning);
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
    int user_choice;        // ������ ������ �޴� 
    int num_total_book = 0; // ���� å�� �� 

    //���� å, ����, ���ǻ縦 ������ �迭 ����. å�� �ִ� ������ 100 ��
    char book_name[100][30], auth_name[100][30];
    //���ȴ��� ���¸� ǥ��

    while (1) {
        printf("���� ���� ���α׷� \n");
        printf("�޴��� �����ϼ��� \n");
        printf("1. å�� ���� �߰��ϱ� \n");
        printf("2. å�� �˻��ϱ� \n");

        printf("����� ������ : ");
        scanf("%d", &user_choice);

        if (user_choice == 1) {
            //å�� ���� �߰��ϴ� �Լ� ȣ�� 
            add_book(book_name, auth_name, &num_total_book);
        }
        else if (user_choice == 2) {
            // å�� �˻��ϴ� �Լ� ȣ�� 
            search_book(book_name, auth_name, &num_total_book);
        }
    }

    return 0;
}
// å�� �߰��ϴ� �Լ�
int add_book(char(*book_name)[30], char(*auth_name)[30], int* num_total_book)
{
    printf("�߰��� å�� ���� : ");
    scanf("%s", book_name[*num_total_book]);

    printf("�߰��� å�� ���� : ");
    scanf("%s", auth_name[*num_total_book]);

    
    printf("�߰� �Ϸ�! \n");
    (*num_total_book)++;

    return 0;
}
// å�� �˻��ϴ� �Լ�
int search_book(char(*book_name)[30], char(*auth_name)[30],
    char(*publ_name)[30], int num_total_book) {
    int user_input; // ������� �Է��� �޴´�. 
    int i;
    char user_search[30];

    printf("��� ������ �˻� �� ���ΰ���? \n");
    printf("1. å ���� �˻� \n");
    printf("2. ������ �˻� \n");
    scanf("%d", &user_input);

    printf("�˻��� �ܾ �Է����ּ��� : ");
    scanf("%s", user_search);

    printf("�˻� ��� \n");

    if (user_input == 1) {
       

       // i �� 0 ���� num_total_book ���� ���鼭 ������ å ������
        //����ڰ� �Է��� �˻���� ���ϰ� �ִ�.

        for (i = 0; i < num_total_book; i++) {
            if (compare(book_name[i], user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i, book_name[i], auth_name[i]);
            }
        }

    }
    else if (user_input == 2) {
      
      //  i �� 0 ���� num_total_book ���� ���鼭 ������ ������ �̸���
       // ����ڰ� �Է��� �˻���� ���ϰ� �ִ�.

        for (i = 0; i < num_total_book; i++) {
            if (compare(auth_name[i], user_search)) {
                printf("��ȣ : %d // å �̸� : %s // ������ : %s // ���ǻ� : %s \n", i, book_name[i], auth_name[i]);
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