/*
		printf("word %d �Է� : ", i + 1);
		fgets(d.word, sizeof(d.word), stdin);
		printf("meaning %d �Է� : ", i + 1);
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
struct OneWord dictionary() //Oneword ����ü�� ��ȯ�ϴ� dictionary �Լ� ����
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
	printf("�ܾ� : %s\n", d1.word);
	printf("�ǹ� : %s\n", d1.meaning);
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

//�ܾ��� ���α׷�

typedef struct information {
    int num;
    char word[20];
    char meaning[100];
    struct information* next;
} txt;

void memory(txt a[], int i);//���
void output(txt a[]);//�ҷ�����
void all_word(txt a[], int num);//��ü����

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

    printf("�ܾ �Է��Ͻÿ�.\n");
    scanf("%s", a[i].word);
    //scanf("%s", *p->word);
    printf("�ǹ̸� �Է��Ͻÿ�.\n");
    scanf("%s", a[i].meaning);
    //scanf("%s", *p->word);
    //(*p).num = i + 1;
    a[i].num = i + 1;
    //(*p).first_word = (*p).word[0];
    //a[i].meaning = a[i].word;
    a[i].next = NULL;

    printf("%s ��(��) ����Ǿ����ϴ�.\n", a[i].word);
    puts("");
}

void output(txt a[])//�ܾ�˻�
{
    char key[100] = "";
    int i = 0;
    int key_code = 0;
    //txt *p1 = NULL;
    //char *p2 = NULL;
    //p1 = a + i;
    //p2 = key;

    printf("ã�� �ܾ �Է��Ͻÿ�.\n");
    scanf("%s", key);

    for (i = 0; i < 100; i++)
    {
        if (strcmp(a[i].word, key) == 0)
        {
            printf("�ܾ� : %s / �ǹ� : %s\n", a[i].word, a[i].meaning);
            //printf("��ȣ : %d / �ܾ� : %s / ���ĺ� : %c\n", p1->num, p1->word, p1->first_word);
            key_code++;
        }
    }

    if (key_code == 0)
        puts("�ش� �ܾ ã�� ���߽��ϴ�.");

    puts("");
}

void all_word(txt a[], int num)//��ü����
{
    puts("");

    txt* first = NULL;
    txt* current = NULL;

    for (int i = 0; i < num; i++)
    {
        first = a + i;
        a[i].next = a + 1;
        printf("�ܾ� : % s / �ǹ� : %s\n", first->word, first->meaning);

        
        //current = first;
        ////puts(" ��ȣ :  �ܾ�  : ���ĺ�");
        //while (current != NULL)
        //{
        //    printf("��ȣ : %d / �ܾ� : %s / ���ĺ� : %c", current->num, current->word, current->first_word);
        //    current = current->next;
        //}
    }

    printf("�� %d���� �ܾ ����Ǿ� �ֽ��ϴ�.\n", num);

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
    fputs("���Ҽ� �Է�1(�Ǽ�, ���) : ", stdout);
    scanf("%lf %lf", &num1.real, &num1.imaginary);
   
    Complex num2;
    fputs("���Ҽ� �Է�2(�Ǽ�, ���) : ", stdout);
    scanf("%lf %lf", &num2.real, &num2.imaginary);

    Complex add;
    add.real = num1.real + num2.real;
    add.imaginary = num1.imaginary + num2.imaginary;

    Complex multiple;
    multiple.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    multiple.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    printf("���� ��� : �Ǽ� %lf, ��� %lf\n", add.real, add.imaginary);
    printf("���� ��� : �Ǽ� %lf, ��� %lf\n", multiple.real, multiple.imaginary);

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
    printf("num�� ���� �ּ� : %p\ngpa�� �����ּ�%p", &a.num, &a.gpa);
    return 0;
}*/