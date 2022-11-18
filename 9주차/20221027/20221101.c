/*
		printf("word %d 입력 : ", i + 1);
		fgets(d.word, sizeof(d.word), stdin);
		printf("meaning %d 입력 : ", i + 1);
		fgets(d.meaning, sizeof(d.meaning), stdin);
		printf("word %d : %s", i+1, d.word);
		printf("meaning %d : %s\n", i + 1, d.meaning);
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct OneWord
{
	char word[20];
	char meaning[100];

};
struct OneWord dictionary() //Oneword 구조체를 반환하는 dictionary 함수 정의
{
	int i;
	struct OneWord d;
	for (i = 0; i < 5; i++)
	{
		d.word 
	}
	return d;
}
int main(void)
{
	struct OneWord d1;
	d1 = dictionary();
	printf("단어 : %s\n", d1.word);
	printf("의미 : %s\n", d1.meaning);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct OneWord
{
	char word[20];
	char meaning[100];
}dictionary[100];

int search(void)
{
	int i;
	int cnt = 0;
	char unit[16] = "\0";

	gets(unit);
	
	for (i = 0; i < 100; i++)
	{
		if (strcmp(unit, dictionary[i].word == 0))
		{
			printf("%s : %s\n", dictionary[i].word, dictionary[i].meaning);
		}
		else
		{
			cnt++;
			strcpy(dictionary[i].word, unit);
			printf("%s : %s\n", dictionary[i].word, dictionary[i].meaning);
		}
	}
}
int main(void)
{
	int i;
	int chr;
	for (i = 0; i < 100; i++)
	{
		dictionary[i].word[0] = '\0';
		dictionary[i].meaning[0] = '\0';
	}
	while (1)
	{
		chr = getch();
	}
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

//단어장 프로그램

typedef struct information {
    int num;
    char word[20];
    char meaning[100];
    struct information* next;
} txt;

void memory(txt a[], int i);//기억
void output(txt a[]);//불러오기
void all_word(txt a[], int num);//전체보기

int main()
{
    int butten;
    txt dic[100];
    int num = 0;

    do
    {
        memory(dic, num);
        num++;
        output(dic);

    }while (num < 100);
    return 0;
}
void memory(txt a[], int i)
{
    //txt *p = NULL;
    //p = a + i;

    printf("단어를 입력하시오.\n");
    scanf("%s", a[i].word);
    //scanf("%s", *p->word);
    printf("의미를 입력하시오.\n");
    scanf("%s", a[i].meaning);
    //scanf("%s", *p->word);
    //(*p).num = i + 1;
    a[i].num = i + 1;
    //(*p).first_word = (*p).word[0];
    //a[i].meaning = a[i].word;
    a[i].next = NULL;

    printf("%s 이(가) 저장되었습니다.\n", a[i].word);
    puts("");
}

void output(txt a[])//단어검색
{
    char key[100] = "";
    int i = 0;
    int key_code = 0;
    //txt *p1 = NULL;
    //char *p2 = NULL;
    //p1 = a + i;
    //p2 = key;

    printf("찾을 단어를 입력하시오.\n");
    scanf("%s", key);

    for (i = 0; i < 100; i++)
    {
        if (strcmp(a[i].word, key) == 0)
        {
            printf("단어 : %s / 의미 : %s\n", a[i].word, a[i].meaning);
            //printf("번호 : %d / 단어 : %s / 알파벳 : %c\n", p1->num, p1->word, p1->first_word);
            key_code++;
        }
    }

    if (key_code == 0)
        puts("해당 단어를 찾지 못했습니다.");

    puts("");
}

void all_word(txt a[], int num)//전체보기
{
    puts("");

    txt* first = NULL;
    txt* current = NULL;

    for (int i = 0; i < num; i++)
    {
        first = a + i;
        a[i].next = a + 1;
        printf("단어 : % s / 의미 : %s\n", first->word, first->meaning);

        
        //current = first;
        ////puts(" 번호 :  단어  : 알파벳");
        //while (current != NULL)
        //{
        //    printf("번호 : %d / 단어 : %s / 알파벳 : %c", current->num, current->word, current->first_word);
        //    current = current->next;
        //}
    }

    printf("총 %d개의 단어가 저장되어 있습니다.\n", num);

    puts("");
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct complex
{
    double real;
    double imaginary;
}Complex;

int main(void)
{
    Complex num1;
    fputs("복소수 입력1(실수, 허수) : ", stdout);
    scanf("%lf %lf", &num1.real, &num1.imaginary);
   
    Complex num2;
    fputs("복소수 입력2(실수, 허수) : ", stdout);
    scanf("%lf %lf", &num2.real, &num2.imaginary);

    Complex add;
    add.real = num1.real + num2.real;
    add.imaginary = num1.imaginary + num2.imaginary;

    Complex multiple;
    multiple.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    multiple.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    printf("합의 결과 : 실수 %lf, 허수 %lf\n", add.real, add.imaginary);
    printf("곱의 결과 : 실수 %lf, 허수 %lf\n", multiple.real, multiple.imaginary);

    return 0;
}*/
/*
#include <stdio.h>
struct student
{
    int num;
    double gpa;
};

int main(void)
{
    struct student a;
    printf("num의 시작 주소 : %p\ngpa의 시작주소%p", &a.num, &a.gpa);
    return 0;
}*/